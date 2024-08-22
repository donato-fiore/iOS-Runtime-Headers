// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRATTRIBUTECACHECONTAINER_H
#define MTRATTRIBUTECACHECONTAINER_H


#import <Foundation/Foundation.h>

#import "MTRClusterStateCacheContainer.h"

@interface MTRAttributeCacheContainer : NSObject

@property (readonly, nonatomic) MTRClusterStateCacheContainer *realContainer; // ivar: _realContainer


-(id)init;
-(void)readAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 clientQueue:(id)arg3 completion:(id)arg4 ;


@end


#endif