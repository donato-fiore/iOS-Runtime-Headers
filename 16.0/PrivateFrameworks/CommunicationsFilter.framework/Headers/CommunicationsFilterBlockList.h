// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMMUNICATIONSFILTERBLOCKLIST_H
#define COMMUNICATIONSFILTERBLOCKLIST_H

@class NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CommunicationsFilterBlockListCache.h"

@interface CommunicationsFilterBlockList : NSObject {
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
}




+(id)sharedInstance;
-(BOOL)_connect;
-(BOOL)_disconnect;
-(BOOL)isItemInList:(id)arg0 ;
-(id)_sendSynchronousXPCRequest:(id)arg0 ;
-(id)copyAllItems;
-(id)init;
-(void)_disconnected;
-(void)_sendXPCRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)addItemForAllServices:(id)arg0 ;
-(void)dealloc;
-(void)removeItemForAllServices:(id)arg0 ;


@end


#endif