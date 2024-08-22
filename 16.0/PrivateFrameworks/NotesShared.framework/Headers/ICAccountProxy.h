// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICACCOUNTPROXY_H
#define ICACCOUNTPROXY_H

@class NSString, ICFolderCustomNoteSortType, NSManagedObjectContext, NSData, NSArray;
@protocol ICNoteContainer;

#import <Foundation/Foundation.h>

#import "ICAccount.h"

@interface ICAccountProxy : NSObject <ICNoteContainer>



@property (retain) ICAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, nonatomic) int dateHeadersType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly, nonatomic) BOOL isModernCustomFolder;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isShowingDateHeaders;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (copy, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDateHeaders;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (readonly, copy, nonatomic) NSString *titleForNavigationBar;
@property (readonly, copy, nonatomic) NSString *titleForTableViewCell;
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) NSUInteger visibleNotesCount;
@property (readonly, nonatomic) NSArray *visibleSubFolders;


+(id)accountProxyWithAccount:(id)arg0 ;
+(id)keyPathsForValuesAffectingVisibleNotesCount;
-(BOOL)isLeaf;
-(BOOL)mergeWithSubFolderMergeableData:(id)arg0 ;
-(BOOL)noteIsVisible:(id)arg0 ;
-(BOOL)supportsVisibilityTestingType:(NSInteger)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)objectID;
-(id)predicateForPinnedNotes;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
-(id)predicateForVisibleNotes;
-(id)visibleNoteContainerChildren;
-(void)applyDateHeadersType:(int)arg0 ;
-(void)saveSubFolderMergeableDataIfNeeded;
-(void)updateSubFolderMergeableDataChangeCount;


@end


#endif