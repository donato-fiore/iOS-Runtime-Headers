// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARPHYSICALIZEDPOSE_H
#define AVTAVATARPHYSICALIZEDPOSE_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "AVTAvatarPose.h"

@interface AVTAvatarPhysicalizedPose : NSObject

@property (readonly, nonatomic) NSDictionary *physicsStates; // ivar: _physicsStates
@property (readonly, nonatomic) AVTAvatarPose *pose; // ivar: _pose


-(id)initWithPose:(id)arg0 physicsStates:(id)arg1 ;
-(id)initWithPoseRepresentation:(id)arg0 physicsStatesRepresentation:(id)arg1 ;
-(id)initWithSceneAtURL:(id)arg0 ;
-(void)applyToAvatar:(id)arg0 ;
-(void)applyWithTransitionToAvatar:(id)arg0 duration:(CGFloat)arg1 completionHandler:(id)arg2 ;


@end


#endif