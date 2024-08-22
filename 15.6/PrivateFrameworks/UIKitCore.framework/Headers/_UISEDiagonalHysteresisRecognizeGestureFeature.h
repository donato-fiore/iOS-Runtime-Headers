// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEDIAGONALHYSTERESISRECOGNIZEGESTUREFEATURE_H
#define _UISEDIAGONALHYSTERESISRECOGNIZEGESTUREFEATURE_H

@class UISEGestureFeature;
@protocol _UISEGestureFeatureSettings;



@interface _UISEDiagonalHysteresisRecognizeGestureFeature : UISEGestureFeature {
    id<_UISEGestureFeatureSettings> *_settings;
    CGPoint _initialLocation;
}




-(id)initWithSettings:(id)arg0 ;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;


@end


#endif