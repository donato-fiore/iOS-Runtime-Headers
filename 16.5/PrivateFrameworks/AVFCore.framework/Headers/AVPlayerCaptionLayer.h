// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERCAPTIONLAYER_H
#define AVPLAYERCAPTIONLAYER_H

@class CALayer, FigSubtitleCALayer, NSSet;
@protocol OS_dispatch_queue;


#import "AVPlayerLayerIntermediateLayer.h"
#import "AVPlayer.h"

@interface AVPlayerCaptionLayer : CALayer {
    FigSubtitleCALayer *_subtitleLayer;
    AVPlayerLayerIntermediateLayer *_closedCaptionLayer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_configurationQueue;
    AVPlayer *_player;
    AVPlayer *_playerBeingObserved;
    NSSet *_KVOInvokers;
    NSEdgeInsets _legibleContentInsets;
}


@property (nonatomic) NSEdgeInsets captionContentInsets;
@property (nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;
@property (retain, nonatomic) AVPlayer *player;


+(id)captionLayerWithPlayer:(id)arg0 ;
-(id)init;
-(void)_startObservingPlayer:(id)arg0 ;
-(void)_stopObservingPlayer:(id)arg0 ;
-(void)dealloc;
-(void)layoutSublayers;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif