// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPMSAGENT_H
#define CPMSAGENT_H

@class NSSet, NSMutableSet, NSString;
@protocol CPMSAgentProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPMSAgent : NSObject <CPMSAgentProtocol>

 {
    unsigned int _ppmService;
    *IONotificationPort _notificationPort;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSSet *_timeScalesSet;
}


@property (retain) NSMutableSet *clientSet; // ivar: _clientSet
@property unsigned int connect; // ivar: _connect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isCPMSSupported;
+(BOOL)isCPMSSupportedForAnyClient;
+(BOOL)isCPMSSupportedForClient:(NSInteger)arg0 ;
+(id)log;
+(id)sharedCPMSAgent;
+(unsigned char)CPMSClientIdToPPMClientId:(NSInteger)arg0 ;
-(BOOL)acknowledgePowerBudget:(id)arg0 forClientId:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)isClientIdValid:(NSInteger)arg0 ;
-(BOOL)registerClientWithDescription:(id)arg0 error:(*id)arg1 ;
-(BOOL)registerForNotifications;
-(BOOL)sanityCheckClientDescription:(id)arg0 ;
-(char)CPMSPowerTimeScaleToPPMIndex:(id)arg0 ;
-(id)PPMIndexToCPMSPowerTimeScale:(char)arg0 ;
-(id)copyPowerBudgetForRequest:(id)arg0 forClient:(NSInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(id)requestPowerBudget:(id)arg0 forClient:(NSInteger)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif