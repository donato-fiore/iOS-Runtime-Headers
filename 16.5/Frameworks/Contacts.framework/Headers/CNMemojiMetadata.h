// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMEMOJIMETADATA_H
#define CNMEMOJIMETADATA_H

@class AVTAvatar, NSString, AVTAvatarPhysicalizedPose, AVTStickerConfiguration;
@protocol NSCopying, NSSecureCoding, AVTAvatarRecord;

#import <Foundation/Foundation.h>

#import "CNMemojiBackgroundParameters.h"

@interface CNMemojiMetadata : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) AVTAvatar *avatar;
@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (readonly, nonatomic) NSString *avatarRecordIdentifier;
@property (readonly, nonatomic) BOOL avatarRecordIsEditable;
@property (readonly, copy, nonatomic) NSString *backgroundColorDescription; // ivar: _backgroundColorDescription
@property (readonly, nonatomic) CNMemojiBackgroundParameters *backgroundParameters; // ivar: _backgroundParameters
@property (readonly, nonatomic) CGAffineTransform cropTransform; // ivar: _cropTransform
@property (readonly, nonatomic) AVTAvatarPhysicalizedPose *pose; // ivar: _pose
@property (readonly, nonatomic) AVTStickerConfiguration *poseConfiguration;
@property (readonly, copy, nonatomic) NSString *poseName; // ivar: _poseName


+(BOOL)supportsSecureCoding;
+(id)log;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAvatarRecord:(id)arg0 poseConfiguration:(id)arg1 backgroundColorDescription:(id)arg2 ;
-(id)initWithAvatarRecord:(id)arg0 poseConfiguration:(id)arg1 backgroundColorDescription:(id)arg2 cropTransform:(struct CGAffineTransform )arg3 ;
-(id)initWithAvatarRecord:(id)arg0 poseName:(id)arg1 pose:(id)arg2 backgroundColorDescription:(id)arg3 ;
-(id)initWithAvatarRecord:(id)arg0 poseName:(id)arg1 pose:(id)arg2 backgroundColorDescription:(id)arg3 cropTransform:(struct CGAffineTransform )arg4 ;
-(id)initWithBackgroundColorDescription:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif