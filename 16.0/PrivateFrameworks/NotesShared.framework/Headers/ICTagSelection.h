// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTAGSELECTION_H
#define ICTAGSELECTION_H

@class NSString, NSArray, NSSet, NSManagedObjectContext;
@protocol NSCopying;


#import "ICFilterTypeSelection.h"

@interface ICTagSelection : ICFilterTypeSelection <NSCopying>



@property (readonly, copy, nonatomic) NSString *actionTitle;
@property (nonatomic) BOOL allowsRecentlyDeleted; // ivar: _allowsRecentlyDeleted
@property (nonatomic) BOOL automaticallyRemoveDeletedTags; // ivar: _automaticallyRemoveDeletedTags
@property (readonly, nonatomic) NSArray *displayTexts;
@property (readonly, nonatomic) NSArray *excludedDisplayTexts;
@property (readonly, nonatomic) NSArray *excludedHashtagPrefixedDisplayTexts;
@property (retain, nonatomic) NSSet *excludedObjectIDs; // ivar: _excludedObjectIDs
@property (readonly, nonatomic) NSArray *excludedTagIdentifiers;
@property (readonly, nonatomic) NSArray *excludedTags;
@property (readonly, nonatomic) BOOL hasMultipleTagsSelected; // ivar: _hasMultipleTagsSelected
@property (readonly, nonatomic) NSArray *hashtagPrefixedDisplayTexts;
@property (readonly, nonatomic) NSArray *includedDisplayTexts;
@property (readonly, nonatomic) NSArray *includedHashtagPrefixedDisplayTexts;
@property (retain, nonatomic) NSSet *includedObjectIDs; // ivar: _includedObjectIDs
@property (readonly, nonatomic) NSArray *includedTagIdentifiers;
@property (readonly, nonatomic) NSArray *includedTags;
@property (readonly, nonatomic) BOOL isNonEmpty;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSSet *objectIDs;
@property (readonly, nonatomic) NSUInteger selectedTagCount;
@property (readonly, nonatomic) NSString *selectedTagCountString;
@property (readonly, copy, nonatomic) NSString *smartFolderTitle;
@property (readonly, nonatomic) NSArray *tagIdentifiers;
@property (nonatomic) NSUInteger tagOperator; // ivar: _tagOperator
@property (retain, nonatomic) NSArray *tags; // ivar: _tags
@property (readonly, copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSSet *unresolvedExcludedTagIdentifiers; // ivar: _unresolvedExcludedTagIdentifiers
@property (retain, nonatomic) NSSet *unresolvedIncludedTagIdentifiers; // ivar: _unresolvedIncludedTagIdentifiers
@property (readonly, nonatomic) NSSet *unresolvedTagIdentifiers;


+(id)keyPathsForValuesAffectingIsEmpty;
+(id)keyPathsForValuesAffectingIsNonEmpty;
+(id)keyPathsForValuesAffectingIsValid;
+(id)keyPathsForValuesAffectingObjectIDs;
+(id)keyPathsForValuesAffectingSelectedTagCount;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTagSelection:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)filterType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)displayTextsForObjectIDs:(id)arg0 ;
-(id)emptySummary;
-(id)emptySummaryTitle;
-(id)filterName;
-(id)hashtagPrefixedDisplayTexts:(id)arg0 ;
-(id)hashtagsForObjectIDs:(id)arg0 ;
-(id)initWithManagedObjectContext:(id)arg0 ;
-(id)initWithManagedObjectContext:(id)arg0 includedObjectIDs:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg0 includedObjectIDs:(id)arg1 excludedObjectIDs:(id)arg2 ;
-(id)initWithManagedObjectContext:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)initWithManagedObjectContext:(id)arg0 mode:(NSUInteger)arg1 tagOperator:(NSUInteger)arg2 ;
-(id)rawFilterValue;
-(id)shortEmptySummary;
-(id)standardizedContentsForObjectIDs:(id)arg0 ;
-(void)addObjectID:(id)arg0 toExcluded:(BOOL)arg1 ;
-(void)addUnresolvedTagIdentifier:(id)arg0 toExcluded:(BOOL)arg1 ;
-(void)clear;
-(void)commonInitWithManagedObjectContext:(id)arg0 ;
-(void)convertUnresolvedDisplayTextsInAccount:(id)arg0 ;
-(void)dealloc;
-(void)managedObjectContextObjectIDsDidSave:(id)arg0 ;
-(void)removeObjectID:(id)arg0 fromExcluded:(BOOL)arg1 ;
-(void)removeObjectIDs:(id)arg0 ;
-(void)removeUnresolvedTagIdentifier:(id)arg0 fromExcluded:(BOOL)arg1 ;
-(void)removeUnresolvedTagIdentifiers:(id)arg0 ;


@end


#endif