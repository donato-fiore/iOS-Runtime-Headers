// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMONOGRAMVIEW_H
#define HUMONOGRAMVIEW_H

@class UIView, UIFont, NSArray, UILabel, NSString, UIColor;



@interface HUMonogramView : UIView

@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) UIEdgeInsets bubbleEdgeOutsets; // ivar: _bubbleEdgeOutsets
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSArray *labelLayoutConstraints; // ivar: _labelLayoutConstraints
@property (readonly, nonatomic) UILabel *monogramLabel; // ivar: _monogramLabel
@property (copy, nonatomic) NSString *monogramString;
@property (nonatomic) BOOL needsComputeLayoutMetrics; // ivar: _needsComputeLayoutMetrics
@property (nonatomic) NSUInteger style; // ivar: _style
@property (retain, nonatomic) UIColor *textColor;


+(NSUInteger)desiredStyleForString:(id)arg0 ;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_computeLayoutMetrics;
-(void)_setupBackgroundView:(struct CGRect )arg0 ;
-(void)_setupMonogramLabel:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setContentCompressionResistancePriority:(float)arg0 forAxis:(NSInteger)arg1 ;
-(void)setContentHuggingPriority:(float)arg0 forAxis:(NSInteger)arg1 ;


@end


#endif