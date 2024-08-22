// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELSTOREGROUPINGSMUSICKITREQUESTOPERATION_H
#define MPMODELSTOREGROUPINGSMUSICKITREQUESTOPERATION_H

@class NSIndexSet, ICURLBag;


#import "MPStoreModelRequestOperation.h"

@interface MPModelStoreGroupingsMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSIndexSet *_allowedFCKinds;
    ICURLBag *_storeURLBag;
}




-(id)_produceResponseWithParser:(id)arg0 results:(id)arg1 error:(*id)arg2 ;
-(id)additionalCatalogURLQueryItems;
-(id)additionalURLRequestsWithStoreURLBag:(id)arg0 ;
-(id)catalogURLWithStoreURLBag:(id)arg0 ;
-(id)configurationForLoadingModelDataWithStoreURLBag:(id)arg0 error:(*id)arg1 ;
-(id)groupingNameBagKey;
-(id)groupingNameWithMusicSubscriptionDictionary:(id)arg0 ;
-(id)rootObjectIdentifierWithSubscriptionStatus:(NSInteger)arg0 ;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif