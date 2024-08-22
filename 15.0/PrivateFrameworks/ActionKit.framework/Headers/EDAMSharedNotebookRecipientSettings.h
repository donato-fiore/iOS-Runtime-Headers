// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMSHAREDNOTEBOOKRECIPIENTSETTINGS_H
#define EDAMSHAREDNOTEBOOKRECIPIENTSETTINGS_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMSharedNotebookRecipientSettings : FATObject

@property (retain, nonatomic) NSNumber *reminderNotifyEmail; // ivar: _reminderNotifyEmail
@property (retain, nonatomic) NSNumber *reminderNotifyInApp; // ivar: _reminderNotifyInApp


+(id)structFields;
+(id)structName;


@end


#endif