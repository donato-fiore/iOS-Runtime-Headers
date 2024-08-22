// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPBINDINGCLUSTERTARGETSTRUCT_H
#define CHIPBINDINGCLUSTERTARGETSTRUCT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPBindingClusterTargetStruct : NSObject

@property (retain, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (retain, nonatomic) NSNumber *endpoint; // ivar: _endpoint
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *group; // ivar: _group
@property (retain, nonatomic) NSNumber *node; // ivar: _node


-(id)init;


@end


#endif