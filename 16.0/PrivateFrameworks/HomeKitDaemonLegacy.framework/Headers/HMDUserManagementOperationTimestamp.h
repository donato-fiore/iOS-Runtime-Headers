// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUSERMANAGEMENTOPERATIONTIMESTAMP_H
#define HMDUSERMANAGEMENTOPERATIONTIMESTAMP_H

@class HMFObject, NSNumber, NSDate;
@protocol NSSecureCoding;


#import "HMDDevice.h"

@interface HMDUserManagementOperationTimestamp : HMFObject <NSSecureCoding>



@property (readonly) HMDDevice *device; // ivar: _device
@property (readonly) NSNumber *state; // ivar: _state
@property (readonly) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 state:(NSUInteger)arg1 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif