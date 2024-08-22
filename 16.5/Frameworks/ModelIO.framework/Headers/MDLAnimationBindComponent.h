// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLANIMATIONBINDCOMPONENT_H
#define MDLANIMATIONBINDCOMPONENT_H

@class NSString, NSArray;
@protocol NSCopying, MDLComponent, MDLJointAnimation;

#import <Foundation/Foundation.h>

#import "MDLSkeleton.h"

@interface MDLAnimationBindComponent : NSObject <NSCopying, MDLComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? geometryBindTransform; // ivar: _geometryBindTransform
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MDLJointAnimation> *jointAnimation; // ivar: _jointAnimation
@property (retain, nonatomic) NSArray *jointPaths; // ivar: _jointPaths
@property (retain, nonatomic) MDLSkeleton *skeleton; // ivar: _skeleton
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif