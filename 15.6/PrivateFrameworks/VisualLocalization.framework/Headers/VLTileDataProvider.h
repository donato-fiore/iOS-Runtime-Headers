// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VLTILEDATAPROVIDER_H
#define VLTILEDATAPROVIDER_H

@class GEOTileLoader, NSString, GEOApplicationAuditToken, geo_isolater, GEOTileData, GEOTileKeyMap, GEOVLMetadataTile, NSArray;
@protocol VLLocalizationDataProvider, VLLocalizationDataProviderDelegate;

#import <Foundation/Foundation.h>


@interface VLTileDataProvider : NSObject <VLLocalizationDataProvider>

 {
    GEOTileLoader *_tileLoader;
    NSString *_tileLoaderClientID;
    GEOApplicationAuditToken *_auditToken;
    geo_isolater *_isolation;
    list<VLLocalizationDataKey, std::allocator<VLLocalizationDataKey>> _loadingKeys;
    list<VLLocalizationDataKey, std::allocator<VLLocalizationDataKey>> _recentFailures;
    list<VLLocalizationDataKey, std::allocator<VLLocalizationDataKey>> _recentUnsupportedTiles;
    ? _lastLoadedKey;
    GEOTileData *_lastLoadedData;
    GEOTileKeyMap *_pendingMetadataTiles;
    _GEOTileKey _lastLoadedMetadataKey;
    GEOVLMetadataTile *_lastLoadedMetadata;
    NSArray *_supportedFormatVersions;
    unsigned int _maxSupportedFormatVersion;
    unsigned int _lastFormatVersion;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VLLocalizationDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldCacheMetadata; // ivar: _shouldCacheMetadata
@property (readonly) Class superclass;


-(id)fileURLForKey:(struct ? *)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithAuditToken:(id)arg0 supportedFormatVersions:(id)arg1 ;
-(void)_commonInitWithTileLoader:(id)arg0 auditToken:(id)arg1 supportedFormatVersions:(id)arg2 ;
-(void)_disburseMetadataTileForKey:(struct _GEOTileKey *)arg0 tileData:(id)arg1 error:(id)arg2 ;
-(void)_fetchDataTile:(struct _GEOTileKey *)arg0 originalKey:(struct ? *)arg1 additionalInfo:(struct _GEOVisualLocalizationTrackAdditionalInfo *)arg2 ;
-(void)_fetchMetadataForCoordinate:(struct ? *)arg0 completionHandler:(id)arg1 ;
-(void)_fetchMetadataForDataKey:(struct ? *)arg0 completionHandler:(id)arg1 ;
-(void)_fetchMetadataTile:(struct _GEOTileKey *)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)determineAvailabilityForCoordinate:(struct ? *)arg0 purpose:(NSInteger)arg1 callbackQueue:(id)arg2 callback:(id)arg3 ;


@end


#endif