// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIINVITEESVIEWSOMEINVITEESCANATTENDSECTION_H
#define EKUIINVITEESVIEWSOMEINVITEESCANATTENDSECTION_H



#import "EKUIInviteesViewAlternativeTimeSection.h"

@interface EKUIInviteesViewSomeInviteesCanAttendSection : EKUIInviteesViewAlternativeTimeSection



-(BOOL)searchingForMoreTimes;
-(Class)customTimeCellClass;
-(NSUInteger)initialNumberOfTimeSlotsToShow;
-(id)headerTitle;
-(id)searcherTimeSlots;
-(void)searchForMoreTimes;


@end


#endif