// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STALLOWANCE_H
#define STALLOWANCE_H

@class NSArray, NSString, NSDateComponents, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STAllowance : NSObject <NSCopying>



@property BOOL allowanceEnabled; // ivar: _allowanceEnabled
@property (nonatomic) NSUInteger behaviorType; // ivar: _behaviorType
@property (copy) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (copy) NSArray *categoryIdentifiers; // ivar: _categoryIdentifiers
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSString *scheduleText;
@property (nonatomic) BOOL shouldAllowEditing; // ivar: _shouldAllowEditing
@property (copy, nonatomic) NSDateComponents *time; // ivar: _time
@property (copy, nonatomic) NSDictionary *timeByDay; // ivar: _timeByDay
@property (readonly, nonatomic) CGFloat timeToday;
@property (copy) NSArray *webDomains; // ivar: _webDomains


+(CGFloat)timeIntervalForAllowanceDateComponents:(id)arg0 ;
+(id)dateComponentsForDuration:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultBudgetTime;
-(id)defaultTimeByDay;
-(id)init;
-(id)initWithBlueprint:(id)arg0 ;


@end


#endif