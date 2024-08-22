// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYNETWORKACCESSVIOLATION_H
#define HMACCESSORYNETWORKACCESSVIOLATION_H

@class HMFObject, NSDate;
@protocol NSSecureCoding;



@interface HMAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>



@property (readonly, getter=hasCurrentViolation) BOOL currentViolation;
@property (readonly) NSDate *lastResetDate; // ivar: _lastResetDate
@property (readonly) NSDate *lastViolationDate; // ivar: _lastViolationDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLastViolationDate:(id)arg0 lastViolationResetDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif