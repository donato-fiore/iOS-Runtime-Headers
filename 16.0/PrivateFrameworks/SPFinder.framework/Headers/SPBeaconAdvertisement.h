// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPBEACONADVERTISEMENT_H
#define SPBEACONADVERTISEMENT_H

@class NSData, NSUUID, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPEstimatedLocation.h"

@interface SPBeaconAdvertisement : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *address; // ivar: _address
@property (copy, nonatomic) NSData *batteryState; // ivar: _batteryState
@property (copy, nonatomic) NSData *deviceType; // ivar: _deviceType
@property (copy, nonatomic) SPEstimatedLocation *location; // ivar: _location
@property (copy, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (nonatomic) unsigned char rawStatus; // ivar: _rawStatus
@property (copy, nonatomic) NSUUID *recordIdentifier; // ivar: _recordIdentifier
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (copy, nonatomic) NSDate *scanDate; // ivar: _scanDate


+(BOOL)supportsSecureCoding;
-(id)initWithAddress:(id)arg0 publicKey:(id)arg1 deviceType:(id)arg2 batteryState:(id)arg3 rawStatus:(unsigned char)arg4 rssi:(NSInteger)arg5 scanDate:(id)arg6 recordIdentifier:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif