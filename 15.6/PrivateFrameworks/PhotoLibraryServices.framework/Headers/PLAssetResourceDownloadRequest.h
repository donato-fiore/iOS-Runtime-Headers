// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETRESOURCEDOWNLOADREQUEST_H
#define PLASSETRESOURCEDOWNLOADREQUEST_H

@class NSOperation, NSString, NSError, NSManagedObjectID;
@protocol OS_dispatch_queue;


#import "PLPhotoLibrary.h"

@interface PLAssetResourceDownloadRequest : NSOperation {
    NSObject<OS_dispatch_queue> *_queue;
    PLPhotoLibrary *_library;
    id *_progressHandler;
    NSString *_assetUUID;
}


@property (readonly, nonatomic) NSUInteger cloudResourceType; // ivar: _cloudResourceType
@property (readonly, nonatomic) NSString *cplTaskIdentifier; // ivar: _cplTaskIdentifier
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) int requestID; // ivar: _requestID


-(id)initWithRequestID:(int)arg0 library:(id)arg1 queue:(id)arg2 cloudResourceType:(NSUInteger)arg3 managedObjectID:(id)arg4 progressHandler:(id)arg5 ;
-(void)_onQueueAsync:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif