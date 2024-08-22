// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGFOCUSGUIDEVIEW_H
#define PXGFOCUSGUIDEVIEW_H

@class UIView, UIFocusGuide, NSArray;
@protocol PXGReusableView;


#import "PXGFocusGuideViewConfiguration.h"

@interface PXGFocusGuideView : UIView <PXGReusableView>

 {
    UIFocusGuide *_focusGuide;
    NSArray *_constraints;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXGFocusGuideViewConfiguration *userData; // ivar: _userData


-(BOOL)_isEligibleForFocusInteraction;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)becomeReusable;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif