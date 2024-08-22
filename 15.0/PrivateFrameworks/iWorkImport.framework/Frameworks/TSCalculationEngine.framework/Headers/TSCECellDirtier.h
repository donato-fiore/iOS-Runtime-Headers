// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCECELLDIRTIER_H
#define TSCECELLDIRTIER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TSCECellDirtier : NSObject {
    os_unfair_lock_s _dirtyingLock;
    unordered_map<TSCEInternalCellReference, TSCECountedInternalCellRefSet, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, std::allocator<std::pair<const TSCEInternalCellReference, TSCECountedInternalCellRefSet>>> _dependentsToDirtyByFromRef;
}


@property (readonly, nonatomic) *void dependTracker; // ivar: _dependTracker
@property (nonatomic) BOOL dirtyingInProgress; // ivar: _dirtyingInProgress
@property (readonly, nonatomic) BOOL isDoneDirtying;
@property (readonly, nonatomic) TSCEInternalCellReference startCellRef; // ivar: _startCellRef
@property (readonly, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


-(*void)dependentsToDirtyByFromRef;
-(BOOL)_dirtyCellsWithNoLockForSeconds:(CGFloat)arg0 fromStartTime:(id)arg1 ;
-(BOOL)dirtyCellsForSeconds:(CGFloat)arg0 fromStartTime:(id)arg1 ;
-(BOOL)dirtyNewCellRef:(struct TSCEInternalCellReference *)arg0 forSeconds:(CGFloat)arg1 fromStartTime:(id)arg2 ;
-(id)initWithDependencyTracker:(*void)arg0 ;
-(void)dirtyCellsNow;
-(void)startDirtyingCellRef;
-(void)stopDirtyingCellRef;


@end


#endif