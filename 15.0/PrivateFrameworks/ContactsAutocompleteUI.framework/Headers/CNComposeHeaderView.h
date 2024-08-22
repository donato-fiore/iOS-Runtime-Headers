// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCOMPOSEHEADERVIEW_H
#define CNCOMPOSEHEADERVIEW_H

@class UIView, UILabel, NSString;
@protocol CNComposeHeaderViewDelegate;


#import "CNComposeHeaderLabelView.h"

@interface CNComposeHeaderView : UIView

@property (retain, nonatomic) UILabel *composeFieldInfoLabel; // ivar: _composeFieldInfoLabel
@property (copy, nonatomic) NSString *composeFieldInfoText; // ivar: _composeFieldInfoText
@property (weak, nonatomic) NSObject<CNComposeHeaderViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *highlightedBackgroundView; // ivar: _highlightedBackgroundView
@property (weak, nonatomic) NSObject<CNComposeHeaderViewDelegate> *internalDelegate; // ivar: _internalDelegate
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) CNComposeHeaderLabelView *labelView; // ivar: _labelView
@property (copy, nonatomic) NSString *navTitle; // ivar: _navTitle
@property (retain, nonatomic) UIView *separator; // ivar: _separator
@property (nonatomic) NSDirectionalEdgeInsets separatorDirectionalEdgeInsets; // ivar: _separatorDirectionalEdgeInsets
@property (nonatomic) BOOL showsHighlightWhenTouched; // ivar: _showsHighlightWhenTouched


+(CGFloat)preferredHeight;
+(id)defaultFont;
+(id)defaultSeparatorColor;
+(id)supplimentalMessageFont;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)_shouldEmbedLabelInTextView;
-(CGFloat)_additionalContentHeight;
-(id)_automationID;
-(id)_baseAttributes;
-(id)headerViewDelegates;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_contentRect;
-(struct CGRect )_exclusionRectForView:(id)arg0 alongEdge:(NSUInteger)arg1 ;
-(struct CGRect )titleLabelBaselineAlignmentRectForLabel:(id)arg0 ;
-(struct UIEdgeInsets )_recipientViewEdgeInsets;
-(void)_notifyDelegateOfSizeChange;
-(void)createComposeFieldInfoLabelIfNeeded;
-(void)handleTouchesEnded;
-(void)layoutComposeFieldInfoLabelWithContentRect:(struct CGRect )arg0 labelRect:(struct CGRect )arg1 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)refreshPreferredContentSize;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif