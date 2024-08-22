// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGEVENTSUGGESTIONBASE_H
#define SGEVENTSUGGESTIONBASE_H

@class SGRealtimeEvent, EKEvent, NSString;
@protocol SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions, SGSuggestionDelegate;

#import <Foundation/Foundation.h>


@interface SGEventSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions>

 {
    SGRealtimeEvent *_realtimeEvent;
    EKEvent *_eventKitEvent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: _suggestionDelegate
@property (readonly) Class superclass;


+(id)_eventStore;
+(id)calendarImage;
+(void)confirm:(BOOL)arg0 event:(id)arg1 completion:(id)arg2 ;
-(NSInteger)suggestionActionButtonType;
-(NSInteger)suggestionCategoryActionButtonType;
-(id)eventKitEvent;
-(id)initWithRealtimeEvent:(id)arg0 ;
-(id)primaryActionTitle;
-(id)realtimeSuggestion;
-(id)suggestionCategory;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg0 ;
-(id)suggestionCategorySubtitleForItems:(id)arg0 ;
-(id)suggestionCategoryTitle;
-(id)suggestionCategoryTitleForItems:(id)arg0 ;
-(id)suggestionComparator:(SEL)arg0 ;
-(id)suggestionDismissAction;
-(id)suggestionPrimaryAction;
-(id)suggestionSubtitle;
-(id)suggestionTitle;
-(id)suggestionsEvent;
-(void)dealloc;
-(void)eventKitStoreChangedNotification:(id)arg0 ;
-(void)preloadPrimaryActionViewController;


@end


#endif