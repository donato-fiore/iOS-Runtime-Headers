// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLEARNMORETEXTVIEW_H
#define ICLEARNMORETEXTVIEW_H

@class UITextView, NSString, UIViewController, UITapGestureRecognizer;



@interface ICLearnMoreTextView : UITextView

@property (copy, nonatomic) NSString *helpTopic; // ivar: _helpTopic
@property (nonatomic) BOOL isShowingLearnMore; // ivar: _isShowingLearnMore
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)_accessibilityHasTextOperations;
-(BOOL)accessibilityActivate;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityHint;
-(id)accessibilityValue;
-(id)attributedString:(id)arg0 withColor:(id)arg1 font:(id)arg2 ;
-(void)awakeFromNib;
-(void)dealloc;
-(void)didTapLearnMore;
-(void)resetTextView;
-(void)setAttributedText:(id)arg0 addLearnMore:(BOOL)arg1 ;
-(void)setAttributedText:(id)arg0 font:(id)arg1 lineSpacing:(CGFloat)arg2 addLearnMore:(BOOL)arg3 ;
-(void)setText:(id)arg0 font:(id)arg1 color:(id)arg2 lineSpacing:(CGFloat)arg3 addLearnMore:(BOOL)arg4 ;
-(void)sizeToFitWidthUsingHeightConstraint:(id)arg0 ;
-(void)tapGesture:(id)arg0 ;
-(void)updateForAccessibilityDarkerSystemColors;


@end


#endif