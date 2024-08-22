// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSTARKCONTACTADDRESSPROPERTYCELL_H
#define CNSTARKCONTACTADDRESSPROPERTYCELL_H

@class NSLayoutConstraint, NSString;
@protocol CNStarkActionViewDelegate;


#import "CNPropertyPostalAddressCell.h"
#import "CNStarkActionView.h"

@interface CNStarkContactAddressPropertyCell : CNPropertyPostalAddressCell <CNStarkActionViewDelegate>



@property (readonly, nonatomic) CNStarkActionView *actionView; // ivar: _actionView
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint; // ivar: _contentViewBottomAnchorConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint; // ivar: _labelViewFirstBaselineAnchorConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint; // ivar: _valueViewFirstBaselineAnchorConstraint


-(BOOL)shouldShowStar;
-(BOOL)supportsTintColorValue;
-(BOOL)supportsValueColorUsesLabelColor;
-(id)constantConstraints;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)variableConstraints;
-(void)_cnui_applyContactStyle;
-(void)actionViewTapped:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)performDefaultAction;
-(void)setSeparatorStyle:(NSInteger)arg0 ;
-(void)updateTransportButtons;


@end


#endif