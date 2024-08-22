// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKWALLPAPERBUNDLE_H
#define WKWALLPAPERBUNDLE_H

@class NSURL, NSMutableDictionary, NSString;
@protocol NAIdentifiable, WKWallpaperRepresenting;

#import <Foundation/Foundation.h>


@interface WKWallpaperBundle : NSObject <NAIdentifiable, WKWallpaperRepresenting>



@property (copy, nonatomic) NSURL *_bundleURL; // ivar: __bundleURL
@property (retain, nonatomic) NSMutableDictionary *_darkAppearanceWallpapers; // ivar: __darkAppearanceWallpapers
@property (retain, nonatomic) NSMutableDictionary *_defaultAppearanceWallpapers; // ivar: __defaultAppearanceWallpapers
@property (readonly, nonatomic, getter=isAppearanceAware) BOOL appearanceAware; // ivar: _appearanceAware
@property (readonly, nonatomic) NSUInteger contentSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableParallax; // ivar: _disableParallax
@property (readonly, nonatomic, getter=hasDistinctWallpapersForLocations) BOOL distinctWallpapersForLocations; // ivar: _distinctWallpapersForLocations
@property (readonly, nonatomic, getter=isDynamicWallpaperBundle) BOOL dynamicWallpaperBundle; // ivar: _dynamicWallpaperBundle
@property (readonly, copy, nonatomic) NSString *family; // ivar: _family
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *identifierString;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL; // ivar: _thumbnailImageURL
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)shouldLoadWallpaperBundleAtURL:(id)arg0 ;
+(id)createTemporaryWallpaperBundleWithImages:(id)arg0 videoAssetURLs:(id)arg1 wallpaperOptions:(id)arg2 error:(*id)arg3 ;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)wallpaperBackingTypeForLocation:(id)arg0 ;
-(id)_liveWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_processCommonFileBackedWallpaperMetadataWithDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_stillWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_stripeWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)fileBasedWallpaperForLocation:(id)arg0 ;
-(id)fileBasedWallpaperForLocation:(id)arg0 andAppearance:(id)arg1 ;
-(id)initWithDynamicDictionary:(id)arg0 identifier:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)valueBasedWallpaperForLocation:(id)arg0 ;
-(id)valueBasedWallpaperForLocation:(id)arg0 andAppearance:(id)arg1 ;
-(void)_loadBundle;
-(void)_loadDynamicWallpaper:(id)arg0 ;
-(void)_processAssetDictionary:(id)arg0 forLocation:(id)arg1 ;
-(void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg0 ;


@end


#endif