// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTINPUTSESSIONACTION_H
#define _UITEXTINPUTSESSIONACTION_H


#import <Foundation/Foundation.h>

#import "_UITextInputSessionBeganAction.h"
#import "_UITextInputSessionDeletionAction.h"
#import "_UITextInputSessionInsertionAction.h"
#import "_UITextInputSessionRedoAction.h"
#import "_UITextInputSessionSelectionAction.h"
#import "_UITextInputSessionUndoAction.h"

@interface _UITextInputSessionAction : NSObject

@property (readonly, nonatomic) _UITextInputSessionBeganAction *asBegan;
@property (readonly, nonatomic) _UITextInputSessionDeletionAction *asDeletion;
@property (readonly, nonatomic) _UITextInputSessionInsertionAction *asInsertion;
@property (readonly, nonatomic) _UITextInputSessionRedoAction *asRedo;
@property (readonly, nonatomic) _UITextInputSessionSelectionAction *asSelection;
@property (readonly, nonatomic) _UITextInputSessionUndoAction *asUndo;
@property (readonly, nonatomic) BOOL changedContent;
@property (nonatomic) _NSRange relativeRangeBefore; // ivar: _relativeRangeBefore
@property (nonatomic) NSInteger source; // ivar: _source


-(NSInteger)mergeActionIfPossible:(id)arg0 ;


@end


#endif