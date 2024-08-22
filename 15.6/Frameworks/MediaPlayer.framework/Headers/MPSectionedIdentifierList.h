// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSECTIONEDIDENTIFIERLIST_H
#define MPSECTIONEDIDENTIFIERLIST_H

@class NSMutableArray, NSMutableDictionary, NSSet, NSString, NSDictionary;
@protocol _MPSectionedIdentifierListEncodableNextEntriesProviding, NSSecureCoding, NSObject, OS_dispatch_queue, MPSectionedIdentifierListAnnotationDelegate, MPSectionedIdentifierListDelegate;

#import <Foundation/Foundation.h>

#import "MPSectionedIdentifierListEntry.h"

@interface MPSectionedIdentifierList : NSObject <_MPSectionedIdentifierListEncodableNextEntriesProviding, NSSecureCoding, NSObject>

 {
    NSInteger _itemCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_startEntries;
    MPSectionedIdentifierListEntry *_endEntry;
    NSMutableDictionary *_sectionHeadEntryMap;
    NSMutableDictionary *_sectionTransactionCallouts;
}


@property (readonly, nonatomic) NSSet *allSectionIdentifiers;
@property (weak, nonatomic) NSObject<MPSectionedIdentifierListAnnotationDelegate> *annotationDelegate; // ivar: _annotationDelegate
@property (nonatomic) BOOL automaticallyReversesNonDestructiveDataSourceEdits; // ivar: _automaticallyReversesNonDestructiveDataSourceEdits
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPSectionedIdentifierListDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger itemCount;
@property (readonly, nonatomic, getter=_sectionDataSources) NSDictionary *sectionDataSources;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(void)_performWithoutRequiringExclusivity:(id)arg0 ;
-(BOOL)hasItem:(id)arg0 inSection:(id)arg1 ;
-(BOOL)hasSection:(id)arg0 ;
-(BOOL)isDeletedItem:(id)arg0 inSection:(id)arg1 ;
-(BOOL)performWithExclusiveAccessAndReturnBOOL:(id)arg0 ;
-(NSInteger)_itemCountWithExclusiveAccessToken:(id)arg0 ;
-(NSInteger)performWithExclusiveAccessAndReturnInteger:(id)arg0 ;
-(id)_dataSourceInsertItems:(id)arg0 fromSection:(id)arg1 afterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(id)_dataSourceMoveItem:(id)arg0 inSection:(id)arg1 afterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(id)_debugDescriptionWithEnumerator:(id)arg0 lengths:(struct ? *)arg1 ;
-(id)_encodeEntry:(id)arg0 withExclusiveAccessToken:(id)arg1 ;
-(id)_endEntryWithExclusiveAccessToken:(id)arg0 ;
-(id)_entryForPosition:(id)arg0 withExclusiveAccessToken:(id)arg1 ;
-(id)_itemEntry:(id)arg0 sectionIdentifier:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(id)_sectionHeadEntryMapWithExclusiveAccessToken:(id)arg0 ;
-(id)_startEntriesWithExclusiveAccessToken:(id)arg0 ;
-(id)_tailEntryForSectionIdentifier:(id)arg0 withExclusiveAccessToken:(id)arg1 ;
-(id)encodableNextEntriesWithExclusiveAccessToken:(id)arg0 ;
-(id)enumeratorWithOptions:(NSUInteger)arg0 ;
-(id)enumeratorWithOptions:(NSUInteger)arg0 startPosition:(id)arg1 endPosition:(id)arg2 ;
-(id)enumeratorWithOptions:(NSUInteger)arg0 startPosition:(id)arg1 endPosition:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)performWithExclusiveAccessAndReturnObject:(id)arg0 ;
-(void)_addBranchToEntry:(id)arg0 entries:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)_beforeInitWithCoder:(id)arg0 ;
-(void)_enumerator:(id)arg0 didEncounterEntry:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)_insertDataSource:(id)arg0 forSection:(id)arg1 afterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(void)_insertDataSourceHead:(id)arg0 afterEntry:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)_loadDataSource:(id)arg0 forSection:(id)arg1 completion:(id)arg2 ;
-(void)_performDelegateCalloutForSection:(id)arg0 block:(id)arg1 ;
-(void)_reverseEnumeratorWillStartAtEnd:(id)arg0 withExclusiveAccessToken:(id)arg1 ;
-(void)_stitchLastItemEntryToHeadEntry:(id)arg0 branchList:(id)arg1 ;
-(void)_stitchPreviousEntry:(id)arg0 toEntry:(id)arg1 cloneIndex:(id)arg2 ;
-(void)_stitchWithPreviousEntry:(id)arg0 list:(id)arg1 cloneIndex:(id)arg2 ;
-(void)addDataSource:(id)arg0 section:(id)arg1 afterHeadOfSection:(id)arg2 completion:(id)arg3 ;
-(void)addDataSource:(id)arg0 section:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3 completion:(id)arg4 ;
-(void)addDataSource:(id)arg0 section:(id)arg1 afterTailOfSection:(id)arg2 completion:(id)arg3 ;
-(void)addDataSourceAtEnd:(id)arg0 section:(id)arg1 completion:(id)arg2 ;
-(void)addDataSourceAtStart:(id)arg0 section:(id)arg1 completion:(id)arg2 ;
-(void)dataSourceBeginTransationForSection:(id)arg0 ;
-(void)dataSourceEndTransactinForSection:(id)arg0 ;
-(void)dataSourceInsertItems:(id)arg0 afterItem:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceInsertItemsAtHead:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceInsertItemsAtTail:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceMoveItem:(id)arg0 afterItem:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceMoveItemToHead:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceMoveItemToTail:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceReloadItem:(id)arg0 inSection:(id)arg1 ;
-(void)dataSourceRemoveItem:(id)arg0 fromSection:(id)arg1 ;
-(void)dataSourceUpdateSection:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 withExclusiveAccessToken:(id)arg1 ;
-(void)moveItem:(id)arg0 fromSection:(id)arg1 afterHeadOfSection:(id)arg2 ;
-(void)moveItem:(id)arg0 fromSection:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3 ;
-(void)moveItem:(id)arg0 fromSection:(id)arg1 afterTailOfSection:(id)arg2 ;
-(void)moveItemToEnd:(id)arg0 fromSection:(id)arg1 ;
-(void)moveItemToStart:(id)arg0 fromSection:(id)arg1 ;
-(void)performWithExclusiveAccess:(id)arg0 ;
-(void)removeItem:(id)arg0 fromSection:(id)arg1 ;
-(void)replaceDataSource:(id)arg0 forSection:(id)arg1 completion:(id)arg2 ;


@end


#endif