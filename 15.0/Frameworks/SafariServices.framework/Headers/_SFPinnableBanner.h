// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPINNABLEBANNER_H
#define _SFPINNABLEBANNER_H

@class UIView, SFBannerTheme;


#import "_SFOverlayProvider.h"

@interface _SFPinnableBanner : UIView

@property (nonatomic, getter=isInitiallyBehindNavigationBar) BOOL initiallyBehindNavigationBar; // ivar: _initiallyBehindNavigationBar
@property (readonly, nonatomic) _SFOverlayProvider *overlayProvider; // ivar: _overlayProvider
@property (nonatomic, getter=isPinnedToTop) BOOL pinnedToTop; // ivar: _pinnedToTop
@property (retain, nonatomic) SFBannerTheme *theme; // ivar: _theme


+(CGFloat)pinAnimationDelay;
+(CGFloat)unpinAnimationDelay;
+(CGFloat)unpinAnimationDuration;
-(void)contentSizeCategoryDidChange;
-(void)invalidateBannerLayout;


@end


#endif