// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGFOCUSCONTAINERGUIDEVIEW_H
#define PXGFOCUSCONTAINERGUIDEVIEW_H

@class UIView, UIFocusContainerGuide, NSArray;
@protocol PXGReusableView;


#import "PXGFocusContainerGuideViewConfiguration.h"

@interface PXGFocusContainerGuideView : UIView <PXGReusableView>

 {
    UIFocusContainerGuide *_focusGuide;
    NSArray *_constraints;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXGFocusContainerGuideViewConfiguration *userData; // ivar: _userData


-(BOOL)_isEligibleForFocusInteraction;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)becomeReusable;
-(void)didMoveToSuperview;
-(void)prepareForReuse;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif