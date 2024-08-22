// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTUNDOMANAGER_H
#define _UITEXTUNDOMANAGER_H

@class NSUndoManager;


#import "UITextInputController.h"

@interface _UITextUndoManager : NSUndoManager

@property (weak, nonatomic) UITextInputController *inputController; // ivar: _inputController


-(BOOL)canRedo;
-(BOOL)canUndo;
-(void)redo;
-(void)removeAllActions;
-(void)undo;


@end


#endif