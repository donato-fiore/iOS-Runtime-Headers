// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXBLUETOOTHDUETEVENT_H
#define ATXBLUETOOTHDUETEVENT_H

@class NSString;
@protocol NSSecureCoding;


#import "ATXDuetEvent.h"

@interface ATXBluetoothDuetEvent : ATXDuetEvent <NSSecureCoding>



@property (readonly, nonatomic) NSInteger bluetoothState; // ivar: _bluetoothState
@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType


+(BOOL)supportsSecureCoding;
+(NSInteger)deviceTypeFromBluetoothDeviceType:(id)arg0 ;
+(id)convertActiveBluetoothDisconnectedEventIntoInactiveBluetoothConnectedEvent:(id)arg0 ;
+(id)mostRecentOrActiveBluetoothConnectedEventFromCurrentContextStoreValues;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)description;
-(id)identifier;
-(id)initWithBluetoothState:(NSInteger)arg0 deviceType:(NSInteger)arg1 deviceName:(id)arg2 hardwareAddress:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif