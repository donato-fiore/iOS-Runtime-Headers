// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTEXPANDCOLLAPSESTATE_H
#define TSTEXPANDCOLLAPSESTATE_H

@class TSKSosBase;
@protocol NSCopying;


#import "TSCEUIDSet.h"

@interface TSTExpandCollapseState : TSKSosBase <NSCopying>

 {
    vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> _collapsedGroupUIDs;
    vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> _expandedGroupUIDs;
}


@property (readonly, nonatomic) NSInteger dimension; // ivar: _dimension
@property (readonly, nonatomic) TSCEUIDSet *uidsCollapsed; // ivar: _uidsCollapsed
@property (readonly, nonatomic) TSCEUIDSet *uidsExpanded; // ivar: _uidsExpanded


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithCollapsed:(id)arg0 expanded:(id)arg1 dimension:(NSInteger)arg2 ;
-(id)makeInverse;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif