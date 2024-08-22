// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRPIDENTITY_H
#define HMDRPIDENTITY_H

@class HMFObject, HMFKey;
@protocol NSCopying, NSSecureCoding;



@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, copy) HMFKey *deviceIRK; // ivar: _deviceIRK


+(BOOL)supportsSecureCoding;
+(id)identityWithRPIdentity:(id)arg0 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRPIndentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceIRK:(id)arg0 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif