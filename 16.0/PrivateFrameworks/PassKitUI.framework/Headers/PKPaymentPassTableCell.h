// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPASSTABLECELL_H
#define PKPAYMENTPASSTABLECELL_H

@class PSTableCell, PKPaymentApplication, UIActivityIndicatorView, UIImageView, CALayer, UIControl, NSString, UILabel, PKPaymentPass, PKPassFaceViewRendererState;
@protocol PKPaymentVerificationControllerDelegate, PKPaymentPassTableCellDelegate;


#import "PKPassView.h"
#import "PKPaymentVerificationController.h"

@interface PKPaymentPassTableCell : PSTableCell <PKPaymentVerificationControllerDelegate>

 {
    PKPaymentApplication *_paymentApplication;
    NSInteger _settingsContext;
    unsigned int _snapshotCounter;
    UIActivityIndicatorView *_snapshotSpinner;
    PKPassView *_passView;
    UIImageView *_cardSnapshotView;
    CALayer *_cardSnapshotMask;
    UIActivityIndicatorView *_spinner;
    BOOL _showState;
    PKPaymentVerificationController *_verificationController;
    BOOL _showActionButton;
    BOOL _showSpinner;
    BOOL _showSnapshotSpinner;
}


@property (readonly, nonatomic) UIControl *actionButton; // ivar: _actionButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentPassTableCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILabel *mainLabel; // ivar: _mainLabel
@property (readonly, retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (readonly, nonatomic) PKPassFaceViewRendererState *rendererState;
@property (nonatomic) BOOL showAddButton; // ivar: _showAddButton
@property (nonatomic) BOOL showSubTitle; // ivar: _showSubTitle
@property (readonly, nonatomic) UILabel *subTextLabel; // ivar: _subTextLabel
@property (readonly) Class superclass;


+(CGFloat)heightForCellWithMinimum:(CGFloat)arg0 hasSubTitle:(BOOL)arg1 ;
+(id)subTitleFont;
+(id)titleFont;
-(id)_stringForPassState:(NSUInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)pk_childrenForAppearance;
-(void)_addButtonPressed:(id)arg0 ;
-(void)_configureActionButtonWithTitle:(id)arg0 ;
-(void)_configureCellWithSpecifier:(id)arg0 ;
-(void)_configureMainLabelWithText:(id)arg0 ;
-(void)_configureSubTextLabelWithText:(id)arg0 textColor:(id)arg1 ;
-(void)_verifyButtonPressed:(id)arg0 ;
-(void)dealloc;
-(void)didChangeVerificationPresentation;
-(void)disableAddButton;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)prepareForReuse;
-(void)presentVerificationViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg0 ;
-(void)showActivitySpinner:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)updateSubtitle;
-(void)updateSubtitleForTransitProperties;


@end


#endif