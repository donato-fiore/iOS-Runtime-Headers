// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTREGACCOUNTMONITOR_H
#define FTREGACCOUNTMONITOR_H

@class NSArray, IMServiceImpl;

#import <Foundation/Foundation.h>

#import "FTRegConnectionHandler.h"

@interface FTRegAccountMonitor : NSObject {
    FTRegConnectionHandler *_connectionHandler;
    ? _monitorFlags;
}


@property (readonly, retain, nonatomic) NSArray *activeAccounts; // ivar: _accounts
@property (retain, nonatomic) IMServiceImpl *service; // ivar: _service
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType


-(BOOL)_shouldHandleAccountNofication:(id)arg0 ;
-(id)initWithServiceType:(NSInteger)arg0 ;
-(id)logName;
-(void)_handleAccountNotification:(id)arg0 ;
-(void)_handleDaemonConnected:(id)arg0 ;
-(void)_startListeningForNotifications;
-(void)_stopListeningForNotifications;
-(void)_updateAccountState:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif