// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYKEEPLOCALCHANGEREQUESTOPERATION_H
#define MPMODELLIBRARYKEEPLOCALCHANGEREQUESTOPERATION_H

@class NSOperationQueue;


#import "MPAsyncOperation.h"
#import "MPModelLibraryKeepLocalChangeRequest.h"

@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}


@property (copy, nonatomic) MPModelLibraryKeepLocalChangeRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(void)_handleKeepLocalUpdateStatus:(NSInteger)arg0 forLibraryIdentifier:(NSInteger)arg1 mediaType:(NSInteger)arg2 completedWithError:(id)arg3 ;
-(void)_handlePersistentID:(NSInteger)arg0 modelClass:(Class)arg1 keepLocal:(NSInteger)arg2 mediaLibrary:(id)arg3 ;
-(void)execute;


@end


#endif