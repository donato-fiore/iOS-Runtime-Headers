// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSRECOMMENDATIONARTWORKDATASOURCE_H
#define NMSRECOMMENDATIONARTWORKDATASOURCE_H

@class NSCache, NSString;
@protocol MPArtworkDataSource;

#import <Foundation/Foundation.h>


@interface NMSRecommendationArtworkDataSource : NSObject <MPArtworkDataSource>

 {
    NSCache *_fallbackCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)artworkCacheDirectory;
+(id)sharedDataSource;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)artworkCacheExistsForToken:(id)arg0 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(id)_cachedArtworkImageWithToken:(id)arg0 ;
-(id)_cachedRepresentationForCatalog:(id)arg0 ;
-(id)_existingRepresentationForArtworkCatalog:(id)arg0 fromCacheOnly:(BOOL)arg1 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)init;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(void)_cacheRepresentation:(id)arg0 forCatalog:(id)arg1 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif