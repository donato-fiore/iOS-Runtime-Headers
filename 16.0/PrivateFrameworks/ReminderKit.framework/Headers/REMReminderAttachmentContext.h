// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREMINDERATTACHMENTCONTEXT_H
#define REMREMINDERATTACHMENTCONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "REMReminder.h"

@interface REMReminderAttachmentContext : NSObject

@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *fileAttachments;
@property (readonly, nonatomic) NSArray *imageAttachments;
@property (retain, nonatomic) REMReminder *reminder; // ivar: _reminder
@property (readonly, nonatomic) NSArray *urlAttachments;


-(id)attachmentsOfClass:(Class)arg0 ;
-(id)initWithReminder:(id)arg0 ;


@end


#endif