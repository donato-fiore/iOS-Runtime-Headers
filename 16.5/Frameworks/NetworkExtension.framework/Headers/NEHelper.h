// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEHELPER_H
#define NEHELPER_H

@class NSDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEHelper : NSObject {
    os_unfair_lock_s _lock;
    int _classID;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSDictionary *_additionalProperties;
}


@property (copy) id *incomingMessageHandler; // ivar: _incomingMessageHandler
@property (nonatomic) BOOL isSynchronous; // ivar: _isSynchronous


-(id)initWithDelegateClassID:(int)arg0 queue:(id)arg1 ;
-(id)initWithDelegateClassID:(int)arg0 queue:(id)arg1 additionalProperties:(id)arg2 ;
-(void)dealloc;
-(void)sendRequest:(id)arg0 responseHandler:(id)arg1 ;


@end


#endif