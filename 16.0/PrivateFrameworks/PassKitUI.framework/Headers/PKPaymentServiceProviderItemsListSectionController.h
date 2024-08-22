// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSERVICEPROVIDERITEMSLISTSECTIONCONTROLLER_H
#define PKPAYMENTSERVICEPROVIDERITEMSLISTSECTIONCONTROLLER_H

@class NSArray, PKDigitalIssuanceServiceProviderProduct, NSString, UIImage, UICollectionViewCellRegistration;
@protocol PKPaymentServiceProviderItemsListSectionControllerDelegate;


#import "PKDynamicListSectionController.h"

@interface PKPaymentServiceProviderItemsListSectionController : PKDynamicListSectionController {
    NSArray *_items;
    PKDigitalIssuanceServiceProviderProduct *_product;
    NSString *_currency;
}


@property (retain, nonatomic) UIImage *cardImage; // ivar: _cardImage
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: cellRegistration
@property (weak, nonatomic) NSObject<PKPaymentServiceProviderItemsListSectionControllerDelegate> *delegate; // ivar: _delegate


-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)defaultListLayout;
-(id)initWithIdentifier:(id)arg0 image:(id)arg1 serviceProviderProduct:(id)arg2 serviceProviderItems:(id)arg3 currency:(id)arg4 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)didSelectItem:(id)arg0 ;


@end


#endif