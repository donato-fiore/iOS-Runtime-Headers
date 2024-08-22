// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBAVPLAYERLAYER_H
#define WEBAVPLAYERLAYER_H

@class CALayer, NSDictionary, AVPlayerController, NSString;



@interface WebAVPlayerLayer : CALayer {
    RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoFullscreenInterfaceAVKit>> _fullscreenInterface;
    RetainPtr<WebAVPlayerController> _avPlayerController;
    RetainPtr<CALayer> _videoSublayer;
    FloatRect _videoSublayerFrame;
    RetainPtr<NSString> _videoGravity;
    RetainPtr<NSString> _previousVideoGravity;
}


@property (nonatomic) *void fullscreenInterface;
@property CGRect modelVideoLayerFrame; // ivar: _modelVideoLayerFrame
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes; // ivar: _pixelBufferAttributes
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay; // ivar: _readyForDisplay
@property CGSize videoDimensions; // ivar: _videoDimensions
@property (retain, nonatomic) NSString *videoGravity;
@property (retain, nonatomic) CALayer *videoSublayer;


+(id)keyPathsForValuesAffectingVideoRect;
-(id)init;
-(struct CGRect )videoRect;
-(struct FloatRect )calculateTargetVideoFrame;
-(void)dealloc;
-(void)layoutSublayers;
-(void)resolveBounds;


@end


#endif