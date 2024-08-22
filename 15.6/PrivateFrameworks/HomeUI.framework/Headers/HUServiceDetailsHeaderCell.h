// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSERVICEDETAILSHEADERCELL_H
#define HUSERVICEDETAILSHEADERCELL_H

@class UITableViewCell, NSLayoutConstraint, UIButton, UIActivityIndicatorView, NSString, NSArray, HFItem, UITextView, UILabel, UIStackView;
@protocol HUCellProtocol, HUResizableCellDelegate;



@interface HUServiceDetailsHeaderCell : UITableViewCell <HUCellProtocol>



@property (retain, nonatomic) NSLayoutConstraint *actionBottomConstraint; // ivar: _actionBottomConstraint
@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner; // ivar: _checkingForUpdateSpinner
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *hiddenMessageTextViewConstraints; // ivar: _hiddenMessageTextViewConstraints
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) NSLayoutConstraint *messageBottomConstraint; // ivar: _messageBottomConstraint
@property (retain, nonatomic) UITextView *messageTextView; // ivar: _messageTextView
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate; // ivar: _resizingDelegate
@property (retain, nonatomic) NSLayoutConstraint *spinnerBottomConstraint; // ivar: _spinnerBottomConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIStackView *titleSpinnerStackView; // ivar: _titleSpinnerStackView
@property (retain, nonatomic) NSArray *visibleMessageTextViewConstraints; // ivar: _visibleMessageTextViewConstraints


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configureConstraints;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)_updateErrorLabelConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif