// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPREFERENCECARDCELL_H
#define PKPAYMENTPREFERENCECARDCELL_H

@class UIActivityIndicatorView, UIStackView, UIView, UIColor, NSLayoutConstraint, NSArray, UISwitch, NSString, UIImageView, UILabel, PKPaymentPass, PKTransitBalanceModel;
@protocol PKPaymentPreferenceCardCellAccessoryViewDelegate;


#import "PKPaymentPreferenceCell.h"
#import "PKPassSnapshotter.h"

@interface PKPaymentPreferenceCardCell : PKPaymentPreferenceCell {
    BOOL _isRightToLeft;
    BOOL _editing;
    UIActivityIndicatorView *_activityIndicator;
    UIStackView *_labelStackView;
    UIView *_accessoryView;
    UIColor *_subTextLabelColorOverride;
    NSLayoutConstraint *_labelStackTrailingAnchorToCell;
    NSArray *_accessoryStackConstraints;
    unsigned int _snapshotCounter;
}


@property (nonatomic) NSInteger accessoryViewType; // ivar: _accessoryViewType
@property (readonly, nonatomic) UISwitch *actionSwitch; // ivar: _actionSwitch
@property (nonatomic, getter=isActivityIndicatorActive) BOOL activityIndicatorActive; // ivar: _activityIndicatorActive
@property (retain, nonatomic) UIColor *activityIndicatorColor; // ivar: _activityIndicatorColor
@property (copy, nonatomic) NSString *availabilityString; // ivar: _availabilityString
@property (readonly, nonatomic) UIImageView *cardArtView; // ivar: _cardArtView
@property (readonly, nonatomic) UILabel *censoredPANLabel; // ivar: _censoredPANLabel
@property (weak, nonatomic) NSObject<PKPaymentPreferenceCardCellAccessoryViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL dimCardArt; // ivar: _dimCardArt
@property (retain, nonatomic) UIColor *disabledMainLabelColor; // ivar: _disabledMainLabelColor
@property (retain, nonatomic) UIColor *disabledSubTextLabelColor; // ivar: _disabledSubTextLabelColor
@property (readonly, nonatomic) UILabel *displayLabel; // ivar: _displayLabel
@property (retain, nonatomic) UIColor *mainLabelColor; // ivar: _mainLabelColor
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPassSnapshotter *passSnapshotter; // ivar: _passSnapshotter
@property (nonatomic) BOOL showBillingAddress; // ivar: _showBillingAddress
@property (retain, nonatomic) UIColor *subTextLabelColor; // ivar: _subTextLabelColor
@property (copy, nonatomic) NSString *subTextOverrideString; // ivar: _subTextOverrideString
@property (retain, nonatomic) PKTransitBalanceModel *transitBalanceModel; // ivar: _transitBalanceModel


+(CGFloat)textOffset;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_performSwitchToggle:(id)arg0 ;
-(void)_setupConstraints;
-(void)_updateAccessoryView;
-(void)_updateCellContent;
-(void)_updateCensoredPANLabel;
-(void)_updateLabelTextColors;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)prepareForReuse;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHasError:(BOOL)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;


@end


#endif