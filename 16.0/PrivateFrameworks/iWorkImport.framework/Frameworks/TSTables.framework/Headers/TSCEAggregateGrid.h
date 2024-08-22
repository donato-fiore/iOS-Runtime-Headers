// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEAGGREGATEGRID_H
#define TSCEAGGREGATEGRID_H

@protocol NSCopying;


#import "TSCEAbstractGrid.h"

@interface TSCEAggregateGrid : TSCEAbstractGrid <NSCopying>

 {
    vector<TSCEGrid, std::allocator<TSCEGrid>> _grids;
    *NSUInteger _argumentCounts;
    NSUInteger _count;
    NSInteger _lastReturnedIndex;
    NSInteger _lastReturnedArgIndex;
    NSInteger _lastReturnedSubindex;
}




-(?)flattenedGrid;
-(?)flattenedGridNoThrow;
-(?)valueAtIndexaccessContext;
-(NSUInteger)count;
-(char)deepType:(struct TSCEEvaluationContext *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGrids:(*void)arg0 ;
-(id)string:(id)arg0 argIndex:(int)arg1 locale:(id)arg2 ;
-(struct TSCEGridDimensions )dimensions;
-(struct TSCEValue )value;
-(struct TSCEValue )valueAtGridCoord:(struct TSCEGridCoord *)arg0 accessContext:(struct TSCEGridAccessContext *)arg1 ;
-(void)dealloc;


@end


#endif