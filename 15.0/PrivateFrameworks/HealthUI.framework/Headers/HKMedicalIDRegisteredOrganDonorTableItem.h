// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMEDICALIDREGISTEREDORGANDONORTABLEITEM_H
#define HKMEDICALIDREGISTEREDORGANDONORTABLEITEM_H

@protocol HKMedicalIDRegisteredOrganDonorTableItemDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKOrganDonationCallToActionTableViewCell.h"

@interface HKMedicalIDRegisteredOrganDonorTableItem : HKEmergencyCardTableItem {
    NSInteger _organization;
}


@property (weak, nonatomic) NSObject<HKMedicalIDRegisteredOrganDonorTableItemDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HKOrganDonationCallToActionTableViewCell *notRegisteredCell; // ivar: _notRegisteredCell


-(BOOL)canEditRowAtIndex:(NSInteger)arg0 ;
-(BOOL)hasPresentableData;
-(BOOL)shouldHighlightRowAtIndex:(NSInteger)arg0 ;
-(id)initInEditMode:(BOOL)arg0 organDonationOrganization:(NSInteger)arg1 ;
-(id)organizationLogo;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)title;
-(id)titleForFooter;
-(struct UIEdgeInsets )separatorInset;
-(void)presentDonateLifeRegistrationSequence;
-(void)tableView:(id)arg0 didSelectRowAtIndex:(NSInteger)arg1 ;


@end


#endif