// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMEDIAAPICOLLECTIONITEMMETADATAREQUESTCONTROLLER_H
#define MPMEDIAAPICOLLECTIONITEMMETADATAREQUESTCONTROLLER_H

@class NSOperationQueue, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPMediaAPICollectionItemMetadataRequestController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_pendingOperationsIdentiferMap;
}




+(id)sharedInstance;
-(id)_init;
-(void)cancelRequest:(id)arg0 ;
-(void)enqueueRequest:(id)arg0 withBatchProgressHandler:(id)arg1 ;


@end


#endif