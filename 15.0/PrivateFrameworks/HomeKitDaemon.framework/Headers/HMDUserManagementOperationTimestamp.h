// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERMANAGEMENTOPERATIONTIMESTAMP_H
#define HMDUSERMANAGEMENTOPERATIONTIMESTAMP_H

@class HMFObject, NSString, NSNumber, NSDate;
@protocol HMBModelObjectCoder, NSSecureCoding;


#import "HMDDevice.h"

@interface HMDUserManagementOperationTimestamp : HMFObject <HMBModelObjectCoder, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) NSNumber *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 state:(NSUInteger)arg1 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif