// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDATAMETADATAWORKOUTACTIVITYSECTION_H
#define HKDATAMETADATAWORKOUTACTIVITYSECTION_H

@class NSDateComponentsFormatter, HKWorkout;


#import "HKDataMetadataSection.h"
#import "HKDisplayTypeController.h"
#import "HKWorkoutDurationNumberFormatter.h"
#import "HKUnitPreferenceController.h"

@interface HKDataMetadataWorkoutActivitySection : HKDataMetadataSection

@property (retain, nonatomic) NSDateComponentsFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (retain, nonatomic) HKWorkoutDurationNumberFormatter *durationFormatter; // ivar: _durationFormatter
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController
@property (retain, nonatomic) HKWorkout *workout; // ivar: _workout


-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)initWithSample:(id)arg0 displayTypeController:(id)arg1 unitController:(id)arg2 ;
-(id)sectionTitle;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif