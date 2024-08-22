// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBINDINGCLUSTERTARGETSTRUCT_H
#define MTRBINDINGCLUSTERTARGETSTRUCT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRBindingClusterTargetStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (copy, nonatomic) NSNumber *endpoint; // ivar: _endpoint
@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (copy, nonatomic) NSNumber *group; // ivar: _group
@property (copy, nonatomic) NSNumber *node; // ivar: _node


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif