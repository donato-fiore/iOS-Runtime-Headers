// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REDATERELEVANCEPROVIDER_H
#define REDATERELEVANCEPROVIDER_H

@class NSDate, NSDateInterval;


#import "RERelevanceProvider.h"

@interface REDateRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSDate *initialRelevanceDate; // ivar: _initialRelevanceDate
@property (readonly, nonatomic) NSDateInterval *interval; // ivar: _interval
@property (readonly, nonatomic) NSDate *irrelevantDate; // ivar: _irrelevantDate
@property (readonly, nonatomic) CGFloat recentDuration; // ivar: _recentDuration


+(id)_simulationDateFormatter;
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithEventDate:(id)arg0 ;
-(id)initWithEventDate:(id)arg0 duration:(CGFloat)arg1 ;
-(id)initWithEventInterval:(id)arg0 ;
-(id)initWithEventInterval:(id)arg0 becomesIrrelevantDate:(id)arg1 ;
-(id)initWithEventInterval:(id)arg0 becomesIrrelevantDate:(id)arg1 firstBecomesRelevantDate:(id)arg2 recentDuration:(CGFloat)arg3 ;


@end


#endif