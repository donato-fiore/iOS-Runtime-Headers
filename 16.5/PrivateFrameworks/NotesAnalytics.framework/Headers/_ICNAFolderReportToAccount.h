// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICNAFOLDERREPORTTOACCOUNT_H
#define _ICNAFOLDERREPORTTOACCOUNT_H


#import <Foundation/Foundation.h>


@interface _ICNAFolderReportToAccount : NSObject {
    int _folderCollaborationMatrix;
}


@property (nonatomic) NSUInteger countOfCustomSmartFolders; // ivar: _countOfCustomSmartFolders
@property (nonatomic) NSUInteger countOfFolders; // ivar: _countOfFolders
@property (nonatomic) NSUInteger countOfSmartFoldersWithAttachmentsFilter; // ivar: _countOfSmartFoldersWithAttachmentsFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithChecklistsFilter; // ivar: _countOfSmartFoldersWithChecklistsFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithDateCreatedFilter; // ivar: _countOfSmartFoldersWithDateCreatedFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithDateModifiedFilter; // ivar: _countOfSmartFoldersWithDateModifiedFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithFoldersFilter; // ivar: _countOfSmartFoldersWithFoldersFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithLockedNotesFilter; // ivar: _countOfSmartFoldersWithLockedNotesFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithMentionsFilter; // ivar: _countOfSmartFoldersWithMentionsFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithPinnedNotesFilter; // ivar: _countOfSmartFoldersWithPinnedNotesFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithQuickNotesFilter; // ivar: _countOfSmartFoldersWithQuickNotesFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithSharedFilter; // ivar: _countOfSmartFoldersWithSharedFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithTagsFilter; // ivar: _countOfSmartFoldersWithTagsFilter
@property (nonatomic) NSUInteger countOfSmartFoldersWithUnknownFilter; // ivar: _countOfSmartFoldersWithUnknownFilter


-(NSUInteger)countOfFoldersWithCollaborationStatus:(NSInteger)arg0 collaborationType:(NSInteger)arg1 ;
-(id)init;
-(void)updateFolderCollaborationMatrixWithCollaborationStatus:(id)arg0 collaborationType:(id)arg1 ;


@end


#endif