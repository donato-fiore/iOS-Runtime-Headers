// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSMAINPAGEVIEW_H
#define CSMAINPAGEVIEW_H

@class _UILegibilitySettings, NSString, SBWallpaperEffectView;
@protocol CAAnimationDelegate;


#import "CSPageViewBase.h"
#import "CSVibrantWallpaperButton.h"

@interface CSMainPageView : CSPageViewBase <CAAnimationDelegate>

 {
    _UILegibilitySettings *_legibilitySettings;
    BOOL _logoutHugCorner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fakeWallpaperVisible; // ivar: _fakeWallpaperVisible
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSVibrantWallpaperButton *logoutButtonView; // ivar: _logoutButtonView
@property (readonly) Class superclass;
@property (retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // ivar: _wallpaperEffectView


-(id)presentationRegions;
-(struct UIEdgeInsets )_logoutButtonInsets;
-(void)_layoutLogoutButtonView;
-(void)_layoutWallpaperEffectView;
-(void)_updateLogoutButtonForLegibilitySettings;
-(void)layoutSubviews;
-(void)updateForLegibilitySettings:(id)arg0 ;
-(void)updateForPresentation:(id)arg0 ;


@end


#endif