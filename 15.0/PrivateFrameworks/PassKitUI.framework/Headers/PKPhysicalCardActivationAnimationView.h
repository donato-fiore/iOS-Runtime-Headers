// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPHYSICALCARDACTIVATIONANIMATIONVIEW_H
#define PKPHYSICALCARDACTIVATIONANIMATIONVIEW_H

@class UIView, AVPlayerLayer, AVPlayer, AVPlayerItem, UILabel, NSString;



@interface PKPhysicalCardActivationAnimationView : UIView {
    AVPlayerLayer *_playerLayer;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    BOOL _playerStarted;
    UILabel *_nameOnCardLabel;
    BOOL _invalidated;
}


@property (copy, nonatomic) NSString *nameOnCard; // ivar: _nameOnCard


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didFinishPlaying;
-(void)_invalidate;
-(void)_removePlayerItem;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startAnimation;


@end


#endif