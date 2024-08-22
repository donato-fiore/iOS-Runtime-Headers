// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIALIBRARYARTWORKDATASOURCE_H
#define MPMEDIALIBRARYARTWORKDATASOURCE_H

@class NSString, NSCache;
@protocol MPArtworkDataSource, MPArtworkDataSourceIdentifiable;

#import <Foundation/Foundation.h>

#import "MPArtworkResizeUtility.h"

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource, MPArtworkDataSourceIdentifiable>



@property (readonly, nonatomic) NSString *artworkDataSourceIdentifier;
@property (retain, nonatomic) MPArtworkResizeUtility *artworkResizeUtility; // ivar: _artworkResizeUtility
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSCache *fallbackCache; // ivar: _fallbackCache
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *mediaLibraryUniqueIdentifier; // ivar: _mediaLibraryUniqueIdentifier
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesFallbackCache; // ivar: _usesFallbackCache


+(id)artworkDataSourceShortDescription;
+(id)artworkDataSourceWithIdentifier:(id)arg0 ;
-(BOOL)_isRepresentation:(id)arg0 validForCatalog:(id)arg1 ;
-(BOOL)_isRepresentationSize:(struct CGSize )arg0 validForFittingSize:(struct CGSize )arg1 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)hasExistingRepresentationOnDiskForArtworkCatalog:(id)arg0 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(id)_cachedRepresentationForCatalog:(id)arg0 ;
-(id)_existingRepresentationForArtworkCatalog:(id)arg0 fromCacheOnly:(BOOL)arg1 ;
-(id)_representationAtSize:(struct CGSize )arg0 forCatalog:(id)arg1 ;
-(id)_resizeArtwork:(id)arg0 forCatalog:(id)arg1 toSize:(struct CGSize )arg2 completionHandler:(id)arg3 ;
-(id)existingArtworkEffectResultForEffectType:(NSInteger)arg0 catalog:(id)arg1 options:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)init;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(void)_cacheRepresentation:(id)arg0 forCatalog:(id)arg1 ;
-(void)_resizeOriginalArtworkForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg0 completionHandler:(id)arg1 ;
// -(void)loadArtworkEffectResultForEffectType:(NSInteger)arg0 catalog:(id)arg1 options:(id)arg2 systemEffectHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif