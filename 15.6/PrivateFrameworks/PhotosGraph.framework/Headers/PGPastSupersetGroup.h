// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPASTSUPERSETGROUP_H
#define PGPASTSUPERSETGROUP_H

@class NSDateInterval, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PGGraphLocationNodeCollection.h"
#import "PGGraphLocationStateNode.h"
#import "PGGraphLocationCityNodeCollection.h"

@interface PGPastSupersetGroup : NSObject

@property (retain) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (retain) PGGraphLocationNodeCollection *densestCloseLocationNodes; // ivar: _densestCloseLocationNodes
@property (retain) NSMutableArray *momentNodes; // ivar: _momentNodes
@property (retain) PGGraphLocationStateNode *stateNode; // ivar: _stateNode
@property (retain) PGGraphLocationCityNodeCollection *supersetCityNodes; // ivar: _supersetCityNodes


+(id)pastSupersetGroupWithMomentNodes:(id)arg0 dateInterval:(id)arg1 supersetCityNode:(id)arg2 densestCloseLocationNode:(id)arg3 ;


@end


#endif