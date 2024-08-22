// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMEMOJIMETADATAUTILITIES_H
#define CNMEMOJIMETADATAUTILITIES_H


#import <Foundation/Foundation.h>


@interface CNMemojiMetadataUtilities : NSObject



+(id)avatarRecordForIdentifier:(id)arg0 ;
+(id)dataForMemojiMetadata:(id)arg0 ;
+(id)dataForMemojiMetadata:(id)arg0 backgroundColorDescription:(id)arg1 cropTransform:(struct CGAffineTransform )arg2 ;
+(id)dataForPoseConfiguration:(id)arg0 ;
+(id)memojiMetadataDataForAvatarRecord:(id)arg0 poseConfiguration:(id)arg1 backgroundColorDescription:(id)arg2 ;
+(id)memojiMetadataDataForAvatarRecord:(id)arg0 poseConfiguration:(id)arg1 backgroundColorDescription:(id)arg2 cropTransform:(struct CGAffineTransform )arg3 ;
+(id)memojiMetadataDataForAvatarRecordIdentifier:(id)arg0 poseConfigurationData:(id)arg1 backgroundColorDescription:(id)arg2 ;
+(id)memojiMetadataDataForAvatarRecordIdentifier:(id)arg0 poseConfigurationData:(id)arg1 backgroundColorDescription:(id)arg2 cropTransform:(struct CGAffineTransform )arg3 ;
+(id)memojiMetadataFromData:(id)arg0 ;
+(id)os_log;
+(id)physicsStatesDictionaryRepresentationForPose:(id)arg0 ;
+(id)poseConfigurationForAvatarRecord:(id)arg0 poseName:(id)arg1 pose:(id)arg2 ;
+(id)poseConfigurationForData:(id)arg0 withAvatarRecord:(id)arg1 ;


@end


#endif