// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLTELEPHONYCONNECTION_H
#define PLTELEPHONYCONNECTION_H

@class PLAgent;

#import <Foundation/Foundation.h>


@interface PLTelephonyConnection : NSObject {
    *__CTServerConnection connection;
    *__CFMachPort ctServerPort;
    *__CFRunLoopSource ctServerSource;
}


@property (readonly, nonatomic) *__CTServerConnection connection;
@property (retain) PLAgent *observerAgent; // ivar: _observerAgent


+(id)sharedTelephonyConnection;
-(BOOL)requestBasebandCoreDump:(id)arg0 ;
-(BOOL)requestBasebandStateDump:(id)arg0 ;
-(id)activeBand;
-(id)currentCallStatus;
-(id)getProperty:(id)arg0 forTrace:(id)arg1 ;
-(id)getRemotePortNameWithLocalName:(id)arg0 ;
-(id)humanReadableCallStatus:(int)arg0 ;
-(id)humanReadableRATName:(struct __CFString *)arg0 ;
-(id)init;
-(void)deregisterForAllTelephonyNotifications;
-(void)enableDiagLogging;
-(void)getRAT:(*id)arg0 preferredRAT:(*id)arg1 campedRAT:(*id)arg2 ;
-(void)getSignalStrength:(*NSInteger)arg0 asPercentage:(*NSInteger)arg1 withBars:(*NSInteger)arg2 ;
-(void)invalidate;
-(void)registerCallback:(*unk)arg0 forTelephonyNotification:(struct __CFString *)arg1 ;
-(void)teardownConnection;


@end


#endif