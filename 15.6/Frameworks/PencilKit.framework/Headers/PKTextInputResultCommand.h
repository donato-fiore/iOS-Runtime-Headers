// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTRESULTCOMMAND_H
#define PKTEXTINPUTRESULTCOMMAND_H

@class CHTextInputQueryItem, NSString;
@protocol PKTextInputResultCommandDelegate;

#import <Foundation/Foundation.h>

#import "PKTextInputHandwritingShot.h"
#import "PKTextInputElementContent.h"
#import "PKTextInputTargetState.h"

@interface PKTextInputResultCommand : NSObject {
    BOOL _resultedInTargetChange;
    BOOL _hasPendingUncommittedChanges;
    BOOL _destinationFrameForAnimationMightMove;
    BOOL __applyIntermediateChange;
    id<PKTextInputResultCommandDelegate> *_delegate;
    NSInteger _commandState;
    CHTextInputQueryItem *_queryItem;
    PKTextInputHandwritingShot *_handwritingShot;
    PKTextInputElementContent *_targetElementContent;
    PKTextInputTargetState *_initialInputTargetState;
    NSInteger _immediateCommitType;
    PKTextInputTargetState *_finalInputTargetState;
    NSString *_committedText;
    NSInteger _committedTokenColumnCount;
    NSString *_commitReason;
    PKTextInputTargetState *__inProgressInputTargetState;
    _NSRange _affectedRange;
}




-(id)description;


@end


#endif