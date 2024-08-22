// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTREMOTEDEVICE_H
#define CTREMOTEDEVICE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTDeviceIdentifier.h"

@interface CTRemoteDevice : NSObject <NSSecureCoding>



@property (retain, nonatomic) CTDeviceIdentifier *deviceID; // ivar: _deviceID
@property (nonatomic) BOOL isMultiESimEnabled; // ivar: _isMultiESimEnabled
@property (retain, nonatomic) NSArray *remoteDisplayPlans; // ivar: _remoteDisplayPlans
@property (retain, nonatomic) NSArray *remotePlans; // ivar: _remotePlans


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)deviceType;
-(id)EID;
-(id)description;
-(id)deviceName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif