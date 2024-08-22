// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELLIBRARYFAVORITEENTITYCHANGEREQUESTOPERATION_H
#define MPMODELLIBRARYFAVORITEENTITYCHANGEREQUESTOPERATION_H

@class NSOperationQueue;


#import "MPAsyncOperation.h"
#import "MPModelLibraryFavoriteEntityChangeRequest.h"

@interface MPModelLibraryFavoriteEntityChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
    BOOL _canRerunRequest;
}


@property (copy, nonatomic) MPModelLibraryFavoriteEntityChangeRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)importFromRequestIdentifiers:(id)arg0 ;
-(void)_runLibraryMappingRequestWithIdentifiers:(id)arg0 class:(Class)arg1 completionHandler:(id)arg2 ;
-(void)_runRequestWithIdentifiers:(id)arg0 persistentID:(NSInteger)arg1 favoriteState:(NSInteger)arg2 class:(Class)arg3 ;
-(void)_setFavoriteState:(NSInteger)arg0 forEntityWithPersistentID:(NSInteger)arg1 modelClass:(Class)arg2 ;
-(void)execute;


@end


#endif