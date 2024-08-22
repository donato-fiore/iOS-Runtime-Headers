// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCELLULARPLAN_H
#define CTCELLULARPLAN_H

@class NSString, NSArray, NSData, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTCellularPlanProfile.h"
#import "CTCellularPlanSubscription.h"

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int accountStatus;
@property (readonly, nonatomic) NSString *accountURL;
@property (readonly, nonatomic) BOOL autoRenew;
@property (readonly, nonatomic) CGFloat billingEndDate;
@property (readonly, nonatomic) CGFloat billingStartDate;
@property (readonly, nonatomic) NSString *carrierName;
@property (readonly, nonatomic) NSArray *dataUsage;
@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) BOOL isDeleteNotAllowed;
@property (readonly, nonatomic) BOOL isDisableNotAllowed;
@property (nonatomic) BOOL isHomePlan; // ivar: _isHomePlan
@property (readonly, nonatomic) BOOL isSelectable;
@property (readonly, nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) NSString *planDescription;
@property (readonly, nonatomic) int planStatus;
@property (readonly, nonatomic) int planType;
@property (retain, nonatomic) CTCellularPlanProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSData *profileId;
@property (nonatomic) BOOL requiresUserConsent; // ivar: _requiresUserConsent
@property (readonly, nonatomic) int status;
@property (retain, nonatomic) CTCellularPlanSubscription *subscription; // ivar: _subscription
@property (retain, nonatomic) NSNumber *subscriptionStatusOverride; // ivar: _subscriptionStatusOverride
@property (readonly, nonatomic) CGFloat timestamp;


+(BOOL)supportsSecureCoding;
-(NSInteger)planDescriptionCompare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfile:(id)arg0 subscription:(id)arg1 ;
-(id)redactedDescription;
-(id)statusAsString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif