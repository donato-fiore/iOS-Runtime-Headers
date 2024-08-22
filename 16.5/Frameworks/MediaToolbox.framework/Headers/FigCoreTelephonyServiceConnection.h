// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCORETELEPHONYSERVICECONNECTION_H
#define FIGCORETELEPHONYSERVICECONNECTION_H

@class CoreTelephonyClient, CTDataStatusBasic, NSString;
@protocol CoreTelephonyClientDataDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface FigCoreTelephonyServiceConnection : NSObject <CoreTelephonyClientDataDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_doomTimer;
    *__CTServerConnection _ctServerConnection;
    CoreTelephonyClient *_ctClient;
    CTDataStatusBasic *_ctDataStatus;
    OpaqueFigCoreTelephonyStatus _currentStatus;
    FigCoreTelephonyMonitorListHead _callbackEntries;
    *__CFAllocator _allocator;
}


@property (readonly, nonatomic) OpaqueFigCoreTelephonyStatus currentStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(int)registerListener:(*void)arg0 callback:(*unk)arg1 queue:(id)arg2 ;
-(void)_handleCTNotification:(struct __CFString *)arg0 notificationInfo:(struct __CFDictionary *)arg1 ;
-(void)_setupConnection;
-(void)_teardownConnection;
-(void)dealloc;
-(void)deregisterListener:(*void)arg0 ;
-(void)internetDataStatusBasic:(id)arg0 ;
-(void)processDataStatusBasic:(id)arg0 ;


@end


#endif