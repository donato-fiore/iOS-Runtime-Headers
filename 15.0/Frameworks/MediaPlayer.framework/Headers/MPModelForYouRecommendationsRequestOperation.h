// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELFORYOURECOMMENDATIONSREQUESTOPERATION_H
#define MPMODELFORYOURECOMMENDATIONSREQUESTOPERATION_H



#import "MPStoreModelRequestOperation.h"

@interface MPModelForYouRecommendationsRequestOperation : MPStoreModelRequestOperation



-(id)_missingContentIdentifiersInRecommendationsArray:(id)arg0 storeItemMetadataResults:(id)arg1 ;
-(id)_personalizeRecommendationGroup:(id)arg0 flatPersonalizedSectionedItems:(id)arg1 ;
-(id)_responseWithResults:(id)arg0 personalizationResponse:(id)arg1 ;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg0 error:(*id)arg1 ;
-(void)_produceResponseWithRecommendationsArray:(id)arg0 storeItemMetadataResults:(id)arg1 completion:(id)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif