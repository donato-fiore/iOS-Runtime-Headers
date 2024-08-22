// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCONFERENCEPREVIEW_H
#define AVCONFERENCEPREVIEW_H

@class CALayer, NSString;
@protocol OS_dispatch_queue, AVConferencePreviewClientDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"
#import "VideoAttributes.h"

@interface AVConferencePreview : NSObject {
    AVConferenceXPCClient *connection;
    BOOL clientWantsPreview;
    unsigned int connectionAttempts;
    CALayer *caLayerFront;
    CALayer *caLayerBack;
    VideoAttributes *localVideoAttributes;
    CGSize localScreenPortraitAspectRatio;
    CGSize localScreenLandscapeAspectRatio;
    NSObject<OS_dispatch_queue> *avConferencePreviewQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewNotificationQueue;
    BOOL _isPreviewRunning;
    BOOL _zoomAvailable;
    BOOL _CFAvailable;
    CGFloat _currentZoomFactor;
    CGFloat _maxZoomFactor;
    NSString *_localCameraUID;
}


@property (retain, nonatomic) NSObject<AVConferencePreviewClientDelegate> *delegate; // ivar: delegate


+(id)AVConferencePreviewSingleton;
-(BOOL)isCameraZoomAvailable;
-(BOOL)isPreviewRunning;
-(CGFloat)currentZoomFactor;
-(CGFloat)maxZoomFactor;
-(NSUInteger)retainCount;
-(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)localCameraUID;
-(id)localScreenAttributesForVideoAttributes:(id)arg0 ;
-(id)localVideoAttributes;
-(id)localVideoLayer:(BOOL)arg0 ;
-(id)retain;
-(unsigned int)localCamera;
-(void)addStickerWithURL:(id)arg0 isFaceSticker:(BOOL)arg1 atPosition:(struct CGPoint )arg2 identifier:(id)arg3 ;
-(void)beginPIPToPreviewAnimation;
-(void)beginPreviewToPIPAnimation;
-(void)cameraCFramingAvailabilityDidChange:(BOOL)arg0 ;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg0 ;
-(void)cameraDidBecomeInterruptedForForUniqueID:(id)arg0 reason:(NSInteger)arg1 ;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg0 currentZoomFactor:(CGFloat)arg1 maxZoomFactor:(CGFloat)arg2 ;
-(void)clearAllStickers:(BOOL)arg0 ;
-(void)connectLayer:(id)arg0 withSlot:(unsigned int)arg1 ;
-(void)dealloc;
-(void)didChangeLocalScreenAttributes:(id)arg0 ;
-(void)didChangeLocalVideoAttributes:(id)arg0 ;
-(void)didGetSnapshot:(id)arg0 ;
-(void)didPausePreview;
-(void)didReceiveCommError;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg0 error:(id)arg1 ;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg0 ;
-(void)didStartPreview;
-(void)didStopPreview;
-(void)endPIPToPreviewAnimation;
-(void)endPreviewToPIPAnimation;
-(void)getSnapshot;
-(void)pausePreview;
-(void)registerBlocksForDelegateNotifications;
-(void)release;
-(void)resetLocalCameraAfterServerDisconnect;
-(void)setAnimoji:(id)arg0 ;
-(void)setCameraZoomFactor:(CGFloat)arg0 ;
-(void)setCameraZoomFactor:(CGFloat)arg0 withRate:(CGFloat)arg1 ;
-(void)setCinematicFramingEnabled:(BOOL)arg0 ;
-(void)setLocalCamera:(unsigned int)arg0 ;
-(void)setLocalCameraWithUID:(id)arg0 ;
-(void)setLocalScreenAttributes:(id)arg0 ;
-(void)setLocalVideoAttributes:(id)arg0 ;
-(void)setLocalVideoLayer:(id)arg0 front:(BOOL)arg1 ;
-(void)setMemoji:(id)arg0 ;
-(void)startPreview;
-(void)startPreviewUnpausing:(BOOL)arg0 ;
-(void)stopPreview;


@end


#endif