// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXEXPOSITORCLIENT_H
#define TSXEXPOSITORCLIENT_H

@class NSMutableArray, NSString;
@protocol TSXExpositorClientProtocol, OS_dispatch_queue;


#import "TSXClient.h"

@interface TSXExpositorClient : TSXClient <TSXExpositorClientProtocol>

 {
    NSObject<OS_dispatch_queue> *_clockManagerNotifications;
    NSMutableArray *_clockManagerMatchNotificationsArray;
    NSMutableArray *_clockManagerTerminateNotificationsArray;
    BOOL _clockManagerAvailable;
    NSObject<OS_dispatch_queue> *_ptpManagerNotifications;
    NSMutableArray *_ptpManagerMatchNotificationsArray;
    NSMutableArray *_ptpManagerTerminateNotificationsArray;
    BOOL _ptpManagerAvailable;
    BOOL _inited;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientProtocol;
+(id)serverProtocol;
+(id)serviceName;
+(id)sharedExpositorClient;
-(id)clockManagerDaemonClassNameForClockIdentifier:(NSUInteger)arg0 ;
-(id)clockManagerDiagnosticInfo;
-(id)clockManagerDiagnosticInfoForClockIdentifier:(NSUInteger)arg0 ;
-(id)clockManagerDiagnosticInfoForClockIdentifier:(NSUInteger)arg0 daemonClassName:(*id)arg1 ;
-(id)clockNameForClockIdentifier:(NSUInteger)arg0 ;
-(id)exportedObject;
-(id)gPTPManagerDiagnosticInfo;
-(id)gPTPPortDiagnosticInfoForPortWithClockIdentifier:(NSUInteger)arg0 andPortNumber:(unsigned short)arg1 ;
-(id)init;
-(id)kernelClockAvailableKernelClockIdentifiers;
-(void)clockManagerIsAvailable;
-(void)clockManagerIsUnavailable;
-(void)clockManagerNotifyWhenClockManagerIsAvailable:(id)arg0 ;
-(void)clockManagerNotifyWhenClockManagerIsUnavailable:(id)arg0 ;
-(void)gPTPManagerIsAvailable;
-(void)gPTPManagerIsUnavailable;
-(void)gPTPManagerNotifyWhengPTPManagerIsAvailable:(id)arg0 ;
-(void)gPTPManagerNotifyWhengPTPManagerIsUnavailable:(id)arg0 ;
-(void)interruptedConnection;
-(void)invalidatedConnection;


@end


#endif