// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUAUTOADJUSTMENTCONTROLLER_H
#define PUAUTOADJUSTMENTCONTROLLER_H

@class NSArray, NSDictionary, PICompositionController;
@protocol NUImageProperties;

#import <Foundation/Foundation.h>


@interface PUAutoAdjustmentController : NSObject {
    NSArray *_cachedRedEyeCorrections;
    NSDictionary *_cachedWhiteBalanceSettings;
    CGFloat _cachedSmartToneLevel;
    CGFloat _cachedSmartColorLevel;
    BOOL _cachedValuesAreValid;
    PICompositionController *_stashedPreviousManualComposition;
}


@property (nonatomic, getter=isBusy, setter=_setBusy:) BOOL busy; // ivar: _busy
@property (retain, nonatomic) NSObject<NUImageProperties> *imageProperties; // ivar: _imageProperties


-(BOOL)isAutoEnhanceEnabledForCompositionController:(id)arg0 ;
-(void)_applyAutoValuesOnCompositionController:(id)arg0 whiteBalanceSettings:(id)arg1 redEyeCorrections:(id)arg2 smartToneLevel:(CGFloat)arg3 smartColorLevel:(CGFloat)arg4 valuesCalculator:(id)arg5 ;
-(void)_revertAutoValuesOnCompositionController:(id)arg0 ;
-(void)calculateStatisticsForCompositionController:(id)arg0 valuesCalculator:(id)arg1 completionHandler:(id)arg2 ;
-(void)disableAutoEnhanceOnCompositionController:(id)arg0 ;
-(void)enableAutoEnhanceOnCompositionController:(id)arg0 valuesCalculator:(id)arg1 completionHandler:(id)arg2 ;
-(void)ensureCacheUpToDateForValuesCalculator:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidateCachedAdjustments;


@end


#endif