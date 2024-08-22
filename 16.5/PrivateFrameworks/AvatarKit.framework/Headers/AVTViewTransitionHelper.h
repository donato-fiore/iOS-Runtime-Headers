// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTVIEWTRANSITIONHELPER_H
#define AVTVIEWTRANSITIONHELPER_H

@class SCNTechnique;

#import <Foundation/Foundation.h>

#import "AVTView.h"
#import "AVTStickerConfiguration.h"
#import "AVTStickerConfigurationReversionContext.h"

@interface AVTViewTransitionHelper : NSObject {
    AVTView *_view;
    AVTStickerConfiguration *_stickerConfiguration;
    SCNTechnique *_transitionTechnique;
    AVTStickerConfigurationReversionContext *_stickerTransitionReversionContext;
}




-(id)snapshotViewUsingBackgroundColor;
-(id)transitionTechnique;
-(id)viewBackgroundColor;
-(void)coordinator_performCrossFadeThenAnimateTransitionOutOfStickerConfigurationWithDuration:(CGFloat)arg0 avatar:(id)arg1 avatarNode:(id)arg2 oldReversionContext:(id)arg3 ;
-(void)coordinator_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)arg0 duration:(CGFloat)arg1 options:(NSUInteger)arg2 avatar:(id)arg3 avatarNode:(id)arg4 oldReversionContext:(id)arg5 ;
-(void)coordinator_performCrossFadeTransitionOutOfStickerConfigurationWithDuration:(CGFloat)arg0 avatar:(id)arg1 avatarNode:(id)arg2 oldReversionContext:(id)arg3 ;
-(void)coordinator_performCrossFadeTransitionToStickerConfiguration:(id)arg0 duration:(CGFloat)arg1 options:(NSUInteger)arg2 avatar:(id)arg3 avatarNode:(id)arg4 oldReversionContext:(id)arg5 ;
// -(void)view_performAnimateThenCrossFadeTransitionFromStickerConfiguration:(id)arg0 toStickerConfiguration:(id)arg1 duration:(CGFloat)arg2 avatar:(id)arg3 avatarNode:(id)arg4 oldReversionContext:(id)arg5 completionHandler:(id)arg6 simultaneousAnimationsBlock:(unk)arg7  ;
// -(void)view_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)arg0 fallbackPose:(id)arg1 duration:(CGFloat)arg2 avatar:(id)arg3 avatarNode:(id)arg4 oldReversionContext:(id)arg5 completionHandler:(id)arg6 simultaneousAnimationsBlock:(unk)arg7  ;
// -(void)view_performCrossFadeTransitionToStickerConfiguration:(id)arg0 fallbackPose:(id)arg1 duration:(CGFloat)arg2 avatar:(id)arg3 avatarNode:(id)arg4 oldReversionContext:(id)arg5 completionHandler:(id)arg6 simultaneousAnimationsBlock:(unk)arg7  ;


@end


#endif