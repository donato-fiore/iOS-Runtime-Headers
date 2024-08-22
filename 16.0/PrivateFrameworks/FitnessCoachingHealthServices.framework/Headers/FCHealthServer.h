// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCHEALTHSERVER_H
#define FCHEALTHSERVER_H

@class HDStandardTaskServer, HDDaemonTransaction, NSUUID;
@protocol FCHealthProfileExtending;



@interface FCHealthServer : HDStandardTaskServer {
    HDDaemonTransaction *_daemonTransaction;
    id<FCHealthProfileExtending> *_profileExtension;
    NSUUID *_taskUUID;
    os_unfair_lock_s _unfairLock;
}




+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)handleRegisterGoalProgressConfigurationData:(id)arg0 service:(id)arg1 completion:(id)arg2 ;
-(void)pluginMessage:(NSUInteger)arg0 data:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif