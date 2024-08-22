// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGWALLPAPERSUGGESTIONASSETGATER_H
#define PGWALLPAPERSUGGESTIONASSETGATER_H

@class VCPMediaAnalysisService;
@protocol PFParallaxLayoutConfiguration, OS_os_log;

#import <Foundation/Foundation.h>


@interface PGWallpaperSuggestionAssetGater : NSObject {
    NSUInteger _type;
    VCPMediaAnalysisService *_mediaAnalysisService;
    id<PFParallaxLayoutConfiguration> *_deviceWallpaperLayoutConfiguration;
    NSObject<OS_os_log> *_loggingConnection;
}


@property (nonatomic) BOOL coversTracks; // ivar: _coversTracks
@property (nonatomic) BOOL isUserInitiated; // ivar: _isUserInitiated


+(NSUInteger)_parallaxClassificationFromAssetGaterType:(NSUInteger)arg0 ;
+(NSUInteger)currentWallpaperPropertiesVersion;
+(id)assetFetchPropertySetsForGating;
-(BOOL)_gateAsset:(id)arg0 passesFaceQuality:(*BOOL)arg1 hasPetFace:(*BOOL)arg2 ;
-(BOOL)_gateAsset:(id)arg0 wallpaperProperties:(*id)arg1 ;
-(BOOL)_hasPetFaceWithWallpaperProperties:(id)arg0 ;
-(BOOL)_passesFaceQualityWithWallpaperProperties:(id)arg0 ;
-(BOOL)asset:(id)arg0 passesGatingWithWallpaperProperties:(id)arg1 ;
-(BOOL)cacheExistsForAsset:(id)arg0 ;
-(BOOL)gateAsset:(id)arg0 ;
-(BOOL)gateAsset:(id)arg0 hasPetFace:(*BOOL)arg1 ;
-(BOOL)gateAsset:(id)arg0 passesFaceQuality:(*BOOL)arg1 ;
-(BOOL)persistWallpaperProperties:(id)arg0 ofAsset:(id)arg1 error:(*id)arg2 ;
-(id)_requestWallpaperPropertiesForAsset:(id)arg0 error:(*id)arg1 ;
-(id)existingWallpaperPropertiesWithAsset:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 loggingConnection:(id)arg1 ;
-(id)requestAndPersistWallpaperPropertiesForAsset:(id)arg0 ;
-(id)requestWallpaperPropertiesForAsset:(id)arg0 error:(*id)arg1 ;
-(id)wallpaperPropertiesFromAnalysisResults:(id)arg0 andAsset:(id)arg1 ;
-(void)clearCacheOfAsset:(id)arg0 ;


@end


#endif