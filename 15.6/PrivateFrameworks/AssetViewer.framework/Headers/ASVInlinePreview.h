// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASVINLINEPREVIEW_H
#define ASVINLINEPREVIEW_H

@class CALayerHost, NSTimer, NSURL, CALayer, NSString, NSUUID;
@protocol ARQLInlineService2;

#import <Foundation/Foundation.h>

#import "CAActivityIndicatorLayer.h"

@interface ASVInlinePreview : NSObject {
    CALayerHost *_layerHost;
    id<ARQLInlineService2> *_fullscreenService;
    id *_stateReplyBlock;
    ? _cameraTransform;
}


@property (copy, nonatomic) id *animationObserverBlock; // ivar: _animationObserverBlock
@property (readonly, retain, nonatomic) NSTimer *animationUpdateTimer; // ivar: _animationUpdateTimer
@property ? cameraTransform;
@property (copy, nonatomic) id *cameraTransformReply; // ivar: _cameraTransformReply
@property (retain, nonatomic) NSURL *canonicalWebPageURL; // ivar: _canonicalWebPageURL
@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL enableShadows; // ivar: _enableShadows
@property (readonly, nonatomic) CALayer *errorLayer; // ivar: _errorLayer
@property (readonly, nonatomic) BOOL hasAudio; // ivar: _hasAudio
@property (nonatomic) BOOL isLooping; // ivar: _isLooping
@property (nonatomic) BOOL isMuted; // ivar: _isMuted
@property (readonly, nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly, nonatomic) CAActivityIndicatorLayer *spinnerLayer; // ivar: _spinnerLayer
@property (retain, nonatomic) NSString *urlFragment; // ivar: _urlFragment
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(void)_kill:(int)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)inlineTouchesFromUITouches:(id)arg0 ;
-(void)_getCameraTransform:(id)arg0 ;
-(void)centerLayerInParent:(id)arg0 ;
-(void)commonInitWithFrame:(struct CGRect )arg0 ;
-(void)createFullscreenInstanceWithInitialFrame:(struct CGRect )arg0 previewOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)getCameraTransform:(id)arg0 ;
-(void)getSharedInlineServiceFailable:(id)arg0 ;
-(void)observeDismissFullscreenWithCompletionHandler:(id)arg0 ;
-(void)preparePreviewOfFileAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateFrame:(struct CGRect )arg0 completionHandler:(id)arg1 ;
-(void)updateRuntimeStateFrom:(id)arg0 ;


@end


#endif