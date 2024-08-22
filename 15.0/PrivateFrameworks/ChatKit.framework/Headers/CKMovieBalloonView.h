// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMOVIEBALLOONVIEW_H
#define CKMOVIEBALLOONVIEW_H

@class AVPlayer, AVPlayerItem, AVPlayerLayer;
@protocol CKMovieBalloonViewDelegate;


#import "CKImageBalloonView.h"
#import "CKMovieMediaObject.h"

@interface CKMovieBalloonView : CKImageBalloonView

@property (retain, nonatomic, setter=setAVPlayer:) AVPlayer *avPlayer; // ivar: _avPlayer
@property (retain, nonatomic, setter=setAVPlayerItem:) AVPlayerItem *avPlayerItem; // ivar: _avPlayerItem
@property (retain, nonatomic, setter=setAVPlayerLayer:) AVPlayerLayer *avPlayerLayer; // ivar: _avPlayerLayer
@property (weak, nonatomic) NSObject<CKMovieBalloonViewDelegate> *delegate;
@property (retain, nonatomic) CKMovieMediaObject *mediaObject; // ivar: _mediaObject


-(BOOL)isCodecTypeAllowed:(unsigned int)arg0 ;
-(id)createAVAssetAndValidateCodec;
-(id)description;
-(void)cleanupPlayerIfNeeded;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 hasInvisibleInkEffect:(BOOL)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)tapGestureRecognized:(id)arg0 ;
-(void)videoDidReachEnd:(id)arg0 ;


@end


#endif