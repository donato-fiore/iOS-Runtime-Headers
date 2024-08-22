// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RESESSIONRELEVANCEPROVIDER_H
#define RESESSIONRELEVANCEPROVIDER_H

@class NSDate;


#import "RERelevanceProvider.h"

@interface RESessionRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic, getter=isHistoric) BOOL historic; // ivar: _historic
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)_simulationDateFormatter;
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 historic:(BOOL)arg2 ;


@end


#endif