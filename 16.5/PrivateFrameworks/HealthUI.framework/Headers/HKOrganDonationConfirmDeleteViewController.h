// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKORGANDONATIONCONFIRMDELETEVIEWCONTROLLER_H
#define HKORGANDONATIONCONFIRMDELETEVIEWCONTROLLER_H



#import "HKOrganDonationBaseViewController.h"
#import "HKOrganDonationConnectionManager.h"

@interface HKOrganDonationConfirmDeleteViewController : HKOrganDonationBaseViewController {
    HKOrganDonationConnectionManager *_connectionManager;
}




-(id)bodyString;
-(id)bottomAnchoredButtons;
-(id)initWithConnectionManager:(id)arg0 medicalIDData:(id)arg1 ;
-(id)titleImage;
-(id)titleString;
-(void)buttonAtIndexTapped:(NSInteger)arg0 ;
-(void)deleteButtonTapped:(id)arg0 ;


@end


#endif