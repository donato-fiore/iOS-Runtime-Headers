// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTOREARTWORKDATASOURCE_H
#define MPSTOREARTWORKDATASOURCE_H



#import "MPAbstractNetworkArtworkDataSource.h"

@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource



+(id)sharedStoreArtworkDataSource;
-(BOOL)areRepresentationsOfKind:(NSInteger)arg0 availableForCatalog:(id)arg1 ;
-(BOOL)wantsBackgroundImageDecompression;
-(id)_bestURLForCatalog:(id)arg0 kind:(NSInteger)arg1 size:(struct CGSize )arg2 ;
-(id)cacheKeyForCatalog:(id)arg0 kind:(NSInteger)arg1 size:(struct CGSize )arg2 ;
-(id)existingArtworkEffectResultForEffectType:(NSInteger)arg0 catalog:(id)arg1 options:(id)arg2 ;
-(id)requestForCatalog:(id)arg0 kind:(NSInteger)arg1 size:(struct CGSize )arg2 ;
-(id)sortedSupportedSizesForCatalog:(id)arg0 ;
-(id)supportedSizesForCatalog:(id)arg0 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(struct CGSize )_bestSizeForImageSizeInfo:(id)arg0 catalog:(id)arg1 ;
-(struct CGSize )_clampImageSize:(struct CGSize )arg0 toMaxSupportedSize:(struct CGSize )arg1 ;
-(struct CGSize )bestAvailableSizeForCatalog:(id)arg0 ;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif