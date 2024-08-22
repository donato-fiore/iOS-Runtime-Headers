// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWALLPAPERDEFAULTS_H
#define SBWALLPAPERDEFAULTS_H

@class NSDate, NSDictionary;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBWallpaperDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSDate *dateIrisWallpaperLastPlayed;
@property (retain, nonatomic) NSDate *dateWallpaperLastChanged;
@property (nonatomic) BOOL enableWallpaperDimming;
@property (nonatomic) NSDictionary *homeScreenWallpapers;
@property (nonatomic) NSUInteger irisWallpaperPlayCount;
@property (readonly, nonatomic) BOOL legacyUsesUniqueHomeScreenWallpaper;
@property (nonatomic) NSDictionary *lockScreenWallpapers;


-(void)_bindAndRegisterDefaults;
-(void)clearLegacyDefaults;


@end


#endif