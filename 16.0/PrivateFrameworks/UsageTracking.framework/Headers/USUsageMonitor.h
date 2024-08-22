// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USUSAGEMONITOR_H
#define USUSAGEMONITOR_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface USUsageMonitor : NSObject

@property (readonly) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)startMonitoringBudgets:(id)arg0 darwinNotificationName:(id)arg1 notificationTimes:(id)arg2 error:(*id)arg3 ;
-(id)checkStatusOfBudgets:(id)arg0 clientIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)checkStatusOfBudgets:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)checkStatusOfAllBudgetsWithCompletionHandler:(id)arg0 ;
-(void)checkStatusOfBudgets:(id)arg0 clientIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)checkStatusOfBudgets:(id)arg0 clientIdentifiers:(id)arg1 completionHandler:(id)arg2 ;
-(void)checkStatusOfBudgets:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)startMonitoringBudgets:(id)arg0 darwinNotificationName:(id)arg1 notificationTimes:(id)arg2 clientIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)startMonitoringBudgets:(id)arg0 darwinNotificationName:(id)arg1 notificationTimes:(id)arg2 completionHandler:(id)arg3 ;
-(void)stopMonitoringAllBudgetsWithCompletionHandler:(id)arg0 ;
-(void)stopMonitoringBudgets:(id)arg0 clientIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)stopMonitoringBudgets:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif