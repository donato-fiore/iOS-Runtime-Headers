// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSTARKCONTACTPROPERTYCELL_H
#define CNSTARKCONTACTPROPERTYCELL_H

@class NSLayoutConstraint, NSString;
@protocol CNStarkActionViewDelegate;


#import "CNPropertyPhoneNumberCell.h"
#import "CNStarkActionView.h"

@interface CNStarkContactPropertyCell : CNPropertyPhoneNumberCell <CNStarkActionViewDelegate>



@property (readonly, nonatomic) CNStarkActionView *actionView1; // ivar: _actionView1
@property (readonly, nonatomic) CNStarkActionView *actionView2; // ivar: _actionView2
@property (nonatomic) BOOL allowsFocus; // ivar: _allowsFocus
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint; // ivar: _contentViewBottomAnchorConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint; // ivar: _labelViewFirstBaselineAnchorConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint; // ivar: _valueViewFirstBaselineAnchorConstraint


+(BOOL)wantsHorizontalLayout;
+(CGFloat)minimumContentHeight;
+(CGFloat)valueLabelFirstBaselineAnchorConstraintConstant;
-(BOOL)allowsCellSelection;
-(BOOL)canBecomeFocused;
-(BOOL)shouldShowStar;
-(BOOL)supportsTintColorValue;
-(BOOL)supportsValueColorUsesLabelColor;
-(NSInteger)transportTypeForActionType:(id)arg0 ;
-(id)constantConstraints;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)variableConstraints;
-(void)_cnui_applyContactStyle;
-(void)actionViewTapped:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)performActionForMessage;
-(void)performDefaultAction;
-(void)setSeparatorStyle:(NSInteger)arg0 ;
-(void)updateTransportButtons;


@end


#endif