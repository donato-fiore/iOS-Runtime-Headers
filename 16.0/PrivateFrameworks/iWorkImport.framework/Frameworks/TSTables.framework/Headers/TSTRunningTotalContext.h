// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTRUNNINGTOTALCONTEXT_H
#define TSTRUNNINGTOTALCONTEXT_H


#import <Foundation/Foundation.h>

#import "TSTGroupBySet.h"

@interface TSTRunningTotalContext : NSObject {
    unordered_map<unsigned short, TSTRunningAggregate, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSTRunningAggregate>>> _runAggrForAggIndex;
    unordered_map<unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, std::unordered_map<TSKUIDStruct, TSTUidCoordsPerRunningCellValue *>>>> _valuesForRunningAggregatePerRunDirectionUid;
}


@property (readonly, nonatomic) TSTGroupBySet *groupBySet; // ivar: _groupBySet


-(BOOL)isMissingRunningTotalFieldForAggIndex:(unsigned short)arg0 ;
-(id)initWithGroupBySet:(id)arg0 ;
-(struct TSKUIDStructCoord )getPreviousUidCoordForAggIndex:(unsigned short)arg0 fromNewUidCoord:(struct TSKUIDStructCoord *)arg1 addNewUidCoordEvenIfNotFound:(BOOL)arg2 ;


@end


#endif