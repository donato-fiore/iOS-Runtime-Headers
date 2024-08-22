// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRPIDENTITY_H
#define HMDRPIDENTITY_H

@class HMFObject, NSString, HMFKey;
@protocol HMBModelObjectCoder, NSCopying, NSSecureCoding;



@interface HMDRPIdentity : HMFObject <HMBModelObjectCoder, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMFKey *deviceIRK; // ivar: _deviceIRK
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)identityWithRPIdentity:(id)arg0 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRPIndentity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceIRK:(id)arg0 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif