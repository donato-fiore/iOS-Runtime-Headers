// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPICTUREINPICTURESAMPLEBUFFERDISPLAYLAYERVIEW_H
#define AVPICTUREINPICTURESAMPLEBUFFERDISPLAYLAYERVIEW_H

@class AVSampleBufferDisplayLayer, CALayerHost;


#import "AVPictureInPicturePlayerLayerView.h"
#import "AVObservationController.h"
#import "AVPictureInPictureIndicatorLayer.h"
#import "AVSampleBufferDisplayLayerPlayerController.h"
#import "AVPictureInPictureSampleBufferDisplayLayerHostView.h"

@interface AVPictureInPictureSampleBufferDisplayLayerView : AVPictureInPicturePlayerLayerView

@property (nonatomic, getter=isPIPModeEnabled) BOOL PIPModeEnabled; // ivar: _PIPModeEnabled
@property (nonatomic) CGSize imageQueueSize; // ivar: _imageQueueSize
@property (nonatomic) CGSize lastKnownRenderSize; // ivar: _lastKnownRenderSize
@property (retain, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (retain, nonatomic) AVPictureInPictureIndicatorLayer *placeholderLayer; // ivar: _placeholderLayer
@property (retain, nonatomic) AVSampleBufferDisplayLayerPlayerController *playerController; // ivar: _playerController
@property (retain, nonatomic) AVPictureInPictureSampleBufferDisplayLayerHostView *sbdlHostView; // ivar: _sbdlHostView
@property (nonatomic) unsigned int sourceContextId; // ivar: _sourceContextId
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *sourceLayer; // ivar: _sourceLayer
@property (weak, nonatomic) CALayerHost *sourceLayerHost; // ivar: _sourceLayerHost


-(id)_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
-(id)initWithSourceLayer:(id)arg0 playerController:(id)arg1 ;
-(void)_updateGeometry;
-(void)_updateSourceLayerHost;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif