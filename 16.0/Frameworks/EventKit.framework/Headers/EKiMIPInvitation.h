// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKIMIPINVITATION_H
#define EKIMIPINVITATION_H

@class NSSet;


#import "EKiMIPUpdate.h"

@interface EKiMIPInvitation : EKiMIPUpdate {
    NSSet *_attendees;
}




+(BOOL)shouldSendEmailForEvent:(id)arg0 withDiff:(id)arg1 ;
-(id)attendees;
-(id)emailBody;
-(id)emailSubject;
-(id)initWithEvent:(id)arg0 withDiff:(id)arg1 ;


@end


#endif