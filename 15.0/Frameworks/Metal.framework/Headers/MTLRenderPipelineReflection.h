// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLRENDERPIPELINEREFLECTION_H
#define MTLRENDERPIPELINEREFLECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MTLRenderPipelineReflection : NSObject

@property (readonly) NSArray *fragmentArguments;
@property (readonly) NSArray *tileArguments;
@property (readonly) NSArray *vertexArguments;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;


@end


#endif