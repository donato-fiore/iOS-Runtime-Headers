// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAUDIOPROGRESSVIEW_H
#define CKAUDIOPROGRESSVIEW_H

@class IMManualUpdater;


#import "CKBalloonImageView.h"

@interface CKAudioProgressView : CKBalloonImageView

@property (nonatomic) char color; // ivar: _color
@property (retain, nonatomic) IMManualUpdater *displayUpdater; // ivar: _displayUpdater
@property (nonatomic, getter=isPlayed) BOOL played; // ivar: _played
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (nonatomic) float progress; // ivar: _progress


+(float)progressForTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)imageWithType:(unsigned char)arg0 color:(char)arg1 ;
+(id)templateImageWithControlImage:(id)arg0 ;
+(id)templateImageWithType:(unsigned char)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)prepareForDisplay;
-(void)prepareForDisplayIfNeeded;
-(void)setNeedsPrepareForDisplay;


@end


#endif