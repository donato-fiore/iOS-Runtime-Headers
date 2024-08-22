// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSTICKERPOSEADJUSTMENT_H
#define AVTSTICKERPOSEADJUSTMENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVTAvatarPose.h"

@interface AVTStickerPoseAdjustment : NSObject

@property (retain, nonatomic) AVTAvatarPose *pose; // ivar: _pose
@property (nonatomic) NSInteger presetCategory; // ivar: _presetCategory
@property (retain, nonatomic) NSString *presetIdentifier; // ivar: _presetIdentifier


-(id)description;
-(id)poseByApplyingToPose:(id)arg0 forAvatar:(id)arg1 ;


@end


#endif