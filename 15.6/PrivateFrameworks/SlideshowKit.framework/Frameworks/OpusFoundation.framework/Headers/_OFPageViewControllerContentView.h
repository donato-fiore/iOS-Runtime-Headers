// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _OFPAGEVIEWCONTROLLERCONTENTVIEW_H
#define _OFPAGEVIEWCONTROLLERCONTENTVIEW_H

@class UIPageControl;


#import "OFUIView.h"

@interface _OFPageViewControllerContentView : OFUIView

@property (readonly, nonatomic) UIPageControl *pageControl; // ivar: _pageControl


+(Class)layerClass;
-(void)_setupPageControl:(id)arg0 ;
-(void)dealloc;
-(void)invalidatePageViewController;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif