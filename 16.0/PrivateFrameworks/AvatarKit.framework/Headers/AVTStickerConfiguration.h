// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSTICKERCONFIGURATION_H
#define AVTSTICKERCONFIGURATION_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "AVTAvatarBodyPose.h"
#import "AVTStickerCamera.h"
#import "AVTAvatarPhysicalizedPose.h"
#import "AVTAvatarPoseAnimation.h"

@interface AVTStickerConfiguration : NSObject

@property (retain, nonatomic) NSString *assetsPath; // ivar: _assetsPath
@property (retain, nonatomic) AVTAvatarBodyPose *bodyPose; // ivar: _bodyPose
@property (retain, nonatomic) AVTStickerCamera *camera; // ivar: _camera
@property (retain, nonatomic) NSDictionary *configurationDictionary; // ivar: _configurationDictionary
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSString *emojiRepresentation;
@property (nonatomic) BOOL hasLoadedFromConfiguration; // ivar: _hasLoadedFromConfiguration
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSArray *morpherOverrides; // ivar: _morpherOverrides
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) AVTAvatarPhysicalizedPose *physicalizedPose; // ivar: _physicalizedPose
@property (retain, nonatomic) NSArray *poseAdjustments; // ivar: _poseAdjustments
@property (readonly, nonatomic) AVTAvatarPoseAnimation *poseAnimation;
@property (readonly, nonatomic) BOOL preRendered; // ivar: _preRendered
@property (readonly, nonatomic) NSArray *presetOverrides; // ivar: _presetOverrides
@property (retain, nonatomic) NSArray *props; // ivar: _props
@property (readonly, nonatomic) float rate; // ivar: _rate
@property (retain, nonatomic) NSArray *shaderModifiers; // ivar: _shaderModifiers
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) CGFloat snapshotFrame; // ivar: _snapshotFrame
@property (readonly, nonatomic) NSString *stickerPack; // ivar: _stickerPack
@property (readonly, nonatomic) NSUInteger stickerVersion; // ivar: _stickerVersion


+(id)allStickerPackNames;
+(id)availableStickerNamesForAnimojiNamed:(id)arg0 inStickerPack:(id)arg1 ;
+(id)availableStickerNamesForMemojiInStickerPack:(id)arg0 ;
+(id)stickerConfigurationForAnimojiNamed:(id)arg0 inStickerPack:(id)arg1 stickerName:(id)arg2 ;
+(id)stickerConfigurationForMemojiInStickerPack:(id)arg0 stickerName:(id)arg1 ;
+(id)stickerConfigurationsForAnimojiNamed:(id)arg0 ;
+(id)stickerConfigurationsForAnimojiNamed:(id)arg0 inStickerPack:(id)arg1 ;
+(id)stickerConfigurationsForMemoji;
+(id)stickerConfigurationsForMemojiInStickerPack:(id)arg0 ;
+(id)stickerConfigurationsForPuppetNamed:(id)arg0 ;
+(id)unavailableAnimojiNamesForStickerPack:(id)arg0 ;
-(BOOL)definesPoseOnly;
-(BOOL)hasProps;
-(BOOL)showsBody;
-(id)description;
-(id)dictionaryWithTargetPath:(id)arg0 ;
-(id)framingMode;
-(id)initWithConfigDictionary:(id)arg0 assetsPath:(id)arg1 forStickerPack:(id)arg2 ;
-(id)initWithConfigurationAtPath:(id)arg0 ;
-(id)initWithConfigurationAtPath:(id)arg0 forStickerPack:(id)arg1 ;
-(id)initWithName:(id)arg0 pose:(id)arg1 bodyPose:(id)arg2 props:(id)arg3 shaders:(id)arg4 camera:(id)arg5 options:(id)arg6 ;
-(id)initWithName:(id)arg0 pose:(id)arg1 props:(id)arg2 shaders:(id)arg3 camera:(id)arg4 options:(id)arg5 ;
-(id)initWithName:(id)arg0 poseAnimation:(id)arg1 bodyPose:(id)arg2 props:(id)arg3 shaders:(id)arg4 camera:(id)arg5 options:(id)arg6 ;
-(void)_updateDictionary:(id)arg0 withTargetPath:(id)arg1 ;
-(void)loadIfNeeded;
-(void)setupOptions:(id)arg0 ;
-(void)unload;


@end


#endif