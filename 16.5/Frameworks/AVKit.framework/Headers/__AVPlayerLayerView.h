// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __AVPLAYERLAYERVIEW_H
#define __AVPLAYERLAYERVIEW_H

@class UIView, AVPlayerLayer, NSDictionary;


#import "AVPlayerController.h"
#import "AVPictureInPicturePlayerLayerView.h"

@interface __AVPlayerLayerView : UIView {
    AVPlayerController *_playerController;
    AVPictureInPicturePlayerLayerView *_pictureInPicturePlayerLayerView;
}


@property (retain, nonatomic) AVPlayerLayer *pictureInPicturePlayerLayer; // ivar: _pictureInPicturePlayerLayer
@property (readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (readonly, nonatomic) CGRect videoBounds;
@property (readonly, nonatomic) CGSize videoDisplaySize;
@property (nonatomic) NSInteger videoGravity;
@property (nonatomic, getter=isVideoScaled) BOOL videoScaled;


+(Class)layerClass;
+(id)keyPathsForValuesAffectingPixelBufferAttributes;
+(id)keyPathsForValuesAffectingPlayerLayer;
+(id)keyPathsForValuesAffectingReadyForDisplay;
+(id)keyPathsForValuesAffectingVideoBounds;
+(id)keyPathsForValuesAffectingVideoDisplaySize;
+(id)keyPathsForValuesAffectingVideoLayerGravity;
+(id)keyPathsForValuesAffectingVideoScaled;
-(void)startRoutingVideoToPictureInPicturePlayerLayerView;
-(void)stopRoutingVideoToPictureInPicturePlayerLayerView;


@end


#endif