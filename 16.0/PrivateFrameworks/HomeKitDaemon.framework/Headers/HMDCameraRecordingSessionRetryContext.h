// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGSESSIONRETRYCONTEXT_H
#define HMDCAMERARECORDINGSESSIONRETRYCONTEXT_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDCameraRecordingSessionRetryContext : NSObject

@property (readonly) NSDictionary *homePresenceByPairingIdentity; // ivar: _homePresenceByPairingIdentity
@property (readonly) CGFloat maxRetryInterval; // ivar: _maxRetryInterval
@property CGFloat retryInterval; // ivar: _retryInterval
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithWorkQueue:(id)arg0 homePresenceByPairingIdentity:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 homePresenceByPairingIdentity:(id)arg1 preferences:(id)arg2 ;
-(void)computeNextRetryInterval;


@end


#endif