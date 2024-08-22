// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIDEVICEMANAGER_H
#define DIDEVICEMANAGER_H

@class NSArray;
@protocol DIDeviceListDelegate, DIDeviceStatusDelegate, DIXPCManagerCheckInObserver, DIDeviceManagerDelegate;

#import <Foundation/Foundation.h>

#import "DIXPCConnectionManager.h"
#import "DIDevice.h"

@interface DIDeviceManager : NSObject <DIDeviceListDelegate, DIDeviceStatusDelegate, DIXPCManagerCheckInObserver>



@property (readonly, weak, nonatomic) DIXPCConnectionManager *connectionManager; // ivar: _connectionManager
@property (copy, nonatomic) DIDevice *currentDevice; // ivar: _currentDevice
@property (weak, nonatomic) NSObject<DIDeviceManagerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *devices; // ivar: _devices


-(id)initWithConnectionManager:(id)arg0 ;
-(void)didAddDevice:(id)arg0 ;
-(void)didLoadDevices:(id)arg0 ;
-(void)didRemoveDevice:(id)arg0 ;
-(void)didUpdateDevice:(id)arg0 ;
-(void)xpcManagerDidPerformDaemonCheckIn:(id)arg0 ;


@end


#endif