// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVINLINEPREVIEW_H
#define ASVINLINEPREVIEW_H

@class CALayer, CALayerHost, NSUUID;
@protocol ARQLInlineService2;

#import <Foundation/Foundation.h>


@interface ASVInlinePreview : NSObject {
    CALayer *_loadingLayer;
    CALayerHost *_layerHost;
    id<ARQLInlineService2> *_fullscreenService;
}


@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(void)_kill:(int)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)inlineTouchesFromUITouches:(id)arg0 ;
-(void)createFullscreenInstanceWithInitialFrame:(struct CGRect )arg0 previewOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeDismissFullscreenWithCompletionHandler:(id)arg0 ;
-(void)preparePreviewOfFileAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)setFrameWithinFencedTransaction:(struct CGRect )arg0 ;
-(void)setWantsDebugColors:(BOOL)arg0 ;
-(void)setupRemoteConnectionWithCompletionHandler:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateFrame:(struct CGRect )arg0 completionHandler:(id)arg1 ;


@end


#endif