// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKSPRINGBOARDMIGRATIONINPUTSOURCE_H
#define WKSPRINGBOARDMIGRATIONINPUTSOURCE_H

@class NSMutableDictionary;
@protocol WKWallpaperInputSource;

#import <Foundation/Foundation.h>


@interface WKSpringBoardMigrationInputSource : NSObject <WKWallpaperInputSource>



@property (retain, nonatomic) NSMutableDictionary *_wallpaperBokehVariantLookup; // ivar: __wallpaperBokehVariantLookup
@property (retain, nonatomic) NSMutableDictionary *_wallpaperColorLookup; // ivar: __wallpaperColorLookup
@property (retain, nonatomic) NSMutableDictionary *_wallpaperImageLookup; // ivar: __wallpaperImageLookup
@property (retain, nonatomic) NSMutableDictionary *_wallpaperOptionsLookup; // ivar: __wallpaperOptionsLookup
@property (retain, nonatomic) NSMutableDictionary *_wallpaperOriginalImageLookup; // ivar: __wallpaperOriginalImageLookup
@property (retain, nonatomic) NSMutableDictionary *_wallpaperOriginalVideoURLLookup; // ivar: __wallpaperOriginalVideoURLLookup
@property (retain, nonatomic) NSMutableDictionary *_wallpaperVideoURLLookup; // ivar: __wallpaperVideoURLLookup
@property (readonly, nonatomic, getter=isHomeScreenIsAppearanceAware) BOOL homeScreenIsAppearanceAware; // ivar: _homeScreenIsAppearanceAware
@property (readonly, nonatomic, getter=isHomeScreenIsSystemContent) BOOL homeScreenIsSystemContent; // ivar: _homeScreenIsSystemContent
@property (readonly, nonatomic) BOOL homeScreenMirrorsLockScreen; // ivar: _homeScreenMirrorsLockScreen
@property (readonly, nonatomic) NSUInteger homeScreenWallpaperType; // ivar: _homeScreenWallpaperType
@property (readonly, nonatomic, getter=isLockScreenIsAppearanceAware) BOOL lockScreenIsAppearanceAware; // ivar: _lockScreenIsAppearanceAware
@property (readonly, nonatomic, getter=isLockScreenIsSystemContent) BOOL lockScreenIsSystemContent; // ivar: _lockScreenIsSystemContent
@property (readonly, nonatomic) NSUInteger lockScreenWallpaperType; // ivar: _lockScreenWallpaperType


-(BOOL)_isAppearanceAwareWallpaperAtLocation:(id)arg0 withConfigurationManager:(id)arg1 ;
-(BOOL)_isWallpaperConfigurationAppleSystemContent:(id)arg0 ;
-(BOOL)isAppearanceWallpaperAtLocation:(id)arg0 ;
-(NSUInteger)wallpaperTypeForLocation:(id)arg0 ;
-(id)bokehVariantForLocation:(id)arg0 ;
-(id)initWithConfigurationManager:(id)arg0 ;
-(id)wallpaperColorForLocation:(id)arg0 ;
-(id)wallpaperImageForLocation:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)wallpaperOptionsForLocation:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)wallpaperOriginalImageForLocation:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)wallpaperOriginalVideoURLForLocation:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)wallpaperVideoURLForLocation:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(void)_populateMigrationInputWithConfigurationManager:(id)arg0 ;


@end


#endif