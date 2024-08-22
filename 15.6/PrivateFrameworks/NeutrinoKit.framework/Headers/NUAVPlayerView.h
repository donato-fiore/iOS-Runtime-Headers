// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUAVPLAYERVIEW_H
#define NUAVPLAYERVIEW_H

@class UIView, AVPlayer;
@protocol NUAVPlayerViewDelegate;



@interface NUAVPlayerView : UIView {
    uint8_t _updateReadyForDisplayID;
    BOOL _observerDetached;
}


@property (weak, nonatomic) NSObject<NUAVPlayerViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (nonatomic, getter=isReadyForDisplay, setter=_setReadyForDisplay:) BOOL readyForDisplay; // ivar: _readyForDisplay


+(Class)layerClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateReadyForDisplayWithID:(uint8_t)arg0 ;
-(void)dealloc;
-(void)dispose;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif