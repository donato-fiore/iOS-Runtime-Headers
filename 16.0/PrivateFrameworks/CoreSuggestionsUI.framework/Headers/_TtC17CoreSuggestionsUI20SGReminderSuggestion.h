// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17CORESUGGESTIONSUI20SGREMINDERSUGGESTION_H
#define _TTC17CORESUGGESTIONSUI20SGREMINDERSUGGESTION_H

@class NSDateComponents, CLLocation, NSString, NSAttributedString, NSURL, NSUserActivity;
@protocol REMReminderCreationDelegate, SGSuggestionExtensions, SGSuggestion, SGSuggestionCategory, SGSuggestionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC17CoreSuggestionsUI20SGReminderSuggestion : NSObject <REMReminderCreationDelegate, SGSuggestionExtensions, SGSuggestion, SGSuggestionCategory>

 {
    ? reminder;
    ? reminderNotes;
    ? logger;
}


@property (nonatomic, readonly) NSDateComponents *dueDateComponents;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSInteger locationProximity;
@property (nonatomic, readonly) NSString *locationString;
@property (nonatomic, readonly) NSAttributedString *notes;
@property (nonatomic, weak) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: suggestionDelegate
@property (nonatomic, readonly) NSAttributedString *title;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) BOOL wantsExtendedDetailOnlyView;


-(NSInteger)suggestionActionButtonType;
-(NSInteger)suggestionCategoryActionButtonType;
-(id)init;
-(id)initWithRealtimeReminder:(id)arg0 ;
-(id)realtimeSuggestion;
-(id)suggestionCategory;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg0 ;
-(id)suggestionCategorySubtitleForItems:(id)arg0 ;
-(id)suggestionCategoryTitle;
-(id)suggestionCategoryTitleForItems:(id)arg0 ;
-(id)suggestionDismissAction;
-(id)suggestionImage;
-(id)suggestionPrimaryAction;
-(id)suggestionTitle;
-(void)dismissViewController:(id)arg0 finished:(BOOL)arg1 ;
-(void)reminderCreationViewController:(id)arg0 didCreateReminder:(BOOL)arg1 error:(id)arg2 ;


@end


#endif