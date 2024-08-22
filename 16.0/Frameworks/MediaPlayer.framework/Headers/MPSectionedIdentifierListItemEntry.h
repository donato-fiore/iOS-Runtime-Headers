// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSECTIONEDIDENTIFIERLISTITEMENTRY_H
#define MPSECTIONEDIDENTIFIERLISTITEMENTRY_H

@class NSMutableArray, NSString;
@protocol MPSectionedIdentifierListEnumerationItem;


#import "MPSectionedIdentifierListEntry.h"
#import "MPSectionedIdentifierListItemEntry.h"

@interface MPSectionedIdentifierListItemEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationItem>



@property (readonly, nonatomic) NSInteger branchDepth;
@property (retain, nonatomic) NSMutableArray *clonedEntries; // ivar: _clonedEntries
@property (readonly, nonatomic, getter=isDataSourceCloned) BOOL dataSourceCloned; // ivar: _dataSourceCloned
@property (readonly, nonatomic, getter=isDataSourceMoved) BOOL dataSourceMoved; // ivar: _dataSourceMoved
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger entryType;
@property (readonly, nonatomic) BOOL hasClones; // ivar: _hasClones
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestDataSourceClone;
@property (readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestUserClone;
@property (readonly, nonatomic, getter=isRemoved) BOOL removed;
@property (weak, nonatomic) MPSectionedIdentifierListItemEntry *rootEntry; // ivar: _rootEntry
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) ? state;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUserCloned) BOOL userCloned; // ivar: _userCloned
@property (readonly, nonatomic, getter=isUserMoved) BOOL userMoved; // ivar: _userMoved
@property (readonly, nonatomic, getter=isUserRemoved) BOOL userRemoved; // ivar: _userRemoved


+(BOOL)supportsSecureCoding;
+(id)itemEntryWithSectionIdentifier:(id)arg0 itemIdentifier:(id)arg1 ;
+(id)itemEntryWithSectionIdentifier:(id)arg0 itemIdentifier:(id)arg1 generationPrefix:(id)arg2 ;
-(BOOL)isDataSourceRemoved;
-(NSInteger)_generationNumber;
-(id)initWithCoder:(id)arg0 ;
-(id)newClonedEntry;
-(id)stringRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareForDealloc;
-(void)setDataSourceRemoved;


@end


#endif