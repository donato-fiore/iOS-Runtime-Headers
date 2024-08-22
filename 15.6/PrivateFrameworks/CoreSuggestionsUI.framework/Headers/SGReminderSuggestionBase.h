// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGREMINDERSUGGESTIONBASE_H
#define SGREMINDERSUGGESTIONBASE_H

@class SGReminder, NSString;
@protocol SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions, SGSuggestionDelegate;

#import <Foundation/Foundation.h>


@interface SGReminderSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions>

 {
    SGReminder *_reminder;
    NSString *_notes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: _suggestionDelegate
@property (readonly) Class superclass;


-(BOOL)wantsExtendedDetailOnlyView;
-(NSInteger)locationProximity;
-(NSInteger)suggestionActionButtonType;
-(id)dueDateComponents;
-(id)initWithRealtimeReminder:(id)arg0 ;
-(id)location;
-(id)locationString;
-(id)notes;
-(id)primaryActionTitle;
-(id)realtimeSuggestion;
-(id)suggestionAttributedSubtitle;
-(id)suggestionCategory;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg0 ;
-(id)suggestionCategorySubtitleForItems:(id)arg0 ;
-(id)suggestionCategoryTitle;
-(id)suggestionCategoryTitleForItems:(id)arg0 ;
-(id)suggestionDismissAction;
-(id)suggestionPrimaryAction;
-(id)suggestionSubtitle;
-(id)suggestionTitle;
-(id)suggestionsSecondTitle;
-(id)title;
-(id)url;
-(id)userActivity;


@end


#endif