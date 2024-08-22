// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARSKELETON_H
#define ARSKELETON_H


#import <Foundation/Foundation.h>

#import "ARSkeletonDefinition.h"

@interface ARSkeleton : NSObject

@property (readonly, nonatomic) ARSkeletonDefinition *definition; // ivar: _definition
@property (readonly, nonatomic) NSUInteger jointCount; // ivar: _jointCount


-(BOOL)isJointTracked:(NSInteger)arg0 ;
-(id)initPrivate;


@end


#endif