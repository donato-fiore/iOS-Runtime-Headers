// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACECOLLECTIONIMAGEPROVIDER_H
#define MKPLACECOLLECTIONIMAGEPROVIDER_H

@class NSString, NSMutableDictionary, NSCache, geo_isolater, GEOMapItemPhotoOptions;
@protocol NSCacheDelegate;

#import <Foundation/Foundation.h>


@interface MKPlaceCollectionImageProvider : NSObject <NSCacheDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *downloadOperationsPair; // ivar: _downloadOperationsPair
@property (retain, nonatomic) NSCache *downloadedImagesCache; // ivar: _downloadedImagesCache
@property (retain, nonatomic) NSCache *gradientImagesCache; // ivar: _gradientImagesCache
@property (retain, nonatomic) NSMutableDictionary *gradientOperationsPair; // ivar: _gradientOperationsPair
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) geo_isolater *helperQueue; // ivar: _helperQueue
@property (nonatomic) BOOL isRTL; // ivar: _isRTL
@property (readonly, nonatomic) GEOMapItemPhotoOptions *optionsForCityBricks; // ivar: _optionsForCityBricks
@property (readonly, nonatomic) GEOMapItemPhotoOptions *optionsForCollectionCells; // ivar: _optionsForCollectionCells
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isJoeColorManuallyCuratedForCuratedCollection:(id)arg0 ;
-(BOOL)requiresGradientOperationForSource:(NSInteger)arg0 ;
-(NSInteger)photoTypeForImageSource:(NSInteger)arg0 ;
-(id)init;
-(id)joeColorForCompactCollection:(id)arg0 usingCarouselContext:(NSInteger)arg1 ;
-(id)joeColorForCuratedCollection:(id)arg0 ;
-(id)photoInfoWithPhoto:(id)arg0 desiredSize:(struct CGSize )arg1 ;
-(id)photoInfoWithPhoto:(id)arg0 desiredSize:(struct CGSize )arg1 usingOptions:(id)arg2 ;
-(struct CGSize )desiredSizeFromFrameSize:(struct CGSize )arg0 ;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)cancelAllOperationsForCompactImageSource:(NSInteger)arg0 ;
-(void)cancelAllOperationsForImageSource:(NSInteger)arg0 ;
-(void)checkQueuesForCollectionSource:(NSInteger)arg0 ;
-(void)checkQueuesForCompactCollectionSource:(NSInteger)arg0 ;
-(void)loadCoverImageWithGuideLocation:(id)arg0 size:(struct CGSize )arg1 usingImageSource:(NSInteger)arg2 completion:(id)arg3 ;
-(void)loadGradientCoverImageWithCuratedCollection:(id)arg0 size:(struct CGSize )arg1 contentSizeCategory:(id)arg2 usingImageSource:(NSInteger)arg3 completion:(id)arg4 ;


@end


#endif