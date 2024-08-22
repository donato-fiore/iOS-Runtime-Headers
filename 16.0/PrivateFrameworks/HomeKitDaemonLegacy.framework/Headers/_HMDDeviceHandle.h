// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMDDEVICEHANDLE_H
#define _HMDDEVICEHANDLE_H

@class HMFObject, NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;


#import "HMDAccountHandle.h"

@interface _HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDAccountHandle *accountHandle;
@property (readonly, copy, nonatomic) NSString *destination;
@property (readonly, nonatomic, getter=isGlobal) BOOL global;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isLocal) BOOL local;


+(BOOL)isValidDestination:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestination:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif