// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARSKELETONDEFINITION_H
#define ARSKELETONDEFINITION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ARSkeleton3D.h"

@interface ARSkeletonDefinition : NSObject

@property (readonly, nonatomic) NSUInteger jointCount;
@property (readonly, nonatomic) NSArray *jointNames; // ivar: _jointNames
@property (readonly, nonatomic) ARSkeleton3D *neutralBodySkeleton3D; // ivar: _neutralBodySkeleton3D
@property (readonly, nonatomic) NSArray *parentIndices; // ivar: _parentIndices


+(id)defaultBody2DSkeletonDefinition;
+(id)defaultBody3DSkeletonDefinition;
-(NSUInteger)indexForJointName:(id)arg0 ;
-(id)initDefault2DSkeletonDefinition;
-(id)initDefault3DSkeletonDefinition;


@end


#endif