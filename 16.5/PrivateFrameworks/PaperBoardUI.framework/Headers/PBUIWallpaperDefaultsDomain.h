// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERDEFAULTSDOMAIN_H
#define PBUIWALLPAPERDEFAULTSDOMAIN_H

@class BSAbstractDefaultDomain, NSDate, NSDictionary;



@interface PBUIWallpaperDefaultsDomain : BSAbstractDefaultDomain

@property (retain, nonatomic) NSDate *dateIrisWallpaperLastPlayed;
@property (retain, nonatomic) NSDate *dateWallpaperLastChanged;
@property (nonatomic) BOOL enableWallpaperDimming;
@property (nonatomic) NSDictionary *homeScreenWallpapers;
@property (nonatomic) NSUInteger irisWallpaperPlayCount;
@property (readonly, nonatomic) BOOL legacyUsesUniqueHomeScreenWallpaper;
@property (nonatomic) NSDictionary *lockScreenWallpapers;


-(id)init;
-(void)_bindAndRegisterDefaults;
-(void)clearLegacyDefaults;


@end


#endif