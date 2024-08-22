// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOBILECHROMELESSTIMELINEVIEW_H
#define AVMOBILECHROMELESSTIMELINEVIEW_H

@class UILabel, NSString;
@protocol AVShadowCasting;


#import "AVView.h"
#import "AVMobileChromelessSlider.h"
#import "AVMobileChromelessControlsStyleSheet.h"

@interface AVMobileChromelessTimelineView : AVView <AVShadowCasting>

 {
    UILabel *_leadingLabel;
    UILabel *_trailingLabel;
    CGRect _sliderShadowPathRect;
    CGRect _leadingTextShadowPathRect;
    CGRect _trailingTextShadowPathRect;
    BOOL _drawsShadow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsShadow;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger labelPosition; // ivar: _labelPosition
@property (nonatomic) BOOL labelsAutoadjustWithSliderEmphasis; // ivar: _labelsAutoadjustWithSliderEmphasis
@property (retain, nonatomic) NSString *leadingTimeText; // ivar: _leadingTimeText
@property (readonly, nonatomic) AVMobileChromelessSlider *slider; // ivar: _slider
@property (nonatomic) BOOL sliderEmphasized; // ivar: _sliderEmphasized
@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet; // ivar: _styleSheet
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *trailingTimeText; // ivar: _trailingTimeText


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithStyleSheet:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_setUpShadowAppearance;
-(void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif