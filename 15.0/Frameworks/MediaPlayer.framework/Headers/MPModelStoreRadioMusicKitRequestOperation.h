// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELSTORERADIOMUSICKITREQUESTOPERATION_H
#define MPMODELSTORERADIOMUSICKITREQUESTOPERATION_H



#import "MPModelStoreGroupingsMusicKitRequestOperation.h"

@interface MPModelStoreRadioMusicKitRequestOperation : MPModelStoreGroupingsMusicKitRequestOperation



-(id)additionalCatalogURLQueryItems;
-(id)additionalURLRequestsWithStoreBagDictionary:(id)arg0 ;
-(id)groupingNameBagKey;
-(id)groupingNameWithMusicSubscriptionDictionary:(id)arg0 ;
-(id)radioStationWithDictionary:(id)arg0 ;
-(id)recentlyPlayedItemWithDictionary:(id)arg0 ;
-(id)recentlyPlayedItemsWithAPILoadedOutput:(id)arg0 ;
-(id)recentlyPlayedSectionWithTitle:(id)arg0 ;
-(id)recentlyPlayedURLWithStoreBagDictionary:(id)arg0 ;
-(id)rootObjectIdentifierWithSubscriptionStatus:(NSInteger)arg0 ;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif