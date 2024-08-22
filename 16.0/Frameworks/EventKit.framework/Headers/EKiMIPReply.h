// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKIMIPREPLY_H
#define EKIMIPREPLY_H



#import "EKiMIPHandler.h"

@interface EKiMIPReply : EKiMIPHandler



+(BOOL)shouldSendEmailForEvent:(id)arg0 withDiff:(id)arg1 ;
-(id)attendees;
-(id)emailAttachmentName;
-(id)emailBody;
-(id)emailSubject;
-(int)icsMethod;


@end


#endif