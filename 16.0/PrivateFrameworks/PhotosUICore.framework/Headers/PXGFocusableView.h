// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGFOCUSABLEVIEW_H
#define PXGFOCUSABLEVIEW_H

@class UIView;
@protocol PXGReusableView;


#import "PXGFocusableViewConfiguration.h"

@interface PXGFocusableView : UIView <PXGReusableView>

 {
    ? _delegateFlags;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXGFocusableViewConfiguration *userData; // ivar: _userData


-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)canBecomeFocused;
-(id)description;
-(struct CGPoint )convertHostedChildCenter:(struct CGPoint )arg0 fromGlobalLayer:(id)arg1 ;
-(void)addHostedLayer:(id)arg0 ;
-(void)addHostedView:(id)arg0 ;
-(void)becomeReusable;
-(void)didHintFocusMovement:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif