// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMDLOCALDEVICEHANDLE_H
#define _HMDLOCALDEVICEHANDLE_H

@class NSUUID;


#import "HMDDeviceHandle.h"

@interface _HMDLocalDeviceHandle : HMDDeviceHandle

@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier; // ivar: _deviceIdentifier


+(BOOL)isValidDestination:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLocal;
-(NSUInteger)hash;
-(id)description;
-(id)destination;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestination:(id)arg0 ;
-(id)initWithDeviceIdentifier:(id)arg0 ;
-(id)privateDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif