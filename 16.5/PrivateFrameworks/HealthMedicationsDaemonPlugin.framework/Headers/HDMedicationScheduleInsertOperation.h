// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONSCHEDULEINSERTOPERATION_H
#define HDMEDICATIONSCHEDULEINSERTOPERATION_H

@class HDJournalableOperation, NSArray;



@interface HDMedicationScheduleInsertOperation : HDJournalableOperation {
    NSArray *_schedules;
    NSInteger _syncProvenance;
    NSInteger _syncIdentity;
}




+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMedicationSchedules:(id)arg0 syncProvenance:(NSInteger)arg1 syncIdentity:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif