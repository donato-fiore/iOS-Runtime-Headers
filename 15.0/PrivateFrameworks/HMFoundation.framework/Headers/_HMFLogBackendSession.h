// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMFLOGBACKENDSESSION_H
#define _HMFLOGBACKENDSESSION_H

@class NSMutableArray, RTCReporting, NSString;
@protocol HMFLogBackendSession, HMFLogging, _HMFLogBackendSessionDelegate;

#import <Foundation/Foundation.h>


@interface _HMFLogBackendSession : NSObject <HMFLogBackendSession, HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_queuedEvents;
    RTCReporting *_session;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_HMFLogBackendSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)sendMessage:(id)arg0 ;
-(id)initWithSession:(id)arg0 serviceName:(id)arg1 delegate:(id)arg2 ;
-(void)_flushQueuedEvents;
-(void)activateWithSession:(id)arg0 ;
-(void)dealloc;


@end


#endif