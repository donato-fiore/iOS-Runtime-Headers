// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCELLULARPLANSUBSCRIPTION_H
#define CTCELLULARPLANSUBSCRIPTION_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCellularPlanSubscription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int accountStatus; // ivar: _accountStatus
@property (readonly, nonatomic) NSString *accountURL; // ivar: _accountURL
@property (readonly, nonatomic) BOOL autoRenew; // ivar: _autoRenew
@property (readonly, nonatomic) CGFloat billingEndDate; // ivar: _billingEndDate
@property (readonly, nonatomic) CGFloat billingStartDate; // ivar: _billingStartDate
@property (retain, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (readonly, nonatomic) NSArray *dataUsage; // ivar: _dataUsage
@property (readonly, nonatomic) NSArray *homeCountryList; // ivar: _homeCountryList
@property (readonly, nonatomic) NSString *iccid; // ivar: _iccid
@property (readonly, nonatomic) NSString *planDescription; // ivar: _planDescription
@property (nonatomic) int planStatus; // ivar: _planStatus
@property (readonly, nonatomic) int planType; // ivar: _planType
@property (nonatomic) int subscriptionResult; // ivar: _subscriptionResult
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualOrNewerThanSubscription:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIccid:(id)arg0 subscriptionResult:(int)arg1 autoRenew:(BOOL)arg2 billingStartDate:(CGFloat)arg3 billingEndDate:(CGFloat)arg4 carrierName:(id)arg5 planType:(int)arg6 planDescription:(id)arg7 planStatus:(int)arg8 accountStatus:(int)arg9 accountURL:(id)arg10 timestamp:(CGFloat)arg11 homeCountryList:(id)arg12 dataUsage:(id)arg13 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif