// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGREMINDERSUGGESTION_H
#define SGREMINDERSUGGESTION_H

@class NSString, NSDateComponents, CLLocation, NSAttributedString, NSURL, NSUserActivity;
@protocol REMReminderCreationDelegate;


#import "SGReminderSuggestionBase.h"

@interface SGReminderSuggestion : SGReminderSuggestionBase <REMReminderCreationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDateComponents *dueDateComponents;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSInteger locationProximity;
@property (readonly, nonatomic) NSString *locationString;
@property (readonly, nonatomic) NSAttributedString *notes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSAttributedString *title;
@property (readonly, nonatomic) BOOL titleIsGeneratedSuggestion;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) BOOL wantsExtendedDetailOnlyView;


+(id)remindersImage;
-(id)suggestionCategoryImage;
-(id)suggestionImage;
-(id)suggestionPrimaryAction;
-(void)_dismissViewController:(id)arg0 andSignalCompletionWithResult:(BOOL)arg1 ;
-(void)reminderCreationViewController:(id)arg0 didCreateReminder:(BOOL)arg1 error:(id)arg2 ;


@end


#endif