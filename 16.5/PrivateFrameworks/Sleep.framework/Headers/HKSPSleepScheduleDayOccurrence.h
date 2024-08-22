// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPSLEEPSCHEDULEDAYOCCURRENCE_H
#define HKSPSLEEPSCHEDULEDAYOCCURRENCE_H

@class NSDateComponents, NSString, NSDate, NSDictionary, NSSet;
@protocol HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable;

#import <Foundation/Foundation.h>

#import "HKSPAlarmConfiguration.h"

@interface HKSPSleepScheduleDayOccurrence : NSObject <HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable>



@property (readonly, nonatomic) HKSPAlarmConfiguration *alarmConfiguration; // ivar: _alarmConfiguration
@property (readonly, copy, nonatomic) NSDateComponents *bedtimeComponents; // ivar: _bedtimeComponents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *groupingIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger version; // ivar: _version
@property (readonly, copy, nonatomic) NSDateComponents *wakeUpComponents; // ivar: _wakeUpComponents


+(BOOL)supportsSecureCoding;
+(id)innerClasses;
-(BOOL)_equateTo:(id)arg0 builderBuilderBlock:(id)arg1 ;
-(BOOL)isAlarmEquivalentToOccurrenceIgnoringDates:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentTo:(id)arg0 ;
-(BOOL)isEquivalentToOccurrenceIgnoringDates:(id)arg0 ;
-(id)_decodeComponentsForPersistenceWithCoder:(id)arg0 key:(id)arg1 ;
-(id)changesFromOccurrence:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)generateSleepScheduleOccurrenceWithWeekdays:(NSUInteger)arg0 ;
-(id)init;
-(id)initFromObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_encodeComponentsForPersistence:(id)arg0 coder:(id)arg1 key:(id)arg2 ;
-(void)copyFromObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif