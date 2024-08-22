// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMSEARCHABLEINDEXTOPHITSQUERYRESULT_H
#define EMSEARCHABLEINDEXTOPHITSQUERYRESULT_H

@class NSArray, NSDictionary, CSTopHitQuery;

#import <Foundation/Foundation.h>


@interface EMSearchableIndexTopHitsQueryResult : NSObject

@property (copy, nonatomic) NSArray *foundItems; // ivar: _foundItems
@property (copy, nonatomic) NSDictionary *foundMatchingHintsByPersistentID; // ivar: _foundMatchingHintsByPersistentID
@property (readonly, nonatomic) NSDictionary *matchingHintsByPersistentID; // ivar: _matchingHintsByPersistentID
@property (retain, nonatomic) NSArray *searchableItemIdentifiers; // ivar: _searchableItemIdentifiers
@property (retain, nonatomic) CSTopHitQuery *topHitSearchQuery; // ivar: _topHitSearchQuery


+(id)log;
-(NSInteger)rankingIndexForConversationID:(id)arg0 ;
-(NSInteger)rankingIndexForMessageLibraryID:(id)arg0 ;
-(id)initWithTopHitSearchQuery:(id)arg0 foundItems:(id)arg1 foundMatchingHintsByPersistentID:(id)arg2 ;
-(void)userDidInteractWithConversationID:(id)arg0 ;
-(void)userDidInteractWithLibraryIdentifier:(id)arg0 ;


@end


#endif