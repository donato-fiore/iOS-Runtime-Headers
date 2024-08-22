// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYCOLLECTIONVIEWSECTIONCONTROLLER_H
#define PKAPPLYCOLLECTIONVIEWSECTIONCONTROLLER_H

@class PKDynamicProvisioningPageContent;
@protocol PKApplyCollectionViewSectionControllerDelegate;


#import "PKPaymentSetupListSectionController.h"
#import "PKApplyController.h"

@interface PKApplyCollectionViewSectionController : PKPaymentSetupListSectionController

@property (readonly, nonatomic) PKApplyController *controller; // ivar: _controller
@property (nonatomic) NSObject<PKApplyCollectionViewSectionControllerDelegate> *dynamicCollectionDelegate; // ivar: _dynamicCollectionDelegate
@property (retain, nonatomic) PKDynamicProvisioningPageContent *page; // ivar: _page


-(BOOL)_hasFooterContentForIdentifier:(id)arg0 ;
-(BOOL)_hasHeaderContentForIdentifier:(id)arg0 ;
-(BOOL)shouldHighlightItem:(id)arg0 ;
-(Class)footerViewClassForSectionIdentifier:(id)arg0 ;
-(Class)headerViewClassForSectionIdentifier:(id)arg0 ;
-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)cellRegistrationForItem:(id)arg0 ;
-(id)initWithController:(id)arg0 applyPage:(id)arg1 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)listLayoutConfigurationWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(void)configureCellForRegistration:(id)arg0 item:(id)arg1 ;
-(void)configureFooterView:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)configureHeaderView:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)didSelectItem:(id)arg0 ;


@end


#endif