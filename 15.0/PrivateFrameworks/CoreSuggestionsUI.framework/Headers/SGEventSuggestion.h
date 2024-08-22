// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGEVENTSUGGESTION_H
#define SGEVENTSUGGESTION_H

@class UIImage, NSString;
@protocol EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate;


#import "SGEventSuggestionBase.h"

@interface SGEventSuggestion : SGEventSuggestionBase <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate>

 {
    UIImage *_calendarImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)calendarImage;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg0 ;
-(id)suggestionAttributedSubtitle;
-(id)suggestionImage;
-(id)suggestionPrimaryAction;
-(void)_dismissViewController:(id)arg0 retainBanner:(BOOL)arg1 ;
-(void)eventEditViewController:(id)arg0 didCompleteWithAction:(NSInteger)arg1 ;
-(void)eventViewController:(id)arg0 didCompleteWithAction:(NSInteger)arg1 ;
-(void)preloadPrimaryActionViewController;


@end


#endif