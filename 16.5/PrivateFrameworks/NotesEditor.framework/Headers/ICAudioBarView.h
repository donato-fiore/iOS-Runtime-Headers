// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAUDIOBARVIEW_H
#define ICAUDIOBARVIEW_H

@class UIView, CALayer, UIButton, NSLayoutConstraint;



@interface ICAudioBarView : UIView

@property (retain, nonatomic) CALayer *borderLayer; // ivar: _borderLayer
@property (retain, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (nonatomic) CGFloat height;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (nonatomic) CGFloat oldWidth; // ivar: _oldWidth


-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(NSInteger)accessibilityContainerType;
-(id)accessibilityElements;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setupConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLayoutMargins;


@end


#endif