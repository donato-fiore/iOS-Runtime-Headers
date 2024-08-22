// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSEARCHTHUMBNAILPREVIEWGENERATOR_H
#define CKSEARCHTHUMBNAILPREVIEWGENERATOR_H

@class NSMutableSet, NSCache, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKSearchThumbnailPreviewGenerator : NSObject

@property (retain, nonatomic) NSMutableSet *keysWithInFlightGeneration; // ivar: _keysWithInFlightGeneration
@property (retain, nonatomic) NSMutableSet *keysWithInFlightLPLinkMetadataGeneration; // ivar: _keysWithInFlightLPLinkMetadataGeneration
@property (retain, nonatomic) NSMutableSet *keysWithInFlightLPPassPropertiesMetadataGeneration; // ivar: _keysWithInFlightLPPassPropertiesMetadataGeneration
@property (retain, nonatomic) NSMutableSet *keysWithInFlightLivePhotoStatus; // ivar: _keysWithInFlightLivePhotoStatus
@property (retain, nonatomic) NSMutableSet *keysWithInFlightVideoDurationCalculation; // ivar: _keysWithInFlightVideoDurationCalculation
@property (retain, nonatomic) NSCache *livePhotoStatusCache; // ivar: _livePhotoStatusCache
@property (retain, nonatomic) NSCache *lpLinkMetadataCache; // ivar: _lpLinkMetadataCache
@property (retain, nonatomic) NSCache *lpPassPropertiesMetadataCache; // ivar: _lpPassPropertiesMetadataCache
@property (retain, nonatomic) NSMutableDictionary *mapHashesCache; // ivar: _mapHashesCache
@property (retain, nonatomic) NSCache *thumbnailCache; // ivar: _thumbnailCache
@property (retain, nonatomic) NSCache *videoDurationCache; // ivar: _videoDurationCache


+(id)__singleton__im;
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg0 ;
-(BOOL)_checkResultForLivePhotoComplement:(id)arg0 ;
-(BOOL)hasCachedLinkMetadataForQueryResult:(id)arg0 ;
-(BOOL)hasCachedMapPreviewForQueryResult:(id)arg0 traitCollection:(id)arg1 ;
-(BOOL)hasCachedPassLinkPropertiesForQueryResult:(id)arg0 ;
-(BOOL)hasCachedPreviewForKey:(id)arg0 ;
-(BOOL)hasCachedPreviewForQueryResult:(id)arg0 ;
-(BOOL)queryResultHasLivePhoto:(id)arg0 ;
-(BOOL)queryResultIsVideo:(id)arg0 ;
-(id)_lpPassLinkPreviewLoadQueue;
-(id)_lpPreviewLoadQueue;
-(id)_previewLoadQueue;
-(id)_previewURLForKey:(id)arg0 ;
-(id)cachedLinkMetadataForQueryResult:(id)arg0 ;
-(id)cachedMapPreviewForQueryResult:(id)arg0 traitCollection:(id)arg1 ;
-(id)cachedPassLinkPropertiesForQueryResult:(id)arg0 ;
-(id)cachedPreviewForKey:(id)arg0 ;
-(id)cachedPreviewForQueryResult:(id)arg0 ;
-(id)cachedPreviewOrNullForKey:(id)arg0 ;
-(id)init;
-(id)mapKeyForQueryResult:(id)arg0 traitCollection:(id)arg1 ;
-(id)mapPlaceholderImageForTraitCollection:(id)arg0 ;
-(struct ? )_calculateDurationForVideoResult:(id)arg0 ;
-(struct ? )durationForVideoResult:(id)arg0 ;
-(void)_asyncLoadCachedDiskPreviewForKeyIfAvailable:(id)arg0 completion:(id)arg1 ;
-(void)_generateMapThumbnailForKey:(id)arg0 attributes:(id)arg1 traitCollection:(id)arg2 completion:(id)arg3 ;
-(void)_persistPreview:(id)arg0 atURL:(id)arg1 ;
-(void)_prewarmLinkMetadata:(id)arg0 ;
-(void)beginFetchingLinkMetadataForQueryResult:(id)arg0 ;
-(void)beginGeneratingWebLinkPresentationPropertiesForQueryResult:(id)arg0 ;
-(void)generateAndCacheIconWithURL:(id)arg0 key:(id)arg1 completion:(id)arg2 ;
-(void)generateAndCachePassWithURL:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)generateAndCacheThumbnailWithURL:(id)arg0 request:(id)arg1 key:(id)arg2 completion:(id)arg3 ;
-(void)generateMapPreviewForQueryResult:(id)arg0 traitCollection:(id)arg1 ;
-(void)generatePreviewForQueryResult:(id)arg0 ;


@end


#endif