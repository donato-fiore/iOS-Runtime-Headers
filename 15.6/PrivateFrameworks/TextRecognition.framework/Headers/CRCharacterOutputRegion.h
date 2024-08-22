// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCHARACTEROUTPUTREGION_H
#define CRCHARACTEROUTPUTREGION_H



#import "CROutputRegion.h"
#import "CRNormalizedPolyline.h"

@interface CRCharacterOutputRegion : CROutputRegion

@property (retain) CRNormalizedPolyline *baseline; // ivar: _baseline


+(id)characterWithText:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
+(id)characterWithTextFeature:(id)arg0 candidateIdx:(NSInteger)arg1 imageSize:(struct CGSize )arg2 confidenceThresholdProvider:(id)arg3 ;
+(id)characterWithTextFeature:(id)arg0 imageSize:(struct CGSize )arg1 confidenceThresholdProvider:(id)arg2 ;
-(BOOL)computesBoundsFromChildren;
-(BOOL)computesTranscriptFromChildren;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)type;
-(id)contentBaselines;
-(id)copyWithZone:(struct _NSZone *)arg0 copyChildren:(BOOL)arg1 copyCandidates:(BOOL)arg2 ;
-(id)crCodableDataRepresentation;
-(id)init;
-(id)initWithCRCodableDataRepresentation:(id)arg0 version:(NSInteger)arg1 offset:(*NSUInteger)arg2 ;
-(id)joiningDelimeter;


@end


#endif