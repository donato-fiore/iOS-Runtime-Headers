// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLREGIONSHIERARCHICALCLUSTERINGOBJECT_H
#define PLREGIONSHIERARCHICALCLUSTERINGOBJECT_H

@protocol PLRegionsClusteringItem;

#import <Foundation/Foundation.h>


@interface PLRegionsHierarchicalClusteringObject : NSObject

@property NSUInteger index; // ivar: _index
@property (readonly, nonatomic) NSObject<PLRegionsClusteringItem> *object; // ivar: _object


+(id)clusterObjectWithObject:(id)arg0 index:(NSUInteger)arg1 ;


@end


#endif