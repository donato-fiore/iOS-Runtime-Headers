// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLINEOUTPUTREGION_H
#define CRLINEOUTPUTREGION_H



#import "CRCompositeOutputRegion.h"

@interface CRLineOutputRegion : CRCompositeOutputRegion

@property NSUInteger lineWrappingType; // ivar: _lineWrappingType
@property (readonly) BOOL shouldWrapToNextLine;
@property BOOL useLineSeparatorAsLineBreak; // ivar: _useLineSeparatorAsLineBreak


+(id)_lineWithChildren:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
+(id)lineWithCharacters:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
+(id)lineWithText:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
+(id)lineWithTextFeature:(id)arg0 candidateIdx:(NSInteger)arg1 subfeatureType:(NSUInteger)arg2 imageSize:(struct CGSize )arg3 confidenceThresholdProvider:(id)arg4 injectSpaceCharacter:(BOOL)arg5 ;
+(id)lineWithTextFeature:(id)arg0 subfeatureType:(NSUInteger)arg1 imageSize:(struct CGSize )arg2 confidenceThresholdProvider:(id)arg3 ;
+(id)lineWithTextFeature:(id)arg0 subfeatureType:(NSUInteger)arg1 imageSize:(struct CGSize )arg2 confidenceThresholdProvider:(id)arg3 injectSpaceCharacter:(BOOL)arg4 ;
+(id)lineWithWords:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)wordCount;
-(NSUInteger)type;
-(id)contentBaselines;
-(id)copyWithZone:(struct _NSZone *)arg0 copyChildren:(BOOL)arg1 copyCandidates:(BOOL)arg2 ;
-(id)crCodableDataRepresentation;
-(id)initWithCRCodableDataRepresentation:(id)arg0 version:(NSInteger)arg1 offset:(*NSUInteger)arg2 ;
-(id)joiningDelimiter;


@end


#endif