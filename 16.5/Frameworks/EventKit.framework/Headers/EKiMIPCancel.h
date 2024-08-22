// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKIMIPCANCEL_H
#define EKIMIPCANCEL_H

@class NSArray, NSData;


#import "EKiMIPHandler.h"

@interface EKiMIPCancel : EKiMIPHandler {
    NSArray *_attendees;
    NSData *_attachmentData;
}




+(BOOL)shouldSendEmailForEvent:(id)arg0 removedAttendees:(*id)arg1 ;
-(id)attachmentData;
-(id)attendees;
-(id)emailAttachmentName;
-(id)emailBody;
-(id)emailSubject;
-(id)initWithEvent:(id)arg0 andAttendees:(id)arg1 ;
-(int)icsMethod;


@end


#endif