// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRWORDOUTPUTREGION_H
#define CRWORDOUTPUTREGION_H



#import "CROutputRegion.h"
#import "CRNormalizedPolyline.h"

@interface CRWordOutputRegion : CROutputRegion

@property (retain) CRNormalizedPolyline *baseline; // ivar: _baseline


+(id)wordWithCharacters:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
+(id)wordWithText:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
+(id)wordWithTextFeature:(id)arg0 candidateIdx:(NSInteger)arg1 imageSize:(struct CGSize )arg2 confidenceThresholdProvider:(id)arg3 ;
+(id)wordWithTextFeature:(id)arg0 imageSize:(struct CGSize )arg1 confidenceThresholdProvider:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)type;
-(id)contentBaselines;
-(id)copyWithZone:(struct _NSZone *)arg0 copyChildren:(BOOL)arg1 copyCandidates:(BOOL)arg2 ;
-(id)crCodableDataRepresentation;
-(id)initWithCRCodableDataRepresentation:(id)arg0 version:(NSInteger)arg1 offset:(*NSUInteger)arg2 ;
-(id)joiningDelimiter;


@end


#endif