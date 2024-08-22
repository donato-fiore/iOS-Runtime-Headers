// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCOLLABFOLDERSITEMDATA_H
#define ICASCOLLABFOLDERSITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASCollabFoldersItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *totalFoldersCollabRootOwnedCount; // ivar: _totalFoldersCollabRootOwnedCount
@property (readonly, nonatomic) NSNumber *totalFoldersCollabRootReadOnlyCount; // ivar: _totalFoldersCollabRootReadOnlyCount
@property (readonly, nonatomic) NSNumber *totalFoldersCollabRootReadWriteJoinedCount; // ivar: _totalFoldersCollabRootReadWriteJoinedCount
@property (readonly, nonatomic) NSNumber *totalFoldersCollabSubfolderOwnedCount; // ivar: _totalFoldersCollabSubfolderOwnedCount
@property (readonly, nonatomic) NSNumber *totalFoldersCollabSubfolderReadOnlyCount; // ivar: _totalFoldersCollabSubfolderReadOnlyCount
@property (readonly, nonatomic) NSNumber *totalFoldersCollabSubfolderReadWriteJoinedCount; // ivar: _totalFoldersCollabSubfolderReadWriteJoinedCount
@property (readonly, nonatomic) NSNumber *totalFoldersNotCollabCount; // ivar: _totalFoldersNotCollabCount


+(id)dataName;
-(id)initWithTotalFoldersCollabRootReadOnlyCount:(id)arg0 totalFoldersCollabSubfolderReadOnlyCount:(id)arg1 totalFoldersCollabRootReadWriteJoinedCount:(id)arg2 totalFoldersCollabSubfolderReadWriteJoinedCount:(id)arg3 totalFoldersNotCollabCount:(id)arg4 totalFoldersCollabRootOwnedCount:(id)arg5 totalFoldersCollabSubfolderOwnedCount:(id)arg6 ;
-(id)toDict;


@end


#endif