// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETRESOURCEDOWNLOADMANAGER_H
#define PLASSETRESOURCEDOWNLOADMANAGER_H

@class NSOperationQueue, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLAssetResourceDownloadManager : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_requestIsolationQueue;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_requestById;
    uint8_t _currentRequestId;
}




+(id)defaultManager;
-(id)_requestWithID:(int)arg0 ;
-(id)init;
// -(int)requestCloudResourceType:(NSUInteger)arg0 assetObjectID:(id)arg1 library:(id)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)_setRequest:(id)arg0 forRequestID:(int)arg1 ;
-(void)cancelRequest:(int)arg0 ;


@end


#endif