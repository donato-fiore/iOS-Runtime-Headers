// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPDEVICEPICKERLISTSECTIONCONTROLLER_H
#define PKPAYMENTSETUPDEVICEPICKERLISTSECTIONCONTROLLER_H

@class NSArray, UIImage, NSString, UICollectionViewCellRegistration;
@protocol PKPaymentSetupDevicePickerListSectionControllerDelegate;


#import "PKDynamicListSectionController.h"

@interface PKPaymentSetupDevicePickerListSectionController : PKDynamicListSectionController {
    NSArray *_items;
    UIImage *_cardImage;
    NSString *_title;
    NSString *_subtitle;
}


@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: cellRegistration
@property (weak, nonatomic) NSObject<PKPaymentSetupDevicePickerListSectionControllerDelegate> *delegate; // ivar: _delegate


-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)decorateListCell:(id)arg0 forRowItem:(id)arg1 ;
-(id)defaultListLayout;
-(id)initWithWebServices:(id)arg0 title:(id)arg1 subtitle:(id)arg2 image:(id)arg3 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)didSelectItem:(id)arg0 ;


@end


#endif