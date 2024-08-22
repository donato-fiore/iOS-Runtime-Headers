// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKORGANDONATIONCONFIRMUPDATEVIEWCONTROLLER_H
#define HKORGANDONATIONCONFIRMUPDATEVIEWCONTROLLER_H



#import "HKOrganDonationBaseViewController.h"
#import "HKOrganDonationConnectionManager.h"
#import "HKOrganDonationRegistrant.h"

@interface HKOrganDonationConfirmUpdateViewController : HKOrganDonationBaseViewController {
    HKOrganDonationConnectionManager *_connectionManager;
    HKOrganDonationRegistrant *_registrant;
}




-(id)bodyString;
-(id)bottomAnchoredButtons;
-(id)initWithRegistrant:(id)arg0 medicalIDData:(id)arg1 connectionManager:(id)arg2 ;
-(id)titleImage;
-(id)titleString;
-(void)buttonAtIndexTapped:(NSInteger)arg0 ;
-(void)updateButtonTapped:(id)arg0 ;


@end


#endif