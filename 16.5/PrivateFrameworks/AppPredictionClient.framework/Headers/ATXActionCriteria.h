// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONCRITERIA_H
#define ATXACTIONCRITERIA_H

@class NSDateInterval, NSDate, NSPredicate;
@protocol NSCopying, NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXActionCriteria : NSObject <NSCopying, NSSecureCoding, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL lockScreenEligible; // ivar: _lockScreenEligible
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
+(id)predicateValidForAirplaneModeOn:(BOOL)arg0 ;
+(id)predicateValidForDNDStatusOn:(BOOL)arg0 ;
-(BOOL)isRelevant:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 lockScreenEligible:(BOOL)arg2 predicate:(id)arg3 ;
-(id)json;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif