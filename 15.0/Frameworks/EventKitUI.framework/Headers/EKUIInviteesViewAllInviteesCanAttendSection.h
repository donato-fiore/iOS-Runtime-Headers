// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIINVITEESVIEWALLINVITEESCANATTENDSECTION_H
#define EKUIINVITEESVIEWALLINVITEESCANATTENDSECTION_H



#import "EKUIInviteesViewAlternativeTimeSection.h"

@interface EKUIInviteesViewAllInviteesCanAttendSection : EKUIInviteesViewAlternativeTimeSection



-(BOOL)searchingForMoreTimes;
-(Class)customTimeCellClass;
-(NSUInteger)initialNumberOfTimeSlotsToShow;
-(id)headerTitle;
-(id)searcherTimeSlots;
-(void)searchForMoreTimes;


@end


#endif