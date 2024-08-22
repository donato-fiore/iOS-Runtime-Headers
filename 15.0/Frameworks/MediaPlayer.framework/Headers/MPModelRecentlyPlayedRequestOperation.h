// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELRECENTLYPLAYEDREQUESTOPERATION_H
#define MPMODELRECENTLYPLAYEDREQUESTOPERATION_H

@class NSDictionary;


#import "MPStoreModelRequestOperation.h"

@interface MPModelRecentlyPlayedRequestOperation : MPStoreModelRequestOperation {
    NSDictionary *_storeBagDictionary;
}




-(id)_produceResponseWithRecentlyPlayedArray:(id)arg0 completion:(id)arg1 ;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg0 error:(*id)arg1 ;
-(id)recentlyPlayedURLWithStoreBagDictionary:(id)arg0 ;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif