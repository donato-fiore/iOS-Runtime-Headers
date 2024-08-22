// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDATAMETADATAWORKOUTEVENTSECTION_H
#define HKDATAMETADATAWORKOUTEVENTSECTION_H

@class NSDateComponentsFormatter, HKWorkout;


#import "HKDataMetadataSection.h"
#import "HKWorkoutDurationNumberFormatter.h"

@interface HKDataMetadataWorkoutEventSection : HKDataMetadataSection

@property (retain, nonatomic) NSDateComponentsFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) HKWorkoutDurationNumberFormatter *durationFormatter; // ivar: _durationFormatter
@property (retain, nonatomic) HKWorkout *workout; // ivar: _workout


-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)initWithSample:(id)arg0 ;
-(id)sectionTitle;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif