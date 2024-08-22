// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTCOMMUTEPLANDETAIL_H
#define PKPAYMENTCOMMUTEPLANDETAIL_H

@class NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentCommutePlanDetail : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *lastUpdateDate; // ivar: _lastUpdateDate
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) NSUInteger planType; // ivar: _planType
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSInteger value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 startDate:(id)arg1 expiryDate:(id)arg2 title:(id)arg3 description:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 value:(NSInteger)arg1 title:(id)arg2 description:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif