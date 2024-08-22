// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


@end


#endif