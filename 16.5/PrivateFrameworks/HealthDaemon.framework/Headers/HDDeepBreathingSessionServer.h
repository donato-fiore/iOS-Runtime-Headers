// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEEPBREATHINGSESSIONSERVER_H
#define HDDEEPBREATHINGSESSIONSERVER_H

@class _HKDeepBreathingSessionConfiguration, NSString;
@protocol _HKDeepBreathingSessionServer, OS_dispatch_queue;


#import "HDStandardTaskServer.h"
#import "HDDaemonTransaction.h"

@interface HDDeepBreathingSessionServer : HDStandardTaskServer <_HKDeepBreathingSessionServer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HDDaemonTransaction *_daemonTransaction;
    _HKDeepBreathingSessionConfiguration *_sessionConfiguration;
    NSInteger _serverState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)remote_endSessionWithEndReason:(NSInteger)arg0 ;
-(void)remote_startGuiding;
-(void)remote_startSessionWithStartDate:(id)arg0 completion:(id)arg1 ;


@end


#endif