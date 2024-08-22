// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLSTEPPERSEGMENTVIEW_H
#define HUQUICKCONTROLSTEPPERSEGMENTVIEW_H

@class UIView, NSString, UILabel, UIVisualEffectView;



@interface HUQuickControlStepperSegmentView : UIView

@property (nonatomic) NSUInteger controlSize; // ivar: _controlSize
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIView *highlightedOverlayView; // ivar: _highlightedOverlayView
@property (nonatomic) BOOL isSegmentViewHighlighted; // ivar: _isSegmentViewHighlighted
@property (nonatomic) NSUInteger orientation; // ivar: _orientation
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (nonatomic) NSUInteger segmentLocation; // ivar: _segmentLocation
@property (nonatomic) NSUInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIVisualEffectView *titleLabelEffectView; // ivar: _titleLabelEffectView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithStyle:(NSUInteger)arg0 orientation:(NSUInteger)arg1 controlSize:(NSUInteger)arg2 ;
-(void)_contentSizeCategoryDidChange;
-(void)_createTitleLabelIfNecessary;
-(void)_updateTitleLabel;
-(void)_updateUIHighlightedOverlayView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif