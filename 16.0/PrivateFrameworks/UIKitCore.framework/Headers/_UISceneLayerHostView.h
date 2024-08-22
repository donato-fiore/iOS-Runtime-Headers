// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCENELAYERHOSTVIEW_H
#define _UISCENELAYERHOSTVIEW_H

@class UIDirectionalRotationView, FBSceneLayer;


#import "UIScenePresentationContext.h"
#import "UITransformer.h"

@interface _UISceneLayerHostView : UIDirectionalRotationView {
    UIScenePresentationContext *_presentationContext;
}


@property (retain, nonatomic) UIScenePresentationContext *currentPresentationContext; // ivar: _currentPresentationContext
@property (nonatomic) BOOL inheritsSecurity; // ivar: _inheritsSecurity
@property (nonatomic) BOOL resizesHostedContext; // ivar: _resizesHostedContext
@property (readonly, nonatomic) FBSceneLayer *sceneLayer; // ivar: _sceneLayer
@property (nonatomic) BOOL stopsHitTestTransformAccumulation; // ivar: _stopsHitTestTransformAccumulation
@property (retain, nonatomic) UITransformer *transformer; // ivar: _transformer


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSceneLayer:(id)arg0 ;


@end


#endif