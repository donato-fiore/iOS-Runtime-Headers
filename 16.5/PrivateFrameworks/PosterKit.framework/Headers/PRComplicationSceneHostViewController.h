// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONSCENEHOSTVIEWCONTROLLER_H
#define PRCOMPLICATIONSCENEHOSTVIEWCONTROLLER_H

@class UIViewController, FBScene, NSMutableDictionary, NSString;
@protocol FBSceneLayerManagerObserver, BSInvalidatable, UIScenePresenter;



@interface PRComplicationSceneHostViewController : UIViewController <FBSceneLayerManagerObserver, BSInvalidatable>

 {
    FBScene *_scene;
    id<UIScenePresenter> *_scenePresenter;
    NSMutableDictionary *_touchDeliveryPolicyAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithScene:(id)arg0 ;
-(void)_clearTouchDeliveryPolicies;
-(void)_updateTouchDeliveryPolicies;
-(void)invalidate;
-(void)loadView;
-(void)sceneLayerManagerDidStartTrackingLayers:(id)arg0 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg0 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;


@end


#endif