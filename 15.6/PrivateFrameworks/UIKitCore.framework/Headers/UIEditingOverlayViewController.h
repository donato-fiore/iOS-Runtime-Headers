// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIEDITINGOVERLAYVIEWCONTROLLER_H
#define UIEDITINGOVERLAYVIEWCONTROLLER_H

@protocol UIInteraction;


#import "UIViewController.h"
#import "_UIActionWhenIdle.h"
#import "UIUndoGestureInteraction.h"

@interface UIEditingOverlayViewController : UIViewController

@property (retain, nonatomic) _UIActionWhenIdle *addPencilTextInputInteractionAction; // ivar: _addPencilTextInputInteractionAction
@property (retain, nonatomic) NSObject<UIInteraction> *pencilTextInputInteraction; // ivar: _pencilTextInputInteraction
@property (retain, nonatomic) UIUndoGestureInteraction *undoInteraction; // ivar: _undoInteraction


-(BOOL)_canShowWhileLocked;
-(void)_addInteractions;
-(void)_addPencilTextInputInteraction;
-(void)_removeInteractions;
-(void)loadView;
-(void)updateEditingOverlayContainer;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif