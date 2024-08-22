// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEFIRMWAREEDGESFAILGESTUREFEATURE_H
#define _UISEFIRMWAREEDGESFAILGESTUREFEATURE_H

@class UISEGestureFeature;
@protocol _UISETouchedEdgesProvider, _UISEGestureFeatureSettings;



@interface _UISEFirmwareEdgesFailGestureFeature : UISEGestureFeature <_UISETouchedEdgesProvider>

 {
    id<_UISEGestureFeatureSettings> *_settings;
    BOOL _hasDoneTest;
}


@property (readonly, nonatomic) NSUInteger touchedEdges; // ivar: _touchedEdges


-(id)debugDictionary;
-(id)initWithSettings:(id)arg0 ;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;


@end


#endif