// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXVIDEOVIEW_H
#define PXVIDEOVIEW_H

@class UIView, ISWrappedAVPlayer, NSString, ISAVPlayerLayer;
@protocol PXVideoViewDelegate;



@interface PXVideoView : UIView {
    ISWrappedAVPlayer *_player;
    ? _delegateRespondsTo;
}


@property (weak, nonatomic) NSObject<PXVideoViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *kvoProxyIdentifier; // ivar: _kvoProxyIdentifier
@property (retain, nonatomic) ISWrappedAVPlayer *player;
@property (readonly, nonatomic) ISAVPlayerLayer *playerLayer;
@property (nonatomic) BOOL toneMapToStandardDynamicRange;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) BOOL videoIsReadyForDisplay;


+(Class)layerClass;
-(id)init;
-(void)_layerReadyForDisplayDidChange;
-(void)dealloc;


@end


#endif