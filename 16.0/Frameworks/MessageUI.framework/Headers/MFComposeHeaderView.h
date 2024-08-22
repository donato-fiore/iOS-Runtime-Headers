// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCOMPOSEHEADERVIEW_H
#define MFCOMPOSEHEADERVIEW_H

@class UIView, NSString;


#import "MFHeaderLabelView.h"

@interface MFComposeHeaderView : UIView {
    id *_delegate;
    UIView *_separator;
    UIView *_highlightBackgroundView;
}


@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) MFHeaderLabelView *labelView; // ivar: _labelView
@property (copy, nonatomic) NSString *navTitle; // ivar: _navTitle
@property (nonatomic) BOOL showsHighlightWhenTouched; // ivar: _showsHighlightWhenTouched


+(CGFloat)preferredHeight;
+(CGFloat)separatorHeight;
+(id)defaultFont;
+(id)defaultSeparatorColor;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)_shouldEmbedLabelInTextView;
-(id)_automationID;
-(id)_baseAttributes;
-(id)_highlightedBackgroundView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_contentRect;
-(struct CGRect )_exclusionRectForView:(id)arg0 alongEdge:(NSUInteger)arg1 ;
-(struct CGRect )titleLabelBaselineAlignmentRectForLabel:(id)arg0 ;
-(struct UIEdgeInsets )_recipientViewEdgeInsets;
-(void)handleTouchesEnded;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)refreshPreferredContentSize;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif