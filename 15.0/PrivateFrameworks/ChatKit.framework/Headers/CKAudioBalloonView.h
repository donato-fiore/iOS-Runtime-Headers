// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAUDIOBALLOONVIEW_H
#define CKAUDIOBALLOONVIEW_H

@class NSString, UILabel;
@protocol CKBalloonVibrancy, CKAudioBalloonView;


#import "CKColoredBalloonView.h"
#import "CKAudioProgressView.h"
#import "CKWaveformProgressView.h"

@interface CKAudioBalloonView : CKColoredBalloonView <CKBalloonVibrancy, CKAudioBalloonView>



@property (nonatomic, getter=isControlHidden) BOOL controlHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPlayed) BOOL played; // ivar: _played
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (retain, nonatomic) CKAudioProgressView *progressView; // ivar: _progressView
@property (readonly) Class superclass;
@property (nonatomic) CGFloat time; // ivar: _time
@property (retain, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (nonatomic) NSInteger waveformContentMode;
@property (retain, nonatomic) CKWaveformProgressView *waveformProgressView; // ivar: _waveformProgressView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)nonVibrantSubViews;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)addOverlaySubview:(id)arg0 ;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setWaveform:(id)arg0 ;
-(void)updateProgress;
-(void)updateTimeString;
-(void)vibrantContainerWillReparentNonVibrantSubviews:(id)arg0 ;


@end


#endif