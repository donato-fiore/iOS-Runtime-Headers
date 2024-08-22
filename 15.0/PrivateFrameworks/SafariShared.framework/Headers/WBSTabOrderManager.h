// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSTABORDERMANAGER_H
#define WBSTABORDERMANAGER_H

@class NSMutableDictionary, NSString;
@protocol WBSTabOrderPreferenceProviding, WBSTabOrderProvider, WBSOrderedTab;

#import <Foundation/Foundation.h>


@interface WBSTabOrderManager : NSObject <WBSTabOrderPreferenceProviding>

 {
    NSMutableDictionary *_simplifiedIdentifierMap;
    NSInteger _nextSimplifiedIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat minimumDelayForRelatingNewBlankTab;
@property (readonly, nonatomic) BOOL newBlankTabPositionAppliesToAllBlankTabs;
@property (readonly, nonatomic) NSUInteger newTabPosition;
@property (readonly, nonatomic) BOOL newTabPositionAppliesToSpawnedTabs;
@property (weak) NSObject<WBSTabOrderPreferenceProviding> *preferenceProvider; // ivar: _preferenceProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressRelatingNewBlankTabs;
@property (weak, nonatomic) NSObject<WBSTabOrderProvider> *tabOrderProvider; // ivar: _tabOrderProvider
@property (readonly, nonatomic) NSObject<WBSOrderedTab> *tabToSelectBeforeClosingSelectedTab;


-(BOOL)_tab:(id)arg0 isRelatedOrEqualToTab:(id)arg1 ;
-(BOOL)tab:(id)arg0 isInSameSetAsTab:(id)arg1 ;
-(NSUInteger)_indexOfLastRelatedTab;
-(NSUInteger)_indexOfTabToInsertNewTabAfter;
-(NSUInteger)_relationConsideringUserPreferenceForRelation:(NSUInteger)arg0 isBlankTab:(BOOL)arg1 ;
-(NSUInteger)_userPreferredNewBlankTabPositionInCurrentContext:(BOOL)arg0 ;
-(NSUInteger)_userPreferredNewSpawnedTabPosition;
-(id)_insertionHintWithIndexOfTabToInsertAfter:(NSUInteger)arg0 relation:(NSUInteger)arg1 ;
-(id)_insertionHintWithTabToInsertAfter:(id)arg0 relation:(NSUInteger)arg1 ;
-(id)_nextNonClosedTabAdjacentToIndex:(NSUInteger)arg0 inAscendingOrder:(BOOL)arg1 ;
-(id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(NSUInteger)arg0 ;
-(id)_tabInsertionHintForNewTabAfterTab:(id)arg0 relation:(NSUInteger)arg1 ;
-(id)_tabInsertionHintForPosition:(NSUInteger)arg0 isBlankTab:(BOOL)arg1 ;
-(id)init;
-(id)simplifiedIdentifierForDisplayInTabTitle:(id)arg0 ;
-(id)tabInsertionHintForDuplicateOfTab:(id)arg0 ;
-(id)tabInsertionHintForNewBlankTab;
-(id)tabInsertionHintForNewBlankTabInCurrentContext;
-(id)tabInsertionHintForPosition:(NSUInteger)arg0 ;
-(id)tabInsertionHintForSpawnedTab;
-(id)tabToInsertNewBlankTabAfter;
-(id)tabToInsertNewTabAfterForPosition:(NSUInteger)arg0 ;
-(id)tabToInsertSpawnedTabAfter;


@end


#endif