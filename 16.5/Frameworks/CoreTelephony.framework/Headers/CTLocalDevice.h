// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTLOCALDEVICE_H
#define CTLOCALDEVICE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTDeviceIdentifier.h"

@interface CTLocalDevice : NSObject <NSSecureCoding>



@property (retain, nonatomic) CTDeviceIdentifier *deviceID; // ivar: _deviceID
@property (retain, nonatomic) NSArray *installedPlans; // ivar: _installedPlans


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