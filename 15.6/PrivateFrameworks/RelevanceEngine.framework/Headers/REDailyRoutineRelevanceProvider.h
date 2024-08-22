// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDAILYROUTINERELEVANCEPROVIDER_H
#define REDAILYROUTINERELEVANCEPROVIDER_H



#import "RERelevanceProvider.h"

@interface REDailyRoutineRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)init;
-(id)initWithDailyRoutineType:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif