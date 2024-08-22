// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSMODELFORYOURECOMMENDATIONSREQUEST_H
#define NMSMODELFORYOURECOMMENDATIONSREQUEST_H

@class MPModelForYouRecommendationsRequest, NSArray, NSDictionary;



@interface NMSModelForYouRecommendationsRequest : MPModelForYouRecommendationsRequest

@property (retain, nonatomic) NSArray *nms_cachedRecommendationsArray; // ivar: _nms_cachedRecommendationsArray
@property (retain, nonatomic) NSDictionary *nms_cachedStoreItemMetadataResults; // ivar: _nms_cachedStoreItemMetadataResults
@property (nonatomic) BOOL nms_useCachedDataOnly; // ivar: _nms_useCachedDataOnly


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif