// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGPAGECONTROL_H
#define PXGPAGECONTROL_H

@class UIView, UIPageControl;
@protocol PXGReusableView;


#import "PXGPageControlConfiguration.h"

@interface PXGPageControl : UIView <PXGReusableView>

 {
    UIPageControl *_pageControl;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (nonatomic) NSInteger currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (nonatomic) NSInteger numberOfPages;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXGPageControlConfiguration *userData; // ivar: _userData


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_valueChanged:(id)arg0 ;
-(void)becomeReusable;
-(void)prepareForReuse;


@end


#endif