// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDRAFTMODELSNAPSHOTDIFF_H
#define FBKDRAFTMODELSNAPSHOTDIFF_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "FBKDraftModelSnapshot.h"

@interface FBKDraftModelSnapshotDiff : NSObject

@property (nonatomic, readonly) NSArray *addedRows;
@property (nonatomic, readonly) NSArray *addedSections;
@property (nonatomic, readonly) BOOL containsAnyAdditionsOrRemovals;
@property (retain, nonatomic) FBKDraftModelSnapshot *currentSnapshot; // ivar: _currentSnapshot
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *descriptionString;
@property (nonatomic, readonly) BOOL hasRemovedAllDevices;
@property (retain, nonatomic) FBKDraftModelSnapshot *previousSnapshot; // ivar: _previousSnapshot
@property (nonatomic, readonly) NSArray *removedRows;
@property (nonatomic, readonly) NSArray *removedSections;


-(NSUInteger)indexOfRowInNewSnapshot:(id)arg0 ;
-(NSUInteger)indexOfSectionInNewSnapshot:(id)arg0 ;
-(id)initWithPreviousSnapshot:(id)arg0 newSnapshot:(id)arg1 ;


@end


#endif