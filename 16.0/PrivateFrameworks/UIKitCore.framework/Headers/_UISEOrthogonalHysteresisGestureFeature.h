// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEORTHOGONALHYSTERESISGESTUREFEATURE_H
#define _UISEORTHOGONALHYSTERESISGESTUREFEATURE_H

@class UISEGestureFeature;
@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;



@interface _UISEOrthogonalHysteresisGestureFeature : UISEGestureFeature {
    id<_UISEGestureFeatureSettings> *_settings;
    id<_UISETouchedEdgesProvider> *_provider;
    CGPoint _initialLocation;
    CGFloat _initialTimestamp;
}




-(id)initWithSettings:(id)arg0 touchedEdgesProvider:(id)arg1 ;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;


@end


#endif