// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICACCOUNTPROXY_H
#define ICACCOUNTPROXY_H

@class NSString, ICFolderCustomNoteSortType, NSManagedObjectContext, NSData, NSArray;
@protocol ICNoteContainer;

#import <Foundation/Foundation.h>

#import "ICAccount.h"

@interface ICAccountProxy : NSObject <ICNoteContainer>



@property (retain) ICAccount *account; // ivar: _account
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (retain, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) NSArray *visibleSubFolders;


+(id)accountProxyWithAccount:(id)arg0 ;
+(id)keyPathsForValuesAffectingVisibleNotesCount;
-(BOOL)isDeleted;
-(BOOL)isLeaf;
-(BOOL)isModernCustomFolder;
-(BOOL)mergeWithSubFolderMergeableData:(id)arg0 ;
-(BOOL)noteIsVisible:(id)arg0 ;
-(BOOL)supportsVisibilityTestingType:(NSInteger)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)predicateForPinnedNotes;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
-(id)predicateForVisibleNotes;
-(id)titleForNavigationBar;
-(id)titleForTableViewCell;
-(id)visibleNoteContainerChildren;
-(void)saveSubFolderMergeableDataIfNeeded;
-(void)updateSubFolderMergeableDataChangeCount;


@end


#endif