// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHBUILDERMOMENTENVELOPE_H
#define PGGRAPHBUILDERMOMENTENVELOPE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PGGraphMomentNode.h"

@interface PGGraphBuilderMomentEnvelope : NSObject

@property (readonly) PGGraphMomentNode *momentNode; // ivar: _momentNode
@property (retain, nonatomic) NSArray *sceneEdges; // ivar: _sceneEdges


-(id)initWithMomentNode:(id)arg0 ;


@end


#endif