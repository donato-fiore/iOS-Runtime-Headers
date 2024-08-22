// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBINDINGCLUSTERTARGETSTRUCT_H
#define MTRBINDINGCLUSTERTARGETSTRUCT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRBindingClusterTargetStruct : NSObject

@property (retain, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (retain, nonatomic) NSNumber *endpoint; // ivar: _endpoint
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *group; // ivar: _group
@property (retain, nonatomic) NSNumber *node; // ivar: _node


-(id)description;
-(id)init;


@end


#endif