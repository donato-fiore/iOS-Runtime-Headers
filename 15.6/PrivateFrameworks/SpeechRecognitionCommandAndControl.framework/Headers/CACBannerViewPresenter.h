// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACBANNERVIEWPRESENTER_H
#define CACBANNERVIEWPRESENTER_H

@class UIView;

#import <Foundation/Foundation.h>

#import "CACBannerView.h"

@interface CACBannerViewPresenter : NSObject

@property (retain, nonatomic) CACBannerView *bannerView; // ivar: _bannerView
@property (readonly, nonatomic) UIView *containingView; // ivar: _containingView


+(CGFloat)durationToDisplayMessageString:(id)arg0 ;
-(id)initWithContainingView:(id)arg0 ;
-(void)_hideBannerView;
-(void)dismissBannerView;
-(void)presentBannerViewWithText:(id)arg0 type:(NSInteger)arg1 ;
-(void)presentBannerViewWithText:(id)arg0 type:(NSInteger)arg1 duration:(CGFloat)arg2 ;


@end


#endif