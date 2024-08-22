// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPARTWORKCATALOG_H
#define MPARTWORKCATALOG_H

@class NSCache, NSString;
@protocol MPArtworkDataSource, _MPArtworkCatalogOverlayDelegate, MPArtworkDataSourceVisualIdenticality;

#import <Foundation/Foundation.h>

#import "MPArtworkRepresentationCollection.h"
#import "MPArtworkImageAttachments.h"

@interface MPArtworkCatalog : NSObject {
    NSInteger _modelRevisionID;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSInteger MP_artworkType;
@property (nonatomic) BOOL allowsVideoConstrainedNetworkAccess; // ivar: _allowsVideoConstrainedNetworkAccess
@property (retain, nonatomic) MPArtworkRepresentationCollection *bestAvailableRepresentationCollection; // ivar: _bestAvailableRepresentationCollection
@property (readonly, nonatomic) NSCache *cache;
@property (copy, nonatomic) NSString *cacheIdentifier; // ivar: _cacheIdentifier
@property (copy, nonatomic) id *configurationBlock; // ivar: _configurationBlock
@property (readonly, weak, nonatomic) NSObject<MPArtworkDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) id *destination; // ivar: _destination
@property (nonatomic) CGFloat destinationScale; // ivar: _destinationScale
@property (nonatomic) CGSize fittingSize; // ivar: _fittingSize
@property (readonly, nonatomic) BOOL hasImageOnDisk;
@property (readonly, nonatomic) MPArtworkImageAttachments *imageAttachments;
@property (getter=isLoadingRepresentation) BOOL loadingRepresentation; // ivar: _loadingRepresentation
@property (weak, nonatomic) NSObject<_MPArtworkCatalogOverlayDelegate> *overlayDelegate; // ivar: _overlayDelegate
@property (retain, nonatomic) id *overlayStorage; // ivar: _overlayStorage
@property (retain, nonatomic) id *overlayToken; // ivar: _overlayToken
@property (nonatomic) NSInteger preferredVideoFormat; // ivar: _preferredVideoFormat
@property (nonatomic) NSUInteger renderHint; // ivar: _renderHint
@property (nonatomic) NSUInteger representationKinds; // ivar: _representationKinds
@property (weak, nonatomic) id *requestingContext; // ivar: _requestingContext
@property (readonly, nonatomic) CGSize scaledFittingSize;
@property (readonly, nonatomic) id *token; // ivar: _token
@property (readonly, nonatomic) NSCache *videoCache;
@property (nonatomic) NSUInteger videoCacheStoragePolicy; // ivar: _videoCacheStoragePolicy
@property (readonly, nonatomic) NSObject<MPArtworkDataSourceVisualIdenticality> *visualIdenticalityIdentifier;


+(id)_artworkCacheForIdentifier:(id)arg0 requestingContext:(id)arg1 representationKind:(NSInteger)arg2 ;
+(id)_artworkLoadQueue;
+(id)_registeredIdentifiableDataSourceAndTokenClasses;
+(id)artworkCatalogWithDataSourceShortDescription:(id)arg0 dataSourceIdentifier:(id)arg1 tokenParameters:(id)arg2 ;
+(id)placeholderCatalogWithSymbolName:(id)arg0 ;
+(id)staticArtworkCatalogWithImage:(id)arg0 ;
+(id)staticArtworkCatalogWithRepresentationCollection:(id)arg0 ;
-(BOOL)isArtworkVisuallyIdenticalToCatalog:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_existingRepresentationOfKind:(NSInteger)arg0 ;
-(id)bestImageFromDisk;
-(id)description;
-(id)existingColorAnalysisWithAlgorithm:(NSInteger)arg0 ;
-(id)initWithToken:(id)arg0 dataSource:(id)arg1 ;
-(void)_callConfigurationWithRevisionID:(NSInteger)arg0 ;
-(void)_loadBestRepresentationIfNeededOfKind:(NSInteger)arg0 ;
-(void)_loadRepresentationOfKind:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_requestBestRepresentationOfKind:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_updateRepresentationOfKind:(NSInteger)arg0 ;
-(void)_updateRepresentations;
-(void)_updateWithRepresentation:(id)arg0 isBestRepresentation:(BOOL)arg1 modelRevisionID:(NSInteger)arg2 ;
-(void)dealloc;
-(void)requestColorAnalysisWithAlgorithm:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)requestExportableArtworkPropertiesWithCompletion:(id)arg0 ;
-(void)requestImageWithCompletion:(id)arg0 ;
-(void)requestImageWithCompletionHandler:(id)arg0 ;
-(void)requestRadiosityImageWithCompletionHandler:(id)arg0 ;
-(void)requestVideoWithCompletionHandler:(id)arg0 ;
-(void)setPreferredVideoKind:(NSInteger)arg0 ;


@end


#endif