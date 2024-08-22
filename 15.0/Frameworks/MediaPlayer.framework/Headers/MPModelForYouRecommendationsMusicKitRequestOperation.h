// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELFORYOURECOMMENDATIONSMUSICKITREQUESTOPERATION_H
#define MPMODELFORYOURECOMMENDATIONSMUSICKITREQUESTOPERATION_H

@class NSDictionary;


#import "MPStoreModelRequestOperation.h"

@interface MPModelForYouRecommendationsMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSDictionary *_storeBagDictionary;
}




-(BOOL)isOnboardingRequired:(id)arg0 ;
-(id)_personalizeRecommendationGroup:(id)arg0 flatPersonalizedSectionedItems:(id)arg1 ;
-(id)_produceResultsWithItemsArray:(id)arg0 ;
-(id)_produceResultsWithRecommendationsArray:(id)arg0 recentlyPlayedArray:(id)arg1 ;
-(id)_recommendationGroupBuilder;
-(id)_recommendationGroupBuilderWithFlatSectionedItems:(id)arg0 ;
-(id)_responseWithResults:(id)arg0 personalizationResponse:(id)arg1 ;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg0 error:(*id)arg1 ;
-(id)displayFilterKindsValueForOptions:(NSInteger)arg0 ;
-(id)itemProperties;
-(id)queryItemsWithStoreBagDictionary:(id)arg0 ;
-(id)recentlyPlayedURLWithStoreBagDictionary:(id)arg0 ;
-(id)recommendationsURLWithStoreBagDictionary:(id)arg0 ;
-(id)sectionProperties;
-(id)typesArrayWithTypes:(NSInteger)arg0 ;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif