// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDODEVICE_H
#define NDODEVICE_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NDODevice : NSObject <NSSecureCoding>



@property (retain) NSDate *activationDate; // ivar: _activationDate
@property NSUInteger deviceType; // ivar: _deviceType
@property (retain) NSString *name; // ivar: _name
@property (retain) NSString *serialNumber; // ivar: _serialNumber


+(BOOL)supportsSecureCoding;
+(id)deviceWithName:(id)arg0 serialNumber:(id)arg1 activationDate:(id)arg2 deviceType:(NSUInteger)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 serialNumber:(id)arg1 activationDate:(id)arg2 deviceType:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif