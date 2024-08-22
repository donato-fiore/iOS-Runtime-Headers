// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIPORTRAITAUTOCALCULATOR_H
#define PIPORTRAITAUTOCALCULATOR_H

@class NUAutoCalculator, NSString;
@protocol PIFaceObservingAutoCalculator;


#import "PIFaceObservationCache.h"

@interface PIPortraitAutoCalculator : NUAutoCalculator <PIFaceObservingAutoCalculator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PIFaceObservationCache *faceObservationCache; // ivar: _faceObservationCache
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canApplyPortraitEffectsWithMetadata:(id)arg0 ;
+(BOOL)isStillImageDisparity:(id)arg0 ;
+(id)depthEffectInfoDictionaryFromFaceObservations:(id)arg0 focus:(id)arg1 valuesAtCapture:(id)arg2 lumaNoiseScale:(float)arg3 orientation:(NSInteger)arg4 ;
+(id)depthEffectInfoDictionaryFromFaceObservations:(id)arg0 metadata:(id)arg1 orientation:(NSInteger)arg2 valuesAtCapture:(id)arg3 ;
+(id)focusRectDictionaryFromMetadata:(id)arg0 ;
+(id)focusRectDictionaryFromRect:(struct CGRect )arg0 ;
+(id)portraitEffectInfoDictionaryFromFaceObservations:(id)arg0 orientation:(NSInteger)arg1 valuesAtCapture:(id)arg2 ;
+(id)portraitInfoDictionaryFromCameraMetadata:(id)arg0 ;
+(id)portraitInfoDictionaryFromFaceObservations:(id)arg0 metadata:(id)arg1 orientation:(NSInteger)arg2 valuesAtCapture:(id)arg3 ;
-(void)_calculateWithImageProperties:(id)arg0 valuesAtCapture:(id)arg1 completion:(id)arg2 ;
-(void)submit:(id)arg0 ;


@end


#endif