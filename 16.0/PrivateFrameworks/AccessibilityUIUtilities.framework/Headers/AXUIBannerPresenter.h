// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUIBANNERPRESENTER_H
#define AXUIBANNERPRESENTER_H



#import "AXUIFloatingViewPresenter.h"
#import "AXUIBannerView.h"

@interface AXUIBannerPresenter : AXUIFloatingViewPresenter

@property (retain, nonatomic) AXUIBannerView *bannerView; // ivar: _bannerView


-(id)initWithContainingView:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)presentBannerViewWithText:(id)arg0 duration:(CGFloat)arg1 ;
-(void)presentBannerViewWithText:(id)arg0 secondaryText:(id)arg1 duration:(CGFloat)arg2 fromUserAction:(BOOL)arg3 ;
-(void)presentCustomView:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif