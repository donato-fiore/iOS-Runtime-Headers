// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARIMAGERENDERER_H
#define AVTAVATARIMAGERENDERER_H

@class AVTSnapshotBuilder;
@protocol AVTUILogger, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVTAvatarRemoteImageRenderer.h"

@interface AVTAvatarImageRenderer : NSObject

@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (retain, nonatomic) AVTAvatarRemoteImageRenderer *remoteImageRenderer; // ivar: _remoteImageRenderer
@property (retain, nonatomic) AVTSnapshotBuilder *snapshotBuilder; // ivar: _snapshotBuilder
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotBuilderQueue; // ivar: _snapshotBuilderQueue


-(CGFloat)fieldOfViewForNodeWithName:(id)arg0 ;
-(id)_imageForAvatar:(id)arg0 scope:(id)arg1 ;
-(id)imageForAvatar:(id)arg0 scope:(id)arg1 ;
-(id)imageForAvatar:(id)arg0 scope:(id)arg1 usingService:(BOOL)arg2 ;
-(id)imageForAvatar:(id)arg0 scope:(id)arg1 withSCNModifications:(id)arg2 usingService:(BOOL)arg3 ;
-(id)init;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithSceneNodeModifications:(id)arg0 ;
// -(id)initWithSnapshotBuilder:(id)arg0 lockProvider:(id)arg1 remoteImageRenderer:(unk)arg2 logger:(id)arg3  ;
-(id)nts_imageForAvatar:(id)arg0 scope:(id)arg1 ;
-(void)updateSnapshotBuilderModifications:(id)arg0 ;


@end


#endif