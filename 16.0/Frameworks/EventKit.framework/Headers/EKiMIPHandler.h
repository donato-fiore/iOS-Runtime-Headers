// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKIMIPHANDLER_H
#define EKIMIPHANDLER_H


#import <Foundation/Foundation.h>

#import "EKEvent.h"

@interface EKiMIPHandler : NSObject

@property (retain) EKEvent *event; // ivar: _event


+(BOOL)shouldSendEmailForEvent:(id)arg0 withDiff:(id)arg1 ;
+(id)emailsFromAttendees:(id)arg0 ;
-(BOOL)sendEmail;
-(id)attachmentData;
-(id)attendees;
-(id)emailAttachmentName;
-(id)emailBody;
-(id)emailSubject;
-(id)iCalendarDocumentWithMethod:(int)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(int)icsMethod;


@end


#endif