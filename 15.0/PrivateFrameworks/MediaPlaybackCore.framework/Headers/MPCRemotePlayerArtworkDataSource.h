// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCREMOTEPLAYERARTWORKDATASOURCE_H
#define MPCREMOTEPLAYERARTWORKDATASOURCE_H

@class MPAbstractNetworkArtworkDataSource;



@interface MPCRemotePlayerArtworkDataSource : MPAbstractNetworkArtworkDataSource



+(id)bestArtworkSizes;
+(id)sharedDataSource;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(id)_urlForCatalog:(id)arg0 size:(struct CGSize )arg1 ;
-(id)cacheKeyForCatalog:(id)arg0 size:(struct CGSize )arg1 ;
-(id)requestForCatalog:(id)arg0 size:(struct CGSize )arg1 ;
-(id)supportedSizesForCatalog:(id)arg0 ;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif