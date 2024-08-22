// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKPARTICIPANTCHANGE_H
#define EKPARTICIPANTCHANGE_H



#import "EKObjectChange.h"

@interface EKParticipantChange : EKObjectChange



+(int)entityType;
+(void)fetchParticipantChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchParticipantChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchParticipantChangesInStore:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif