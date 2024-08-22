// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSSCHEDULESETTINGSRECORD_H
#define DNDSSCHEDULESETTINGSRECORD_H

@class NSNumber, NSString;
@protocol NSCopying, NSMutableCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSScheduleSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>



@property (readonly, copy, nonatomic) NSNumber *bedtimeBehaviorEnabledSetting; // ivar: _bedtimeBehaviorEnabledSetting
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp; // ivar: _lastUpdatedTimestamp
@property (readonly, copy, nonatomic) NSNumber *scheduleEnabledSetting; // ivar: _scheduleEnabledSetting
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSNumber *timePeriodEndTimeHour; // ivar: _timePeriodEndTimeHour
@property (readonly, copy, nonatomic) NSNumber *timePeriodEndTimeMinute; // ivar: _timePeriodEndTimeMinute
@property (readonly, copy, nonatomic) NSNumber *timePeriodStartTimeHour; // ivar: _timePeriodStartTimeHour
@property (readonly, copy, nonatomic) NSNumber *timePeriodStartTimeMinute; // ivar: _timePeriodStartTimeMinute
@property (readonly, copy, nonatomic) NSNumber *timePeriodWeekdays; // ivar: _timePeriodWeekdays


+(id)_recordWithEncodedInfo:(id)arg0 error:(*id)arg1 ;
+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
+(id)recordForLegacyBehaviorOverride:(id)arg0 lastUpdated:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithLastUpdatedTimestamp:(id)arg0 scheduleEnabledSetting:(id)arg1 timePeriodStartTimeHour:(id)arg2 timePeriodStartTimeMinute:(id)arg3 timePeriodEndTimeHour:(id)arg4 timePeriodEndTimeMinute:(id)arg5 timePeriodWeekdays:(id)arg6 bedtimeBehaviorEnabledSetting:(id)arg7 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)legacyBehaviorOverride;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif