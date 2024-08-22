// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEREADREQUESTMESSAGE_H
#define HMDREMOTEREADREQUESTMESSAGE_H

@class HMFObject, NSUUID, HMFActivity, HMFMessage;
@protocol OS_dispatch_queue;



@interface HMDRemoteReadRequestMessage : HMFObject

@property (readonly, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, nonatomic) HMFActivity *activity; // ivar: _activity
@property (readonly, nonatomic) HMFMessage *readMessage; // ivar: _readMessage
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // ivar: _responseQueue


-(id)debugDescription;
-(id)description;
-(id)initWithReadMessage:(id)arg0 accessoryUUID:(id)arg1 responseQueue:(id)arg2 activity:(id)arg3 ;


@end


#endif