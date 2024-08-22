// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APUIWIDGETCONTAINERVIEW_H
#define APUIWIDGETCONTAINERVIEW_H

@class UIView, UIStackView, ATXProactiveSuggestion;
@protocol APUISuggestionsWidgetViewDelegate;


#import "APUISuggestionView.h"
#import "APUISuggestionsWidgetView.h"

@interface APUIWidgetContainerView : UIView {
    UIStackView *_stackView;
    APUISuggestionView *_suggestionView;
}


@property (weak, nonatomic) NSObject<APUISuggestionsWidgetViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger platterSize; // ivar: _platterSize
@property (retain, nonatomic) ATXProactiveSuggestion *suggestion; // ivar: _suggestion
@property (readonly, nonatomic) APUISuggestionsWidgetView *suggestionsWidgetView; // ivar: _suggestionsWidgetView


-(void)_createStackViewIfNeeded;
-(void)_displayNoSuggestionsWithSuggestion:(id)arg0 ;
-(void)_setActionSuggestion:(id)arg0 ;
-(void)_setAppClipSuggestion:(id)arg0 ;
-(void)_setAppSuggestion:(id)arg0 ;
-(void)_setLinkSuggestion:(id)arg0 ;
-(void)displaySuggestion:(id)arg0 ;
-(void)setViewPressed:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif