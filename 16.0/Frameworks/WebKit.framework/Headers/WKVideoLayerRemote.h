// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKVIDEOLAYERREMOTE_H
#define WKVIDEOLAYERREMOTE_H

@class CALayer;



@interface WKVideoLayerRemote : CALayer {
    WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter> _mediaPlayerPrivateRemote;
    RetainPtr<CAContext> _context;
    unsigned char _videoGravity;
    unique_ptr<WebCore::Timer, std::default_delete<WebCore::Timer>> _resolveBoundsTimer;
    BOOL _shouldRestartWhenTimerFires;
    Seconds _delay;
}


@property (nonatomic) *void mediaPlayerPrivateRemote;
@property (nonatomic) unsigned char videoGravity;
@property (nonatomic) CGRect videoLayerFrame; // ivar: _videoLayerFrame


-(BOOL)resizePreservingGravity;
-(id)init;
-(void)layoutSublayers;
-(void)resolveBounds;


@end


#endif