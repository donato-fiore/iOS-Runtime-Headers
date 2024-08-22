// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUICOMPACTSERVERUTTERANCEVIEW_H
#define SIRISHAREDUICOMPACTSERVERUTTERANCEVIEW_H

@class NSMutableArray, NSMapTable, UIView;
@protocol SiriSharedUICompactServerUtteranceViewDelegate;


#import "SiriSharedUIStandardView.h"
#import "SiriSharedUIDeviceMotionEffectView.h"

@interface SiriSharedUICompactServerUtteranceView : SiriSharedUIStandardView {
    UIEdgeInsets _contentInsets;
    NSMutableArray *_serverLabels;
    NSMapTable *_emojiLabels;
    BOOL _isMultiLine;
}


@property (weak, nonatomic) NSObject<SiriSharedUICompactServerUtteranceViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) SiriSharedUIDeviceMotionEffectView *deviceMotionEffectView; // ivar: _deviceMotionEffectView
@property (readonly, nonatomic) UIView *labelsContainerView; // ivar: _labelsContainerView


-(BOOL)isMultiLine;
-(CGFloat)_lineHeightForFont:(id)arg0 ;
-(CGFloat)_scaledSpacingBetweenLabels;
-(id)_createEmojiLabelForString:(id)arg0 containingEmojisAtRanges:(id)arg1 ;
-(id)_createLabel;
-(id)_createLabelForUtterance:(id)arg0 ;
-(id)_fontForUtteranceLabel;
-(id)_textForLabel:(id)arg0 ;
-(id)initWithContentInsets:(struct UIEdgeInsets )arg0 delegate:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_setTextForLabel:(id)arg0 text:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setUtterances:(id)arg0 ;


@end


#endif