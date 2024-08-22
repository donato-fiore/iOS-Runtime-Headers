// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVHOMEIPCAMERABEHAVIOR_H
#define AVHOMEIPCAMERABEHAVIOR_H

@class NSString;
@protocol AVBehaviorInternal, AVHomeIPCameraActionButtonHandling, AVBehavior;

#import <Foundation/Foundation.h>

#import "AVHomeIPCameraBehaviorContext.h"

@interface AVHomeIPCameraBehavior : NSObject <AVBehaviorInternal, AVHomeIPCameraActionButtonHandling, AVBehavior>



@property (weak, nonatomic) AVHomeIPCameraBehaviorContext *behaviorContext; // ivar: _behaviorContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didMoveToContext:(id)arg0 ;
-(void)didRemoveFromContext:(id)arg0 ;
-(void)pictureInPictureActionButtonTapped;
-(void)playbackControlsDidChangePlayerVolume:(float)arg0 ;
-(void)playbackControlsDidToggleMuted:(BOOL)arg0 ;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg0 ;
-(void)willMoveToContext:(id)arg0 ;
-(void)willRemoveFromContext:(id)arg0 ;


@end


#endif