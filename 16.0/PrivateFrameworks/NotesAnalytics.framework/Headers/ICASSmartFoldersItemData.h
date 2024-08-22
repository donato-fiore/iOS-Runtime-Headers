// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSMARTFOLDERSITEMDATA_H
#define ICASSMARTFOLDERSITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSmartFoldersItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithAttachmentsFilter; // ivar: _totalCountOfSmartFoldersWithAttachmentsFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithChecklistsFilter; // ivar: _totalCountOfSmartFoldersWithChecklistsFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithDateCreatedFilter; // ivar: _totalCountOfSmartFoldersWithDateCreatedFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithDateModifiedFilter; // ivar: _totalCountOfSmartFoldersWithDateModifiedFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithFoldersFilter; // ivar: _totalCountOfSmartFoldersWithFoldersFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithLockedNotesFilter; // ivar: _totalCountOfSmartFoldersWithLockedNotesFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithMentionsFilter; // ivar: _totalCountOfSmartFoldersWithMentionsFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithPinnedNotesFilter; // ivar: _totalCountOfSmartFoldersWithPinnedNotesFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithQuickNotesFilter; // ivar: _totalCountOfSmartFoldersWithQuickNotesFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithSharedFilter; // ivar: _totalCountOfSmartFoldersWithSharedFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithTagsFilter; // ivar: _totalCountOfSmartFoldersWithTagsFilter
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithUnknownFilter; // ivar: _totalCountOfSmartFoldersWithUnknownFilter


+(id)dataName;
-(id)initWithTotalCountOfSmartFoldersWithTagsFilter:(id)arg0 totalCountOfSmartFoldersWithDateCreatedFilter:(id)arg1 totalCountOfSmartFoldersWithDateModifiedFilter:(id)arg2 totalCountOfSmartFoldersWithSharedFilter:(id)arg3 totalCountOfSmartFoldersWithMentionsFilter:(id)arg4 totalCountOfSmartFoldersWithChecklistsFilter:(id)arg5 totalCountOfSmartFoldersWithAttachmentsFilter:(id)arg6 totalCountOfSmartFoldersWithFoldersFilter:(id)arg7 totalCountOfSmartFoldersWithQuickNotesFilter:(id)arg8 totalCountOfSmartFoldersWithPinnedNotesFilter:(id)arg9 totalCountOfSmartFoldersWithLockedNotesFilter:(id)arg10 totalCountOfSmartFoldersWithUnknownFilter:(id)arg11 ;
-(id)toDict;


@end


#endif