// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUJSRENDERNODE_H
#define NUJSRENDERNODE_H

@protocol NUJSRenderNodeExport;


#import "NUJSProxy.h"
#import "NUJSImageGeometry.h"
#import "NUJSImageProperties.h"
#import "NURenderNode.h"
#import "NUJSVideoProperties.h"

@interface NUJSRenderNode : NUJSProxy <NUJSRenderNodeExport>



@property (readonly) NUJSImageGeometry *geometry;
@property (readonly) NUJSImageProperties *imageProperties;
@property (readonly) NURenderNode *node;
@property (readonly) NUJSVideoProperties *videoProperties;


-(id)initWithNode:(id)arg0 context:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;


@end


#endif