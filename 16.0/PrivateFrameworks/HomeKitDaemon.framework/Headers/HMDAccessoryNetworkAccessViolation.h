// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYNETWORKACCESSVIOLATION_H
#define HMDACCESSORYNETWORKACCESSVIOLATION_H

@class HMFObject, NSDate;
@protocol NSSecureCoding;



@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>



@property (readonly, getter=hasCurrentViolation) BOOL currentViolation;
@property (readonly) NSDate *lastResetDate; // ivar: _lastResetDate
@property (readonly) NSDate *lastViolationDate; // ivar: _lastViolationDate


+(BOOL)supportsSecureCoding;
+(id)noViolation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLastViolationDate:(id)arg0 lastViolationResetDate:(id)arg1 ;
-(id)initWithLastViolationTimeInterval:(id)arg0 lastViolationResetTimeInterval:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif