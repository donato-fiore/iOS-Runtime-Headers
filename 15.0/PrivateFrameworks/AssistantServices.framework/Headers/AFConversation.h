// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFCONVERSATION_H
#define AFCONVERSATION_H

@class NSMutableDictionary, NSUUID, NSString;
@protocol AFConversationDelegate, AFConversationStorable;

#import <Foundation/Foundation.h>

#import "AFTreeNode.h"

@interface AFConversation : NSObject {
    NSMutableDictionary *_additionalInterpretationsForRefId;
    NSMutableDictionary *_updatedUserUtteranceForRefId;
}


@property (weak, nonatomic) NSObject<AFConversationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic, setter=_setLastRestoredItem:) NSObject<AFConversationStorable> *lastRestoredItem; // ivar: _lastRestoredItem
@property (retain, nonatomic, getter=_rootNode, setter=_setRootNode:) AFTreeNode *rootNode; // ivar: _rootNode
@property (nonatomic, getter=isSynchronizedWithServer) BOOL synchronizedWithServer; // ivar: _synchronizedWithServer


-(BOOL)_nodeContainsProvisionalItems:(id)arg0 ;
-(BOOL)containsItemForAceViewWithIdentifier:(id)arg0 ;
-(BOOL)containsItemWithIdentifier:(id)arg0 ;
-(BOOL)hasItemWithIdentifier:(id)arg0 ;
-(BOOL)itemAtIndexPathIsVirgin:(id)arg0 ;
-(NSInteger)numberOfChildrenForItemAtIndexPath:(id)arg0 ;
-(NSInteger)numberOfChildrenForItemWithIdentifier:(id)arg0 ;
-(NSInteger)presentationStateForItemAtIndexPath:(id)arg0 ;
-(NSInteger)typeForItemAtIndexPath:(id)arg0 ;
-(id)_changePresentationStateForNodes:(id)arg0 ;
-(id)_childOfNode:(id)arg0 withItemWhichCanBeUpdatedWithAceObject:(id)arg1 inDialogPhase:(id)arg2 ;
-(id)_indexPathForItemWithIdentifier:(id)arg0 ignoreNonExistent:(BOOL)arg1 ;
-(id)_indexPathsForAddingItemsWithCount:(NSInteger)arg0 asChildrenOfItemWithIdentifier:(id)arg1 ;
-(id)_itemAtIndexPath:(id)arg0 ;
-(id)_nodeAtIndexPath:(id)arg0 ;
-(id)aceCommandIdentifierForItemAtIndexPath:(id)arg0 ;
-(id)aceObjectForItemAtIndexPath:(id)arg0 ;
-(id)additionalSpeechInterpretationsForRefId:(id)arg0 ;
-(id)dialogPhaseForItemAtIndexPath:(id)arg0 ;
-(id)identifierOfItemAtIndexPath:(id)arg0 ;
-(id)indexPathForItemWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 languageCode:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 languageCode:(id)arg1 rootNode:(id)arg2 ;
-(id)initWithLanguageCode:(id)arg0 ;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)itemWithIdentifier:(id)arg0 ;
-(id)lastItem;
-(id)parentOfItemWithIdentifier:(id)arg0 ;
-(id)propertyListRepresentation;
-(id)updatedUserUtteranceForRefId:(id)arg0 ;
-(void)_addItemsForAceObjects:(id)arg0 type:(NSInteger)arg1 aceCommandIdentifier:(id)arg2 dialogPhase:(id)arg3 asChildrenOfItemWithIdentifier:(id)arg4 ;
-(void)_addItemsForAceViews:(id)arg0 withDialogPhase:(id)arg1 fromCommandWithIdentifier:(id)arg2 asChildrenOfItemWithIdentifier:(id)arg3 ;
-(void)_addItemsForAceViews:(id)arg0 withDialogPhase:(id)arg1 fromCommandWithIdentifier:(id)arg2 asChildrenOfItemWithIdentifier:(id)arg3 isSupplemental:(BOOL)arg4 isImmersiveExperience:(BOOL)arg5 ;
-(void)_addItemsForAceViews:(id)arg0 withDialogPhase:(id)arg1 fromCommandWithIdentifier:(id)arg2 atIndexPaths:(id)arg3 ;
-(void)_addItemsForAceViews:(id)arg0 withDialogPhase:(id)arg1 fromCommandWithIdentifier:(id)arg2 atIndexPaths:(id)arg3 isSupplemental:(BOOL)arg4 isImmersiveExperience:(BOOL)arg5 ;
-(void)_enumerateItemsUsingBlock:(id)arg0 ;
-(void)_processInsertions:(id)arg0 inDialogPhase:(id)arg1 ;
-(void)_removeNodes:(id)arg0 ;
-(void)addAdditionalSpeechInterpretation:(id)arg0 refId:(id)arg1 ;
-(void)addItemForMusicStartSessionCommand:(id)arg0 ;
-(void)addItemForPartialResultCommand:(id)arg0 ;
-(void)addItemForSpeechRecognizedCommand:(id)arg0 ;
-(void)addItemsForAceObjects:(id)arg0 type:(NSInteger)arg1 dialogPhase:(id)arg2 asChildrenOfItemWithIdentifier:(id)arg3 ;
-(void)addItemsForAceViews:(id)arg0 withDialogPhase:(id)arg1 asChildrenOfItemWithIdentifier:(id)arg2 ;
-(void)addItemsForAddViewsCommand:(id)arg0 ;
-(void)addItemsForShowHelpCommand:(id)arg0 ;
-(void)addRecognitionUpdateWithPhrases:(id)arg0 utterances:(id)arg1 refId:(id)arg2 ;
-(void)addSelectionResponse:(id)arg0 ;
-(void)cancelItemWithIdentifier:(id)arg0 ;
-(void)insertItemsForAceViews:(id)arg0 withDialogPhase:(id)arg1 atIndexPaths:(id)arg2 ;
-(void)notifyDelegateOfUpdates:(id)arg0 inserts:(id)arg1 presentationChanges:(id)arg2 ;
-(void)removeItemsAtIndexPaths:(id)arg0 ;
-(void)removeItemsFollowingItemAtIndexPath:(id)arg0 ;
-(void)removeItemsWithIdentifiers:(id)arg0 ;
-(void)removeTransientItems;
-(void)updateWithUpdateViewsCommand:(id)arg0 ;


@end


#endif