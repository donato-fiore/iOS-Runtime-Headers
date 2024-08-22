// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKUNDOMANAGER_H
#define CUIKUNDOMANAGER_H

@class NSUndoManager, NSError, NSMutableDictionary;
@protocol CUIKCommitDelegate, CUIKDecisionDelegate;



@interface CUIKUndoManager : NSUndoManager

@property (retain) NSObject<CUIKCommitDelegate> *commitDelegate; // ivar: _commitDelegate
@property (retain) NSObject<CUIKDecisionDelegate> *decisionDelegate; // ivar: _decisionDelegate
@property (copy, nonatomic) id *editingManagerProvider; // ivar: _editingManagerProvider
@property (retain) NSError *lastError; // ivar: _lastError
@property (retain, nonatomic) NSMutableDictionary *specificIdentifierMap; // ivar: _specificIdentifierMap
@property (retain, nonatomic) NSMutableDictionary *undeletedObjectMap; // ivar: _undeletedObjectMap




@end


#endif