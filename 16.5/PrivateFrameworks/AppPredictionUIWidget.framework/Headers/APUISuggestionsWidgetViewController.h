// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APUISUGGESTIONSWIDGETVIEWCONTROLLER_H
#define APUISUGGESTIONSWIDGETVIEWCONTROLLER_H

@class ATXProactiveSuggestion, NSArray, NSString;
@protocol ATXHomeScreenSuggestionClientObserver, APUISuggestionsWidgetViewDelegate, SBHWidgetContextMenuControlling, INUIAddVoiceShortcutViewControllerDelegate;


#import "APUIWidgetViewController.h"
#import "APUISuggestionsWidgetView.h"

@interface APUISuggestionsWidgetViewController : APUIWidgetViewController <ATXHomeScreenSuggestionClientObserver, APUISuggestionsWidgetViewDelegate, SBHWidgetContextMenuControlling, INUIAddVoiceShortcutViewControllerDelegate>

 {
    ATXProactiveSuggestion *_selectedSuggestion;
}


@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu; // ivar: _showingContextMenu
@property (readonly) Class superclass;
@property (retain, nonatomic) APUISuggestionsWidgetView *widgetView; // ivar: _widgetView


+(BOOL)_isSuggestionShortcut:(id)arg0 ;
+(id)_actionWithSuggestion:(id)arg0 ;
+(id)_shortcutWithSuggestion:(id)arg0 ;
-(BOOL)_canDismissSelectedSuggestion;
-(BOOL)_canSaveSelectedSuggestion;
-(BOOL)_canShowWhileLocked;
-(id)_suggestionIdsInLayout:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 suggestionsClient:(id)arg1 layoutSize:(NSUInteger)arg2 ;
-(void)_updateLayoutAsynchronouslyWithSuggestionClient:(id)arg0 ;
-(void)_updateWidgetViewIfPossible;
-(void)addVoiceShortcutViewController:(id)arg0 didFinishWithVoiceShortcut:(id)arg1 error:(id)arg2 ;
-(void)addVoiceShortcutViewControllerDidCancel:(id)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didSelectApplicationShortcutItem:(id)arg0 ;
-(void)suggestionClientDidRefreshProactiveWidgetLayouts:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)verifyLayoutSizeCompatibility;
-(void)view:(id)arg0 didFailExecutingSuggestion:(id)arg1 ;
-(void)view:(id)arg0 didFinishExecutingSuggestion:(id)arg1 ;
-(void)view:(id)arg0 didTapSuggestion:(id)arg1 ;
-(void)viewDidLoad;
-(void)willShowContextMenuAtLocation:(struct CGPoint )arg0 ;


@end


#endif