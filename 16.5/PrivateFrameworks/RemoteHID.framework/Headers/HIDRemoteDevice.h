// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HIDREMOTEDEVICE_H
#define HIDREMOTEDEVICE_H

@class HIDUserDevice, NSData;
@protocol OS_dispatch_semaphore;



@interface HIDRemoteDevice : HIDUserDevice

@property NSUInteger deviceID; // ivar: _deviceID
@property NSUInteger endpointID; // ivar: _endpointID
@property unsigned int handleReportCount; // ivar: _handleReportCount
@property unsigned int handleReportError; // ivar: _handleReportError
@property (retain) NSData *lastGetReport; // ivar: _lastGetReport
@property int lastSetReportStatus; // ivar: _lastSetReportStatus
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property unsigned char side; // ivar: _side
@property unsigned char transportVersion; // ivar: _transportVersion
@property BOOL waitForReport; // ivar: _waitForReport


-(id)description;
-(id)initWithProperties:(id)arg0 ;
-(int)getReportHandler:(int)arg0 reportID:(unsigned char)arg1 report:(char *)arg2 reportLength:(NSUInteger)arg3 ;
-(int)setReportHandler:(int)arg0 reportID:(unsigned char)arg1 status:(int)arg2 ;


@end


#endif