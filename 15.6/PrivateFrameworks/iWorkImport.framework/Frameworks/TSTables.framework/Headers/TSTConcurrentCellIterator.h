// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCONCURRENTCELLITERATOR_H
#define TSTCONCURRENTCELLITERATOR_H

@class NSPointerArray;

#import <Foundation/Foundation.h>

#import "TSTCellRegion.h"
#import "TSTTableInfo.h"
#import "TSTTableModel.h"

@interface TSTConcurrentCellIterator : NSObject

@property (retain, nonatomic) NSPointerArray *arrayOfChunkRocks; // ivar: _arrayOfChunkRocks
@property (nonatomic) NSUInteger cellsPerSubRegion; // ivar: _cellsPerSubRegion
@property (nonatomic) TSUCellRect clampingRect; // ivar: _clampingRect
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (retain, nonatomic) TSTCellRegion *forcingRegion; // ivar: _forcingRegion
@property (retain, nonatomic) TSTCellRegion *region; // ivar: _region
@property (nonatomic) NSUInteger searchFlags; // ivar: _searchFlags
@property (retain, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (retain, nonatomic) TSTTableModel *tableModel; // ivar: _tableModel


-(id)initWithTableInfo:(id)arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 ;
-(id)initWithTableInfo:(id)arg0 region:(id)arg1 clampingViewRect:(struct TSUViewCellRect )arg2 flags:(NSUInteger)arg3 searchFlags:(NSUInteger)arg4 ;
-(id)initWithTableInfo:(id)arg0 region:(id)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3 ;
-(id)initWithTableInfo:(id)arg0 region:(id)arg1 forcingRegion:(id)arg2 flags:(NSUInteger)arg3 searchFlags:(NSUInteger)arg4 ;
-(id)initWithTableInfo:(id)arg0 tableModel:(id)arg1 region:(id)arg2 forcingRegion:(id)arg3 clampingRect:(struct TSUCellRect )arg4 flags:(NSUInteger)arg5 searchFlags:(NSUInteger)arg6 ;
-(id)initWithTableModel:(id)arg0 baseRegion:(id)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3 ;
// -(void)enumerateConcurrentlyUsingChunkBeginBlock:(id)arg0 concurrentBlock:(unk)arg1 finalBlock:(id)arg2  ;
// -(void)enumerateConcurrentlyUsingChunkBeginBlock:(id)arg0 perDispatchThreadBlock:(unk)arg1 concurrentBlock:(id)arg2 finalBlock:(unk)arg3  ;
// -(void)enumerateModelConcurrentlyUsingChunkBeginBlock:(id)arg0 concurrentBlock:(unk)arg1 finalBlock:(id)arg2  ;
// -(void)p_enumerateConcurrentlyUsingChunkBeginBlock:(id)arg0 perDispatchThreadBlock:(unk)arg1 concurrentBlock:(id)arg2 finalBlock:(unk)arg3  ;


@end


#endif