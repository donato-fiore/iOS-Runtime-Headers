// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCOLLABNOTESITEMDATA_H
#define ICASCOLLABNOTESITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASCollabNotesItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *totalNotesCollabRootOwnedCount; // ivar: _totalNotesCollabRootOwnedCount
@property (readonly, nonatomic) NSNumber *totalNotesCollabRootReadOnlyCount; // ivar: _totalNotesCollabRootReadOnlyCount
@property (readonly, nonatomic) NSNumber *totalNotesCollabRootReadWriteJoinedCount; // ivar: _totalNotesCollabRootReadWriteJoinedCount
@property (readonly, nonatomic) NSNumber *totalNotesCollabThruFolderOwnedCount; // ivar: _totalNotesCollabThruFolderOwnedCount
@property (readonly, nonatomic) NSNumber *totalNotesCollabThruFolderReadOnlyCount; // ivar: _totalNotesCollabThruFolderReadOnlyCount
@property (readonly, nonatomic) NSNumber *totalNotesCollabThruFolderReadWriteJoinedCount; // ivar: _totalNotesCollabThruFolderReadWriteJoinedCount
@property (readonly, nonatomic) NSNumber *totalNotesNotCollabCount; // ivar: _totalNotesNotCollabCount


+(id)dataName;
-(id)initWithTotalNotesCollabRootReadOnlyCount:(id)arg0 totalNotesCollabThruFolderReadOnlyCount:(id)arg1 totalNotesCollabRootReadWriteJoinedCount:(id)arg2 totalNotesCollabThruFolderReadWriteJoinedCount:(id)arg3 totalNotesNotCollabCount:(id)arg4 totalNotesCollabRootOwnedCount:(id)arg5 totalNotesCollabThruFolderOwnedCount:(id)arg6 ;
-(id)toDict;


@end


#endif