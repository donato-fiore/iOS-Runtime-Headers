// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEGROUPBYCHANGE_H
#define TSCEGROUPBYCHANGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCEUIDSet.h"

@interface TSCEGroupByChange : NSObject <NSCopying>



@property (nonatomic) unsigned char changeType; // ivar: _changeType
@property (readonly, nonatomic) TSKUIDStruct groupByUid; // ivar: _groupByUid
@property (readonly, nonatomic) *void groupingColumnChanges; // ivar: _groupingColumnChanges
@property (nonatomic) BOOL isInverse; // ivar: _isInverse
@property (readonly, nonatomic) *void previousGroupNodeToUpdated; // ivar: _previousGroupNodeToUpdated
@property (readonly, nonatomic) TSCEUIDSet *previousGroupNodeUids; // ivar: _previousGroupNodeUids
@property (nonatomic) unsigned char previousLevel; // ivar: _previousLevel
@property (readonly, nonatomic) TSCEUIDSet *removedGroupNodeUids; // ivar: _removedGroupNodeUids
@property (readonly, nonatomic) *void updatedGroupNodeToPrevious; // ivar: _updatedGroupNodeToPrevious
@property (readonly, nonatomic) TSCEUIDSet *updatedGroupNodeUids; // ivar: _updatedGroupNodeUids
@property (nonatomic) unsigned char updatedLevel; // ivar: _updatedLevel


+(id)stringForGroupByChangeType:(unsigned char)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithType:(unsigned char)arg0 groupByUid:(struct TSKUIDStruct *)arg1 ;
-(id)initWithType:(unsigned char)arg0 groupingColumnChanges:(*void)arg1 groupByUid:(struct TSKUIDStruct *)arg2 ;
-(struct TSKUIDStruct )previousGroupNodeUidForUpdatedGroupNodeUid:(struct TSKUIDStruct *)arg0 ;
-(struct TSKUIDStruct )updatedGroupNodeUidForPreviousGroupNodeUid:(struct TSKUIDStruct *)arg0 ;
-(unsigned char)previousRelativeAncestorLevelForUpdatedAncestorCategoryLevel:(unsigned char)arg0 numLevels:(unsigned char)arg1 ;
-(unsigned char)updatedRelativeAncestorLevelForPreviousAncestorCategoryLevel:(unsigned char)arg0 numLevels:(unsigned char)arg1 ;
-(void)addRemoveOfGroupUid:(struct TSKUIDStruct *)arg0 ;
-(void)mapPreviousGroupNodeUid:(struct TSKUIDStruct *)arg0 toUpdatedGroupNodeUid:(struct TSKUIDStruct *)arg1 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif