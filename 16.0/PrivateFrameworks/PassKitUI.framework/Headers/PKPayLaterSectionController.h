// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERSECTIONCONTROLLER_H
#define PKPAYLATERSECTIONCONTROLLER_H

@class PKPayLaterDynamicContentPage, PKAccount;
@protocol PKPayLaterSectionControllerDelegate, PKPayLaterViewControllerDelegate;


#import "PKPaymentSetupListSectionController.h"

@interface PKPayLaterSectionController : PKPaymentSetupListSectionController

@property (weak, nonatomic) NSObject<PKPayLaterSectionControllerDelegate> *dynamicCollectionDelegate; // ivar: _dynamicCollectionDelegate
@property (readonly, nonatomic) PKPayLaterDynamicContentPage *dynamicContentPage; // ivar: _dynamicContentPage
@property (retain, nonatomic) PKAccount *payLaterAccount; // ivar: _payLaterAccount
@property (readonly, nonatomic) NSObject<PKPayLaterViewControllerDelegate> *viewControllerDelegate; // ivar: _viewControllerDelegate


-(BOOL)_hasFooterContentForIdentifier:(id)arg0 ;
-(BOOL)_hasHeaderContentForIdentifier:(id)arg0 ;
-(BOOL)shouldHighlightItem:(id)arg0 ;
-(CGFloat)headerViewHeight;
-(Class)footerViewClassForSectionIdentifier:(id)arg0 ;
-(Class)headerViewClassForSectionIdentifier:(id)arg0 ;
-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)cellRegistrationForItem:(id)arg0 ;
-(id)footerContentForSectionIdentifier:(id)arg0 ;
-(id)initWithPayLaterAccount:(id)arg0 dynamicContentPage:(id)arg1 viewControllerDelegate:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)listLayoutConfigurationWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(void)configureCellForRegistration:(id)arg0 item:(id)arg1 ;
-(void)configureFooterView:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)configureHeaderView:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)didSelectItem:(id)arg0 ;
-(void)didTapHyperLink:(id)arg0 ;


@end


#endif