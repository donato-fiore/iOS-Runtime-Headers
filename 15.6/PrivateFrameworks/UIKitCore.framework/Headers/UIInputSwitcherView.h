// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTSWITCHERVIEW_H
#define UIINPUTSWITCHERVIEW_H

@class NSArray;
@protocol _UIInputSwitcherSplitMenu;


#import "UIKeyboardMenuView.h"
#import "UIInputSwitcherGestureState.h"

@interface UIInputSwitcherView : UIKeyboardMenuView <_UIInputSwitcherSplitMenu>

 {
    NSArray *m_inputSwitcherItems;
    BOOL m_isForDictation;
    UIInputSwitcherGestureState *m_gestureState;
}


@property (nonatomic) BOOL fileReportFromSwitcher; // ivar: _fileReportFromSwitcher
@property (copy, nonatomic) id *finishSplitTransitionBlock; // ivar: m_finishSplitTransitionBlock
@property (readonly, nonatomic) NSArray *inputModes; // ivar: m_inputModes
@property (nonatomic) BOOL messagesWriteboardFromSwitcher; // ivar: _messagesWriteboardFromSwitcher
@property (nonatomic) BOOL showsSwitches; // ivar: _showsSwitches


+(BOOL)canShowKeyboardSettings;
+(id)activeInstance;
+(id)sharedInstance;
-(BOOL)_canAddLaunchItem;
-(BOOL)_isHandBiasSwitchVisible;
-(BOOL)didHitDockItemWithinTypingWindow;
-(BOOL)shouldSelectItemAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldShow;
-(BOOL)shouldShowSelectionExtraViewForIndexPath:(id)arg0 ;
-(BOOL)usesDeviceLanguageForItemAtIndex:(NSUInteger)arg0 ;
-(NSInteger)_indexOfFastSwitchToggleModeForIdentifier:(id)arg0 ;
-(NSInteger)_indexOfInputSwitcherItemWithIdentifier:(id)arg0 ;
-(NSUInteger)defaultSelectedIndex;
-(NSUInteger)numberOfItems;
-(id)_itemWithIdentifier:(id)arg0 ;
-(id)buttonPressed:(id)arg0 withEvent:(id)arg1 location:(struct CGPoint )arg2 isForDictation:(BOOL)arg3 tapAction:(id)arg4 ;
-(id)defaultInputMode;
-(id)fontForItemAtIndex:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)localizedTitleForItemAtIndex:(NSUInteger)arg0 ;
-(id)nextInputMode;
-(id)previousInputMode;
-(id)selectedInputMode;
-(id)subtitleFontForItemAtIndex:(NSUInteger)arg0 ;
-(id)subtitleForItemAtIndex:(NSUInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)titleForItemAtIndex:(NSUInteger)arg0 ;
-(struct CGSize )preferredSize;
-(void)_reloadInputSwitcherItems;
-(void)_segmentControlValueDidChange:(id)arg0 ;
-(void)customizeCell:(id)arg0 forItemAtIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)didFinishSplitTransition;
-(void)didSelectItemAtIndex:(NSUInteger)arg0 ;
-(void)didShow;
-(void)fadeWithDelay:(CGFloat)arg0 ;
-(void)reloadInputModes;
-(void)returnToKeyboardIfNeeded;
-(void)selectInputMode:(id)arg0 ;
-(void)selectNextInputMode;
-(void)selectPreviousInputMode;
-(void)selectRowForInputMode:(id)arg0 ;
-(void)setInputMode:(id)arg0 ;
-(void)showAsPopupForKey:(id)arg0 inLayout:(id)arg1 ;
-(void)switchAction;
-(void)toggleKeyboardFloatingPreference;
-(void)updateSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)willFade;
-(void)willFadeForSelectionAtIndex:(NSUInteger)arg0 ;


@end


#endif