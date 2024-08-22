// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDSCHEDULEDACTIVITYCRITERIA_H
#define PDSCHEDULEDACTIVITYCRITERIA_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PDScheduledActivityCriteria : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_priorityKey;
    NSInteger _gracePeriod;
}


@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) CGFloat repeatInterval; // ivar: _repeatInterval
@property (nonatomic, getter=isRepeating) BOOL repeating; // ivar: _repeating
@property (nonatomic) BOOL requireMainsPower; // ivar: _requireMainsPower
@property (nonatomic) BOOL requireNetworkConnectivity; // ivar: _requireNetworkConnectivity
@property (nonatomic) BOOL requireScreenSleep; // ivar: _requireScreenSleep
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
+(id)maintenanceActivityCriteriaWithStartDate:(id)arg0 ;
+(id)priorityActivityCriteriaWithStartDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScheduledAcivityCriteria:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPriorityKey:(id)arg0 gracePeriod:(NSInteger)arg1 startDate:(id)arg2 ;
-(id)xpcActivityCriteria;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif