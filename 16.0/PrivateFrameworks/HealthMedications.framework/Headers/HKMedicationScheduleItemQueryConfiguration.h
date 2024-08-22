// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSCHEDULEITEMQUERYCONFIGURATION_H
#define HKMEDICATIONSCHEDULEITEMQUERYCONFIGURATION_H

@class HKQueryServerConfiguration, NSDate, NSString, NSArray;



@interface HKMedicationScheduleItemQueryConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *fromDate; // ivar: _fromDate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (copy, nonatomic) NSDate *toDate; // ivar: _toDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif