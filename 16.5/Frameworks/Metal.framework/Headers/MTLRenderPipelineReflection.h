// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRENDERPIPELINEREFLECTION_H
#define MTLRENDERPIPELINEREFLECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MTLRenderPipelineReflection : NSObject

@property (readonly) NSArray *fragmentArguments;
@property (readonly) NSArray *fragmentBindings;
@property (readonly) NSArray *meshBindings;
@property (readonly) NSArray *objectBindings;
@property (readonly) NSArray *tileArguments;
@property (readonly) NSArray *tileBindings;
@property (readonly) NSArray *vertexArguments;
@property (readonly) NSArray *vertexBindings;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;


@end


#endif