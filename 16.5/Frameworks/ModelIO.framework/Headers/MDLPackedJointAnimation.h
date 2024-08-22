// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLPACKEDJOINTANIMATION_H
#define MDLPACKEDJOINTANIMATION_H

@class NSArray;
@protocol NSCopying, MDLJointAnimation;


#import "MDLObject.h"
#import "MDLAnimatedQuaternionArray.h"
#import "MDLAnimatedVector3Array.h"

@interface MDLPackedJointAnimation : MDLObject <NSCopying, MDLJointAnimation>



@property (readonly, nonatomic) NSArray *jointPaths; // ivar: _jointPaths
@property (readonly, nonatomic) MDLAnimatedQuaternionArray *rotations; // ivar: _rotations
@property (readonly, nonatomic) MDLAnimatedVector3Array *scales; // ivar: _scales
@property (readonly, nonatomic) MDLAnimatedVector3Array *translations; // ivar: _translations


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 jointPaths:(id)arg1 ;


@end


#endif