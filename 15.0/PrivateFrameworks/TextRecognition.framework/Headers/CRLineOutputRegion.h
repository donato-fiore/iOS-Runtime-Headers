// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRLINEOUTPUTREGION_H
#define CRLINEOUTPUTREGION_H



#import "CRCompositeOutputRegion.h"

@interface CRLineOutputRegion : CRCompositeOutputRegion



+(id)_lineWithChildren:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
+(id)lineWithCharacters:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
+(id)lineWithText:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
+(id)lineWithTextFeature:(id)arg0 candidateIdx:(NSInteger)arg1 subfeatureType:(NSUInteger)arg2 imageSize:(struct CGSize )arg3 confidenceThresholdProvider:(id)arg4 injectSpaceCharacter:(BOOL)arg5 ;
+(id)lineWithTextFeature:(id)arg0 subfeatureType:(NSUInteger)arg1 imageSize:(struct CGSize )arg2 confidenceThresholdProvider:(id)arg3 ;
+(id)lineWithTextFeature:(id)arg0 subfeatureType:(NSUInteger)arg1 imageSize:(struct CGSize )arg2 confidenceThresholdProvider:(id)arg3 injectSpaceCharacter:(BOOL)arg4 ;
+(id)lineWithWords:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
-(NSInteger)wordCount;
-(NSUInteger)type;
-(id)contentBaselines;
-(id)joiningDelimeter;


@end


#endif