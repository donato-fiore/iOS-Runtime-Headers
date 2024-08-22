// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMNOTEBOOKRECIPIENTSETTINGS_H
#define EDAMNOTEBOOKRECIPIENTSETTINGS_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMNotebookRecipientSettings : FATObject

@property (retain, nonatomic) NSNumber *inMyList; // ivar: _inMyList
@property (retain, nonatomic) NSNumber *reminderNotifyEmail; // ivar: _reminderNotifyEmail
@property (retain, nonatomic) NSNumber *reminderNotifyInApp; // ivar: _reminderNotifyInApp
@property (retain, nonatomic) NSString *stack; // ivar: _stack


+(id)structFields;
+(id)structName;


@end


#endif