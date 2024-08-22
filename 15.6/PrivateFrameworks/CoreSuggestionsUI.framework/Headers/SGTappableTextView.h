// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGTAPPABLETEXTVIEW_H
#define SGTAPPABLETEXTVIEW_H

@class UITextView, UIColor, NSAttributedString, NSMutableIndexSet;
@protocol SGTappableTextViewDelegate;



@interface SGTappableTextView : UITextView {
    UIColor *_activeRangeNormalColor;
    UIColor *_activeRangeHighlightedColor;
    NSAttributedString *_clientText;
    NSMutableIndexSet *_activeRanges;
    _NSRange _trackingRange;
    BOOL _trackingRangeHighlighted;
    BOOL _needsLabelUpdate;
    NSInteger _currentStyle;
}


@property (retain, nonatomic) UIColor *activeRangeHighlightedColor;
@property (retain, nonatomic) UIColor *activeRangeNormalColor;
@property (readonly, nonatomic) CGRect activeRangesRect;
@property (readonly, nonatomic) BOOL hasActiveRanges;
@property (weak, nonatomic) NSObject<SGTappableTextViewDelegate> *tappableDelegate; // ivar: _tappableDelegate


-(BOOL)isTracking;
-(NSUInteger)_characterIndexAtPoint:(struct CGPoint )arg0 ;
-(id)_textColor;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)text;
-(struct _NSRange )_rangeAtPoint:(struct CGPoint )arg0 ;
-(struct _NSRange )trackingRange;
-(void)_commonInit;
-(void)_highlightTrackingRange:(BOOL)arg0 ;
-(void)_setNeedUpdateLabel;
-(void)_updateAttributedTextColor;
-(void)_updateCurrentAppearance;
-(void)_updateLabelIfNeeded;
-(void)addActiveRange:(struct _NSRange )arg0 ;
-(void)layoutSubviews;
-(void)removeActiveRange:(struct _NSRange )arg0 ;
-(void)removeAllActiveRanges;
-(void)setAttributedText:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTrackingRange:(struct _NSRange )arg0 ;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif