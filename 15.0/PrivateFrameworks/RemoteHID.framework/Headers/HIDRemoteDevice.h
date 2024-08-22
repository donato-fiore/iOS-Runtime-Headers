// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HIDREMOTEDEVICE_H
#define HIDREMOTEDEVICE_H

@class HIDUserDevice, NSData;
@protocol OS_dispatch_semaphore;


#import "HIDRemoteDeviceServer.h"

@interface HIDRemoteDevice : HIDUserDevice

@property NSUInteger deviceID; // ivar: _deviceID
@property (retain) id *endpoint; // ivar: _endpoint
@property unsigned int handleReportCount; // ivar: _handleReportCount
@property unsigned int handleReportError; // ivar: _handleReportError
@property unsigned int intNotify; // ivar: _intNotify
@property *IONotificationPort intPort; // ivar: _intPort
@property (retain) NSData *lastGetReport; // ivar: _lastGetReport
@property int lastSetReportStatus; // ivar: _lastSetReportStatus
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (weak) HIDRemoteDeviceServer *server; // ivar: _server
@property BOOL waitForReport; // ivar: _waitForReport


-(id)description;
-(id)initWithProperties:(id)arg0 ;
-(int)getReportHandler:(int)arg0 reportID:(unsigned char)arg1 report:(char *)arg2 reportLength:(NSUInteger)arg3 ;
-(int)setReportHandler:(int)arg0 reportID:(unsigned char)arg1 status:(int)arg2 ;
-(void)cancel;


@end


#endif