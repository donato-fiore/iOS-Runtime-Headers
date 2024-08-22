// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPASSACTIONWIDGETVIEW_H
#define PKPAYMENTPASSACTIONWIDGETVIEW_H

@class UIView, NSArray, NSString, PKAccount, PKFamilyMember, PKPaymentPass, PKPeerPaymentAccount;
@protocol PKPaymentPassActionWidgetViewDelegate;



@interface PKPaymentPassActionWidgetView : UIView {
    NSArray *_displayableWidgets;
    NSString *_phoneNumber;
    NSString *_website;
    NSString *_email;
    NSUInteger _widgetViewStyle;
    BOOL _usesAccessibilityLayout;
    NSUInteger _numberOfWidgetsPerRow;
}


@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (retain, nonatomic) PKFamilyMember *currentUser; // ivar: _currentUser
@property (weak, nonatomic) NSObject<PKPaymentPassActionWidgetViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount


-(BOOL)hasEnabledWidgets;
-(BOOL)hasSingleColumnLayout;
-(CGFloat)targetWidgetWidthForRowWithNumberOfWidgets:(NSUInteger)arg0 ;
-(CGFloat)targetWidgetWidthForRowWithNumberOfWidgets:(NSUInteger)arg0 rowBounds:(struct CGRect )arg1 ;
-(CGFloat)targetWidgetWidthForRowWithNumberOfWidgets:(NSUInteger)arg0 rowSize:(struct CGSize )arg1 ;
-(NSUInteger)numberOfRows;
-(NSUInteger)numberOfRowsWithWidgetsPerRow:(NSUInteger)arg0 ;
-(NSUInteger)numberOfWidgetsPerRowWithSize:(struct CGSize )arg0 ;
-(id)_createButtonForTitle:(id)arg0 image:(id)arg1 ;
-(id)_titleForAddMoneyWidgetForActions:(id)arg0 ;
-(id)initWithWidgetViewStyle:(NSUInteger)arg0 ;
-(struct CGRect )widgetBoundsForRowWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_determineWidgetContentWithAvailableWidgets;
-(void)cleanUpExistingWidgets;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateNumberOfWidgetsPerRow;
-(void)updateUseAccessibilityLayout;
-(void)updateWidgetsAccessibilityLayoutState;


@end


#endif