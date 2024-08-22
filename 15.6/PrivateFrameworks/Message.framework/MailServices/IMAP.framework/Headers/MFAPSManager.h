// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFAPSMANAGER_H
#define MFAPSMANAGER_H

@class APSConnection, NSCountedSet, NSMutableSet, NSConditionLock, NSData, NSString;
@protocol APSConnectionDelegate, MFDiagnosticsGenerator, MFAPSManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MFAPSManager : NSObject <APSConnectionDelegate, MFDiagnosticsGenerator, MFAPSManager>

 {
    NSObject<OS_dispatch_queue> *_queue;
    APSConnection *_pushService;
    NSCountedSet *_watchedTopics;
    NSMutableSet *_unwatchedTopics;
    NSConditionLock *_deviceTokenLock;
    NSData *_deviceToken;
    NSString *_launchMachServiceName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)APSConnection;
+(id)apsEnvironment;
+(id)sharedManager;
-(id)copyDeviceToken;
-(id)copyDiagnosticInformation;
-(id)enabledTopicsWithTopics:(id)arg0 ;
-(id)init;
-(void)_startAPS_nts;
-(void)_stopAPS_nts;
-(void)connect;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)setLaunchMachServiceName:(id)arg0 ;
-(void)startWatchingForTopic:(id)arg0 ;
-(void)stopWatchingForTopic:(id)arg0 ;
-(void)swapTopic:(id)arg0 forNewTopic:(id)arg1 ;


@end


#endif