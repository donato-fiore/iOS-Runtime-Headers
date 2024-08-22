// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEMUXGESTUREFEATURE_H
#define _UISEMUXGESTUREFEATURE_H

@class UISEGestureFeature, NSString, NSDictionary;
@protocol _UISEGestureFeatureDelegate, _UISEGestureFeatureSettings;



@interface _UISEMuxGestureFeature : UISEGestureFeature <_UISEGestureFeatureDelegate>

 {
    id<_UISEGestureFeatureSettings> *_settings;
    id *_createFeatureBlock;
    NSUInteger _fails;
    NSUInteger _recognizes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *subfeatures; // ivar: _subfeatures
@property (readonly) Class superclass;


-(id)debugDictionary;
-(id)initWithSettings:(id)arg0 createFeatureBlock:(id)arg1 ;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;
-(void)featureDidChangeState:(id)arg0 ;


@end


#endif