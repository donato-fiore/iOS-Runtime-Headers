// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEINITIALEDGESFAILGESTUREFEATURE_H
#define _UISEINITIALEDGESFAILGESTUREFEATURE_H

@class UISEGestureFeature;
@protocol _UISEGestureFeatureSettings;



@interface _UISEInitialEdgesFailGestureFeature : UISEGestureFeature {
    id<_UISEGestureFeatureSettings> *_settings;
    BOOL _useEdgeRegionSize;
}




-(id)initWithSettings:(id)arg0 useEdgeRegionSize:(BOOL)arg1 ;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;


@end


#endif