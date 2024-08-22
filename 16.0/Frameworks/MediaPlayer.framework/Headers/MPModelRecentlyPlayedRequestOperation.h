// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELRECENTLYPLAYEDREQUESTOPERATION_H
#define MPMODELRECENTLYPLAYEDREQUESTOPERATION_H

@class ICURLBag;


#import "MPStoreModelRequestOperation.h"

@interface MPModelRecentlyPlayedRequestOperation : MPStoreModelRequestOperation {
    ICURLBag *_storeURLBag;
}




-(id)_produceResponseWithRecentlyPlayedArray:(id)arg0 completion:(id)arg1 ;
-(id)configurationForLoadingModelDataWithStoreURLBag:(id)arg0 error:(*id)arg1 ;
-(id)recentlyPlayedURLWithStoreURLBag:(id)arg0 ;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif