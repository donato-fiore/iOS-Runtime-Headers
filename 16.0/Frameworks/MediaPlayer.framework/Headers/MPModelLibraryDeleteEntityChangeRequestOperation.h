// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELLIBRARYDELETEENTITYCHANGEREQUESTOPERATION_H
#define MPMODELLIBRARYDELETEENTITYCHANGEREQUESTOPERATION_H

@class NSOperationQueue;


#import "MPAsyncOperation.h"
#import "MPModelLibraryDeleteEntityChangeRequest.h"

@interface MPModelLibraryDeleteEntityChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}


@property (copy, nonatomic) MPModelLibraryDeleteEntityChangeRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(BOOL)_isCloudLibraryEnabled;
-(void)_deleteItems:(id)arg0 withLibrary:(id)arg1 ;
-(void)_handlePersistentID:(NSInteger)arg0 modelClass:(Class)arg1 mediaLibrary:(id)arg2 ;
-(void)execute;


@end


#endif