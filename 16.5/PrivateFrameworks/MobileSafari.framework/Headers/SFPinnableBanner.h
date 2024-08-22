// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPINNABLEBANNER_H
#define SFPINNABLEBANNER_H

@class UIView, NSNumber;


#import "SFOverlayProvider.h"
#import "SFBannerTheme.h"

@interface SFPinnableBanner : UIView {
    UIView *_topSeparator;
    UIView *_bottomSeparator;
}


@property (nonatomic, getter=isInitiallyBehindNavigationBar) BOOL initiallyBehindNavigationBar; // ivar: _initiallyBehindNavigationBar
@property (readonly, nonatomic) SFOverlayProvider *overlayProvider; // ivar: _overlayProvider
@property (retain, nonatomic) NSNumber *pinnedOffset; // ivar: _pinnedOffset
@property (nonatomic, getter=isPinnedToTop) BOOL pinnedToTop; // ivar: _pinnedToTop
@property (readonly, nonatomic) BOOL shouldUsePlainTheme;
@property (nonatomic) BOOL showsBottomSeparator;
@property (nonatomic) BOOL showsTopSeparator;
@property (retain, nonatomic) SFBannerTheme *theme; // ivar: _theme


+(BOOL)omitsBottomSeparator;
+(CGFloat)pinAnimationDelay;
+(CGFloat)unpinAnimationDelay;
+(CGFloat)unpinAnimationDuration;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setUpSeparators;
-(void)contentSizeCategoryDidChange;
-(void)invalidateBannerLayout;


@end


#endif