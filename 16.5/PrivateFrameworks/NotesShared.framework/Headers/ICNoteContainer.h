// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTECONTAINER_H
#define ICNOTECONTAINER_H

@class NSString, ICFolderCustomNoteSortType, NSManagedObjectContext, NSData, NSArray;
@protocol ICNoteContainer;


#import "ICCloudSyncingObject.h"
#import "ICAccount.h"
#import "CROrderedSet.h"
#import "TTOrderedSetVersionedDocument.h"

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>



@property (readonly, copy, nonatomic) NSString *accountName;
@property (retain, nonatomic) NSString *accountNameForAccountListSorting;
@property (readonly, copy, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (nonatomic) int dateHeadersType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (nonatomic) BOOL isHiddenNoteContainer;
@property (readonly, nonatomic) BOOL isModernCustomFolder;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isShowingDateHeaders;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSString *nestedTitleForSorting;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (retain, nonatomic) ICAccount *owner;
@property (nonatomic) int sortOrder;
@property (readonly, nonatomic) CROrderedSet *subFolderIdentifiersOrderedSet;
@property (retain, nonatomic) TTOrderedSetVersionedDocument *subFolderIdentifiersOrderedSetDocument; // ivar: _subFolderIdentifiersOrderedSetDocument
@property (copy, nonatomic) NSData *subFolderOrderMergeableData;
@property (nonatomic, getter=isSubFolderOrderMergeableDataDirty) BOOL subFolderOrderMergeableDataDirty; // ivar: _subFolderOrderMergeableDataDirty
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDateHeaders;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (readonly, copy, nonatomic) NSString *titleForNavigationBar;
@property (readonly, copy, nonatomic) NSString *titleForTableViewCell;
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) NSUInteger visibleNotesCount;
@property (readonly, nonatomic) NSArray *visibleSubFolders;


+(id)keyPathsForValuesAffectingCloudAccount;
-(BOOL)mergeWithSubFolderMergeableData:(id)arg0 ;
-(BOOL)noteIsVisible:(id)arg0 ;
-(BOOL)supportsVisibilityTestingType:(NSInteger)arg0 ;
-(id)cloudAccount;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)predicateForPinnedNotes;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
-(id)predicateForVisibleNotes;
-(void)applyDateHeadersType:(int)arg0 ;
-(void)saveSubFolderMergeableDataIfNeeded;
-(void)updateSubFolderMergeableDataChangeCount;
-(void)willRefresh:(BOOL)arg0 ;
-(void)willSave;
-(void)willTurnIntoFault;
-(void)writeSubFolderMergeableData;


@end


#endif