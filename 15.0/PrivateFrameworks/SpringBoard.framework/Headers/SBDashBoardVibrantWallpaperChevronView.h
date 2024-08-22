// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDVIBRANTWALLPAPERCHEVRONVIEW_H
#define SBDASHBOARDVIBRANTWALLPAPERCHEVRONVIEW_H

@class SBUIChevronView, NSString, _UILegibilitySettings;
@protocol SBUILegibility, CSWallpaperColorProvider;


#import "SBWallpaperEffectView.h"

@interface SBDashBoardVibrantWallpaperChevronView : SBUIChevronView <SBUILegibility>

 {
    SBWallpaperEffectView *_effectView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat strength; // ivar: _legibilityStrength
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CSWallpaperColorProvider> *wallpaperColorProvider; // ivar: _wallpaperColorProvider


-(id)init;
-(id)initWithColor:(id)arg0 ;
-(void)_updateVibrancy;


@end


#endif