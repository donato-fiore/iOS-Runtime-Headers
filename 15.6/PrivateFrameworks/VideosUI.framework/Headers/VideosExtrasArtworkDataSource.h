// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASARTWORKDATASOURCE_H
#define VIDEOSEXTRASARTWORKDATASOURCE_H

@class MPAbstractNetworkArtworkDataSource;



@interface VideosExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource



-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)wantsBackgroundImageDecompression;
-(id)cacheKeyForCatalog:(id)arg0 size:(struct CGSize )arg1 ;
-(id)init;
-(id)requestForCatalog:(id)arg0 size:(struct CGSize )arg1 ;
-(id)supportedSizesForCatalog:(id)arg0 ;


@end


#endif