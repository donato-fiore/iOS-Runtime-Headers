// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSBLUETOOTHMANAGER_H
#define CSBLUETOOTHMANAGER_H

@class NSArray, NSHashTable;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSBluetoothManager : NSObject

@property (nonatomic) *BTSessionImpl bluetoothSession; // ivar: _bluetoothSession
@property (retain, nonatomic) NSObject<OS_dispatch_group> *bluetoothSessionSetupGroup; // ivar: _bluetoothSessionSetupGroup
@property (retain, nonatomic) NSArray *connectedDeviceAddresses; // ivar: _connectedDeviceAddresses
@property (nonatomic) BOOL isAttachingBluetoothSession; // ivar: _isAttachingBluetoothSession
@property (nonatomic) *BTLocalDeviceImpl localDevice; // ivar: _localDevice
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSArray *pairedDeviceAddresses; // ivar: _pairedDeviceAddresses
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)_getWirelessSplitterInfoFromLocalDevice:(struct BTLocalDeviceImpl *)arg0 ;
-(id)init;
-(void)_attachBluetoothSession;
-(void)_detachBluetoothSession;
-(void)_sessionAttached:(struct BTSessionImpl *)arg0 result:(int)arg1 ;
-(void)_sessionDetached:(struct BTSessionImpl *)arg0 ;
-(void)_sessionTerminated:(struct BTSessionImpl *)arg0 ;
-(void)_setUpLocalDevice;
-(void)_tearDownLocalDevice;
-(void)device:(struct BTDeviceImpl *)arg0 serviceMask:(unsigned int)arg1 serviceEventType:(int)arg2 serviceSpecificEvent:(unsigned int)arg3 result:(int)arg4 ;
-(void)getBTLocalDeviceWithCompletion:(id)arg0 ;
-(void)getWirelessSplitterInfoWithCompletion:(id)arg0 ;
-(void)localDevice:(struct BTLocalDeviceImpl *)arg0 event:(int)arg1 result:(int)arg2 ;


@end


#endif