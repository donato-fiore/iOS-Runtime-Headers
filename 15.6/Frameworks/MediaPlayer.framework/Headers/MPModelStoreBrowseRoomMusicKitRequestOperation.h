// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELSTOREBROWSEROOMMUSICKITREQUESTOPERATION_H
#define MPMODELSTOREBROWSEROOMMUSICKITREQUESTOPERATION_H

@class NSIndexSet;


#import "MPStoreModelRequestOperation.h"

@interface MPModelStoreBrowseRoomMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSIndexSet *_allowedFCKinds;
}




-(id)_produceResponseWithParser:(id)arg0 results:(id)arg1 error:(*id)arg2 ;
-(id)_roomURLWithRoomID:(id)arg0 storeURLBag:(id)arg1 ;
-(id)configurationForLoadingModelDataWithStoreURLBag:(id)arg0 error:(*id)arg1 ;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif