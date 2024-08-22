// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKORGANDONATIONBASEVIEWCONTROLLER_H
#define HKORGANDONATIONBASEVIEWCONTROLLER_H

@class NSString, _HKMedicalIDData;


#import "HKTitledBuddyViewController.h"

@interface HKOrganDonationBaseViewController : HKTitledBuddyViewController

@property (retain, nonatomic) NSString *completionButtonTitle; // ivar: _completionButtonTitle
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData; // ivar: _medicalIDData
@property (copy, nonatomic) id *registrationCompletionHandler; // ivar: _registrationCompletionHandler


-(id)initWithMedicalIDData:(id)arg0 ;


@end


#endif