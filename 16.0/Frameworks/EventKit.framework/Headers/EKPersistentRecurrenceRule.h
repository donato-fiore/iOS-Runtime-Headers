// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPERSISTENTRECURRENCERULE_H
#define EKPERSISTENTRECURRENCERULE_H



#import "EKPersistentObject.h"

@interface EKPersistentRecurrenceRule : EKPersistentObject



+(Class)alternateUniverseClass;
+(Class)meltedClass;
+(id)defaultPropertiesToLoad;
+(id)propertyKeyForUniqueIdentifier;
+(id)relations;
-(NSInteger)firstDayOfTheWeekRaw;
-(NSInteger)interval;
-(NSUInteger)count;
-(id)UUID;
-(id)cachedEndDate;
-(id)cachedEndDateTimeZone;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)endDate;
-(id)owner;
-(id)specifier;
-(int)entityType;
-(int)frequencyRaw;
-(void)setCachedEndDate:(id)arg0 ;
-(void)setCachedEndDateTimeZone:(id)arg0 ;
-(void)setCount:(NSUInteger)arg0 ;
-(void)setEndDate:(id)arg0 ;
-(void)setFirstDayOfTheWeekRaw:(NSInteger)arg0 ;
-(void)setFrequencyRaw:(int)arg0 ;
-(void)setInterval:(NSInteger)arg0 ;
-(void)setOwner:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)setUUID:(id)arg0 ;


@end


#endif