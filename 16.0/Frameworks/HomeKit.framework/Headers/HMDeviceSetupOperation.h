// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEVICESETUPOPERATION_H
#define HMDEVICESETUPOPERATION_H

@class NSOperation, NSString, NSError, TRSession;
@protocol HMDeviceSetupSessionDelegate, HMFLogging, OS_dispatch_queue;


#import "HMAccessory.h"
#import "HMDeviceSetupSession.h"

@interface HMDeviceSetupOperation : NSOperation <HMDeviceSetupSessionDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error; // ivar: _error
@property (getter=isExecuting) BOOL executing; // ivar: _executing
@property (getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (readonly, weak) TRSession *session; // ivar: _session
@property (readonly, nonatomic) HMDeviceSetupSession *setupSession; // ivar: _setupSession
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)logCategory;
-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithSession:(id)arg0 ;
-(id)logIdentifier;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)dealloc;
-(void)finish;
-(void)setQualityOfService:(NSInteger)arg0 ;
-(void)setupSession:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)setupSession:(id)arg0 didReceiveExchangeData:(id)arg1 completionHandler:(id)arg2 ;
-(void)start;


@end


#endif