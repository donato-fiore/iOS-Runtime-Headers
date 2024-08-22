// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPCHOOSEPRODUCTLISTSECTIONCONTROLLER_H
#define PKPAYMENTSETUPCHOOSEPRODUCTLISTSECTIONCONTROLLER_H

@class NSArray, PKPaymentDigitalIssuanceMetadata, UIImage, UICollectionViewCellRegistration;
@protocol PKPaymentSetupChooseProductListSectionControllerDelegate;


#import "PKDynamicListSectionController.h"

@interface PKPaymentSetupChooseProductListSectionController : PKDynamicListSectionController {
    NSArray *_items;
    PKPaymentDigitalIssuanceMetadata *_digitalIssuanceMetadata;
}


@property (retain, nonatomic) UIImage *cardImage; // ivar: _cardImage
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: cellRegistration
@property (weak, nonatomic) NSObject<PKPaymentSetupChooseProductListSectionControllerDelegate> *delegate; // ivar: _delegate


-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)_generateItems;
-(id)defaultListLayout;
-(id)initWithIdentifier:(id)arg0 image:(id)arg1 digitalIssuanceMetadata:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)didSelectItem:(id)arg0 ;


@end


#endif