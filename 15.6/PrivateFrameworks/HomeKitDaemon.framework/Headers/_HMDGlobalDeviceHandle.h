// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMDGLOBALDEVICEHANDLE_H
#define _HMDGLOBALDEVICEHANDLE_H

@class NSData;


#import "HMDDeviceHandle.h"
#import "HMDAccountHandle.h"

@interface _HMDGlobalDeviceHandle : HMDDeviceHandle

@property (readonly, copy) HMDAccountHandle *accountHandle; // ivar: _accountHandle
@property (readonly, copy, nonatomic) NSData *pushToken; // ivar: _pushToken


+(BOOL)isValidDestination:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGlobal;
-(NSUInteger)hash;
-(id)description;
-(id)destination;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestination:(id)arg0 ;
-(id)initWithPushToken:(id)arg0 accountHandle:(id)arg1 ;
-(id)privateDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif