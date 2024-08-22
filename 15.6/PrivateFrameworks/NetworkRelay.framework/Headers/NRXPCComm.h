// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRXPCCOMM_H
#define NRXPCCOMM_H

@class NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NRDeviceIdentifier.h"

@interface NRXPCComm : NSObject {
    BOOL _sentCheckInMessage;
    BOOL _cancelled;
    os_unfair_lock_s _lock;
    NSObject<OS_xpc_object> *_connection;
    id *_notificationBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSUInteger _identifier;
    NSMutableArray *_messagesToBeSent;
}


@property (retain, nonatomic) NRDeviceIdentifier *deviceIdentifier; // ivar: _deviceIdentifier


-(id)description;
-(id)initWithDeviceIdentifier:(id)arg0 notificationQueue:(id)arg1 notificationBlock:(id)arg2 ;
-(void)activate;
-(void)cancel;
-(void)dealloc;
-(void)sendXPCCommDictionary:(id)arg0 ;


@end


#endif