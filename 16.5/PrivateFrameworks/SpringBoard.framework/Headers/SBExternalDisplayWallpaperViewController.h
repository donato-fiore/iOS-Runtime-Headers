// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYWALLPAPERVIEWCONTROLLER_H
#define SBEXTERNALDISPLAYWALLPAPERVIEWCONTROLLER_H

@class UIViewController, NSString, UIView;
@protocol SBExternalDisplayWallpaperConfigurations;


#import "SBExternalDisplayWallpaperEffectView.h"

@interface SBExternalDisplayWallpaperViewController : UIViewController <SBExternalDisplayWallpaperConfigurations>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *wallpaperContainerView; // ivar: _wallpaperContainerView
@property (retain, nonatomic) SBExternalDisplayWallpaperEffectView *wallpaperEffectView; // ivar: _wallpaperEffectView


-(BOOL)enableBlurEffects;
-(id)initWithWindowScene:(id)arg0 ;


@end


#endif