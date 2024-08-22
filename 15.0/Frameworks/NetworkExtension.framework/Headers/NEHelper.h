// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEHELPER_H
#define NEHELPER_H

@class NSDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEHelper : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, retain, nonatomic) NSDictionary *additionalProperties; // ivar: _additionalProperties
@property (readonly, nonatomic) int classID; // ivar: _classID
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (readonly, retain) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (copy) id *incomingMessageHandler; // ivar: _incomingMessageHandler
@property (nonatomic) BOOL isSynchronous; // ivar: _isSynchronous
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)getConnection;
-(id)initWithDelegateClassID:(int)arg0 queue:(id)arg1 ;
-(id)initWithDelegateClassID:(int)arg0 queue:(id)arg1 additionalProperties:(id)arg2 ;
-(void)dealloc;
-(void)sendRequest:(id)arg0 responseHandler:(id)arg1 ;


@end


#endif