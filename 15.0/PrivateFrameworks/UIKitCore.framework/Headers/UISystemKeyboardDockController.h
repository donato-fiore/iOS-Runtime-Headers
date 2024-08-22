// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISYSTEMKEYBOARDDOCKCONTROLLER_H
#define UISYSTEMKEYBOARDDOCKCONTROLLER_H

@class NSString;
@protocol UIKeyboardDockViewDelegate;


#import "UIViewController.h"
#import "UIKeyboardDockItem.h"
#import "UIButton.h"
#import "UIKeyboardDockView.h"

@interface UISystemKeyboardDockController : UIViewController <UIKeyboardDockViewDelegate>

 {
    BOOL _dictationHasUsedServerManualEndpointing;
    BOOL _dictationUsingServerManualEndpointing;
    BOOL _isSuppressingDockItemTouch;
    UIKeyboardDockItem *_globeDockItem;
    UIKeyboardDockItem *_dictationDockItem;
    UIKeyboardDockItem *_keyboardDockItem;
    UIButton *_stopDictationButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIKeyboardDockView *dockView; // ivar: _dockView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(void)_dictationDidBeginNotification:(id)arg0 ;
-(void)dealloc;
-(void)dictationItemButtonWasPressed:(id)arg0 withEvent:(id)arg1 ;
-(void)globeItemButtonWasPressed:(id)arg0 withEvent:(id)arg1 ;
-(void)keyboardDockView:(id)arg0 didPressDockItem:(id)arg1 withEvent:(id)arg2 ;
-(void)keyboardItemButtonWasTapped:(id)arg0 withEvent:(id)arg1 ;
-(void)loadView;
-(void)setKeyboardDockItem;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDockItemsVisibility;
-(void)viewDidLoad;


@end


#endif