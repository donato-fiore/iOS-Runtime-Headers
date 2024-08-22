// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYINVITATION_H
#define HMDACCESSORYINVITATION_H

@class HMFObject, NSUUID;
@protocol NSSecureCoding;


#import "HMDAccessory.h"

@interface HMDAccessoryInvitation : HMFObject <NSSecureCoding>



@property (readonly, weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)initWithAccessory:(id)arg0 identifier:(id)arg1 state:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif