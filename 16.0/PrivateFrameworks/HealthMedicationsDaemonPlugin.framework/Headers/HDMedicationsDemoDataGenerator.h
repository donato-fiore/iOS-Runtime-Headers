// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONSDEMODATAGENERATOR_H
#define HDMEDICATIONSDEMODATAGENERATOR_H

@class NSString, NSCalendar, HDProfile;
@protocol HDDemoDataObjectGenerator;

#import <Foundation/Foundation.h>

#import "HDMedicationsDemoDataGeneratorState.h"

@interface HDMedicationsDemoDataGenerator : NSObject <HDDemoDataObjectGenerator>

 {
    NSString *_demoDataFileName;
    HDMedicationsDemoDataGeneratorState *_state;
    NSCalendar *_currentCalendar;
    BOOL isGeneratingDataOnWatch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_saveStateWithError:(*id)arg0 ;
-(BOOL)loadDemoDataObjectsFrom:(id)arg0 medications:(id)arg1 schedules:(id)arg2 logHistory:(id)arg3 ;
-(BOOL)saveMedicationDoseEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveMedications:(id)arg0 schedules:(id)arg1 logHistory:(id)arg2 ;
-(BOOL)setupOntologyContentIfRequired;
-(NSInteger)dayDifferenceFrom:(id)arg0 to:(id)arg1 ;
-(id)_keyValueDomain;
-(id)_makeStableIdentifierFromScheduledDateTime:(id)arg0 ;
-(id)_scheduleItemsForDate:(id)arg0 ;
-(id)asNeededDoseEventsForMedication:(id)arg0 startDateTime:(id)arg1 historyDayCount:(NSUInteger)arg2 ;
-(id)dailyScheduleForMedicationIdentifier:(id)arg0 isAMSchedule:(BOOL)arg1 ;
-(id)dayBeforeDate:(id)arg0 withHour:(NSInteger)arg1 ;
-(id)doseEventWithLogOrigin:(NSInteger)arg0 scheduleItemIdentifier:(id)arg1 medicationIdentifier:(id)arg2 scheduledDoseQuantity:(id)arg3 doseQuantity:(id)arg4 scheduledDate:(id)arg5 startDate:(id)arg6 status:(NSInteger)arg7 ;
-(id)doseEventsForMedication:(id)arg0 startDateTime:(id)arg1 historyDayCount:(NSUInteger)arg2 logOrigin:(NSInteger)arg3 ;
-(id)doseEventsForScheduleItems:(id)arg0 withStatus:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)medicationWithDetail:(id)arg0 ;
-(id)scheduledDoseEventsForMedication:(id)arg0 startDateTime:(id)arg1 historyDayCount:(NSUInteger)arg2 ;
-(id)scheduledDoseEventsWithCurrentDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateDemoDataForCurrentDate:(id)arg0 ;
-(void)generateFirstRunObjectsForDemoPerson:(id)arg0 firstDate:(id)arg1 objectCollection:(id)arg2 ;
-(void)generateIntitialDemoDataIfRequired;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)overrideMedicationShardCheck;
-(void)restoreState;
-(void)setDemoDataGenerationContextWithProfile:(id)arg0 generatorState:(id)arg1 ;
-(void)updateDemoDataFileName;


@end


#endif