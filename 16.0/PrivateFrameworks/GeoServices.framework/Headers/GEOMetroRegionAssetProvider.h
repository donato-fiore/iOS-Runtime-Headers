// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMETROREGIONASSETPROVIDER_H
#define GEOMETROREGIONASSETPROVIDER_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface GEOMetroRegionAssetProvider : NSObject {
    unsigned int _catalogLoadRetryMultiplier;
    NSCache *_fileURLCache;
}




+(id)_maQueryForAssetCode:(id)arg0 ;
+(id)sharedProvider;
+(void)_downloadAsset:(id)arg0 completion:(id)arg1 ;
+(void)_downloadCatalogIfNeededThen:(id)arg0 ;
+(void)_unavailableAssetForAssetCode:(id)arg0 completion:(id)arg1 ;
+(void)_updateCatalogWithResult:(id)arg0 ;
+(void)preloadAssetForCountryCode:(id)arg0 preloadQueue:(id)arg1 completion:(id)arg2 ;
-(id)_acceptListForCountryCode:(id)arg0 name:(id)arg1 ;
-(id)_bestAvailableAssetForAssetCode:(id)arg0 ;
-(id)homeCountryCodeAcceptList;
-(id)homeMetroAcceptListForCountryCode:(id)arg0 ;
-(id)init;
-(id)urlForInstalledCountryCode:(id)arg0 ;
-(void)_catalogDownloadFinishedWithResult:(NSInteger)arg0 ;
-(void)_updateCatalogAfterDelay:(CGFloat)arg0 ;


@end


#endif