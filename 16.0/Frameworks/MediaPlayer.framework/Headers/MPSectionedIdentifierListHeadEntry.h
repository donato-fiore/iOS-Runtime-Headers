// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSECTIONEDIDENTIFIERLISTHEADENTRY_H
#define MPSECTIONEDIDENTIFIERLISTHEADENTRY_H

@class NSString, NSMutableDictionary;
@protocol MPSectionedIdentifierListEnumerationTrackingEntry, MPSectionedIdentifierListDataSource;


#import "MPSectionedIdentifierListEntry.h"
#import "MPSectionedIdentifierListItemEntry.h"
#import "MPSectionedIdentifierListTailEntry.h"

@interface MPSectionedIdentifierListHeadEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry>



@property (readonly, nonatomic) NSInteger branchDepth;
@property (retain, nonatomic) NSObject<MPSectionedIdentifierListDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger entryType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *identifiersItemEntryMap; // ivar: _identifiersItemEntryMap
@property (retain, nonatomic) MPSectionedIdentifierListItemEntry *lastItemEntry; // ivar: _lastItemEntry
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (nonatomic, getter=isShuffledHead) BOOL shuffledHead; // ivar: _shuffledHead
@property (readonly) Class superclass;
@property (retain, nonatomic) MPSectionedIdentifierListTailEntry *tailEntry; // ivar: _tailEntry


+(id)headEntryWithSectionIdentifier:(id)arg0 ;
-(id)initWithPositionKey:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)nextEntries;


@end


#endif