// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSYSTEMSTATELISTENER_H
#define MTSYSTEMSTATELISTENER_H

@class NSString;
@protocol MTSpringboardStartMonitorObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate, MTSystemStateDelegate, MTScheduler;

#import <Foundation/Foundation.h>


@interface MTSystemStateListener : NSObject <MTSpringboardStartMonitorObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTSystemStateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL restoreDoneHandled; // ivar: _restoreDoneHandled
@property (retain, nonatomic) NSObject<MTScheduler> *serializer; // ivar: _serializer
@property (readonly) Class superclass;


+(BOOL)isSystemRestoreDone;
+(id)_restoreNotification;
-(BOOL)_checkIfRestoreDone;
-(BOOL)checkSystemReady;
-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)gatherDiagnostics;
-(id)initWithDelegate:(id)arg0 ;
-(id)liveDarwinNotifications;
-(void)_handleF5Reset;
-(void)_handleRestoreDone;
-(void)_verifyRestoreDone;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)printDiagnostics;
-(void)springboardStartMonitor:(id)arg0 didReceiveStarted:(BOOL)arg1 ;


@end


#endif