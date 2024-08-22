// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENELAYOUTELEMENTANIMATIONWRAPPERVIEW_H
#define SBSCENELAYOUTELEMENTANIMATIONWRAPPERVIEW_H

@class UIView, SBOrientationTransformWrapperView, UIView<BSInvalidatable>;


#import "SBApplicationSceneView.h"
#import "SBLayoutElement.h"

@interface SBSceneLayoutElementAnimationWrapperView : UIView {
    SBApplicationSceneView *_appView;
    SBOrientationTransformWrapperView *_orientedView;
}


@property (readonly, nonatomic) SBApplicationSceneView *applicationSceneViewIfExists;
@property (readonly, nonatomic) UIView<BSInvalidatable> *contentView; // ivar: _contentView
@property (readonly, nonatomic) SBLayoutElement *layoutElement; // ivar: _layoutElement


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutElement:(id)arg0 contentView:(id)arg1 orientation:(NSInteger)arg2 ;
-(void)addContentView:(id)arg0 ;
-(void)invalidate;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif