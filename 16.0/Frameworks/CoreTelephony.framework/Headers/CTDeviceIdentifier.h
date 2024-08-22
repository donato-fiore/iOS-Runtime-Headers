// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTDEVICEIDENTIFIER_H
#define CTDEVICEIDENTIFIER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDeviceIdentifier : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *EID; // ivar: _EID
@property (retain, nonatomic) NSString *IMEI; // ivar: _IMEI
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (retain, nonatomic) NSString *idsDeviceId; // ivar: _idsDeviceId
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceType:(NSUInteger)arg0 EID:(id)arg1 IMEI:(id)arg2 idsDeviceId:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif