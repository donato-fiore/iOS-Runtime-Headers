// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELSTOREGROUPINGSMUSICKITREQUESTOPERATION_H
#define MPMODELSTOREGROUPINGSMUSICKITREQUESTOPERATION_H

@class NSIndexSet, NSDictionary;


#import "MPStoreModelRequestOperation.h"

@interface MPModelStoreGroupingsMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSIndexSet *_allowedFCKinds;
    NSDictionary *_storeBagDictionary;
}




-(id)_produceResponseWithParser:(id)arg0 results:(id)arg1 error:(*id)arg2 ;
-(id)additionalCatalogURLQueryItems;
-(id)additionalURLRequestsWithStoreBagDictionary:(id)arg0 ;
-(id)catalogURLWithStoreBagDictionary:(id)arg0 ;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg0 error:(*id)arg1 ;
-(id)groupingNameBagKey;
-(id)groupingNameWithMusicSubscriptionDictionary:(id)arg0 ;
-(id)rootObjectIdentifierWithSubscriptionStatus:(NSInteger)arg0 ;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif