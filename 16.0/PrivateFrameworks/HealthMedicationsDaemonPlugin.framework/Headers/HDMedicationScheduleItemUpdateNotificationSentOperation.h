// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONSCHEDULEITEMUPDATENOTIFICATIONSENTOPERATION_H
#define HDMEDICATIONSCHEDULEITEMUPDATENOTIFICATIONSENTOPERATION_H

@class HDJournalableOperation, NSString;



@interface HDMedicationScheduleItemUpdateNotificationSentOperation : HDJournalableOperation {
    NSString *_itemIdentifier;
    BOOL _notificationSent;
}




+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheduleItemIdentifier:(id)arg0 notificationSent:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif