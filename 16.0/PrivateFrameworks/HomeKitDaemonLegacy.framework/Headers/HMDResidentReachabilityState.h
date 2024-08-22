// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDRESIDENTREACHABILITYSTATE_H
#define HMDRESIDENTREACHABILITYSTATE_H

@class HMFObject, NSUUID;
@protocol NSSecureCoding, NSCopying;



@interface HMDResidentReachabilityState : HMFObject <NSSecureCoding, NSCopying>



@property (readonly) BOOL isReachable; // ivar: _isReachable
@property (readonly, copy) NSUUID *residentDeviceIdentifier; // ivar: _residentDeviceIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResidentDeviceIdentifier:(id)arg0 isReachable:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif