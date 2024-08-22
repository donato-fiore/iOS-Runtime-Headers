// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEVICEHANDLE_H
#define HMDDEVICEHANDLE_H

@class HMFObject, NSString, NSUUID, NSData;
@protocol NSCopying, NSSecureCoding;


#import "HMDAccountHandle.h"
#import "_HMDDeviceHandle.h"

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) NSString *destination;
@property (readonly, getter=isGlobal) BOOL global;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy, nonatomic) _HMDDeviceHandle *internal; // ivar: _internal
@property (readonly, getter=isLocal) BOOL local;
@property (readonly, copy) NSData *pushToken;


+(BOOL)supportsSecureCoding;
+(id)deviceHandleForDestination:(id)arg0 ;
+(id)deviceHandleForDeviceIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPushToken:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternal:(id)arg0 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif