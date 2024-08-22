// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDLEGIBILITYPROVIDER_H
#define SBDASHBOARDLEGIBILITYPROVIDER_H

@class NSString;
@protocol PBUIWallpaperObserver, CSLegibilityProviding, CSLegibilityProviderDelegate;

#import <Foundation/Foundation.h>

#import "SBWallpaperController.h"

@interface SBDashBoardLegibilityProvider : NSObject <PBUIWallpaperObserver, CSLegibilityProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CSLegibilityProviderDelegate> *legibilityProviderDelegate; // ivar: _legibilityProviderDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) SBWallpaperController *wallpaperController; // ivar: _wallpaperController


-(id)_wallpaperLegibilitySettings;
-(id)currentLegibilitySettings;
-(id)init;
-(id)initWithWallpaperController:(id)arg0 ;
-(void)_notifyDelegate;
-(void)wallpaperDidChangeForVariant:(NSInteger)arg0 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg0 forVariant:(NSInteger)arg1 ;


@end


#endif