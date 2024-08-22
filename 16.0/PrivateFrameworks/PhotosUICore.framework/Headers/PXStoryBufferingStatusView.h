// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYBUFFERINGSTATUSVIEW_H
#define PXSTORYBUFFERINGSTATUSVIEW_H

@class UIView, UIActivityIndicatorView;
@protocol PXGReusableView;


#import "PXStoryBufferingStatusViewConfiguration.h"

@interface PXStoryBufferingStatusView : UIView <PXGReusableView>



@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView
@property (copy, nonatomic) PXStoryBufferingStatusViewConfiguration *userData; // ivar: _userData


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateAnimation;
-(void)becomeReusable;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif