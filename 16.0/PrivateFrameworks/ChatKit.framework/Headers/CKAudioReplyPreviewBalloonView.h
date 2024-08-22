// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAUDIOREPLYPREVIEWBALLOONVIEW_H
#define CKAUDIOREPLYPREVIEWBALLOONVIEW_H



#import "CKColoredBalloonView.h"
#import "CKWaveformProgressView.h"

@interface CKAudioReplyPreviewBalloonView : CKColoredBalloonView

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSInteger waveformContentMode; // ivar: _waveformContentMode
@property (retain, nonatomic) CKWaveformProgressView *waveformProgressView; // ivar: _waveformProgressView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)setWaveform:(id)arg0 ;


@end


#endif