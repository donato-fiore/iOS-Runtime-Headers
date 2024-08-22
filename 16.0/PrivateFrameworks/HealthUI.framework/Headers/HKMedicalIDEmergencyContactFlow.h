// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALIDEMERGENCYCONTACTFLOW_H
#define HKMEDICALIDEMERGENCYCONTACTFLOW_H

@class _HKMedicalIDData, _HKEmergencyContact, NSArray, UIViewController;
@protocol HKEmergencyContactPickerDelegate, HKEmergencyContactRelationshipPickerDelegate, HKMedicalIDEmergencyContactFlowDelegate;

#import <Foundation/Foundation.h>

#import "HKEmergencyContactPicker.h"
#import "HKCoreTelephonyUtilities.h"

@interface HKMedicalIDEmergencyContactFlow : NSObject <HKEmergencyContactPickerDelegate, HKEmergencyContactRelationshipPickerDelegate>

 {
    _HKMedicalIDData *_medicalIDData;
    _HKEmergencyContact *_selectedContact;
    HKEmergencyContactPicker *_contactPicker;
    NSArray *_suggestedContacts;
}


@property (retain, nonatomic) HKCoreTelephonyUtilities *coreTelephonyUtilities; // ivar: _coreTelephonyUtilities
@property (weak, nonatomic) NSObject<HKMedicalIDEmergencyContactFlowDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isSecondaryProfile; // ivar: _isSecondaryProfile
@property (retain, nonatomic) UIViewController *owningViewController; // ivar: _owningViewController
@property (nonatomic) BOOL shouldShowSuggestedContacts; // ivar: _shouldShowSuggestedContacts


-(id)initWithPresentingViewController:(id)arg0 forMedicalIDData:(id)arg1 ;
-(void)_didSelectContact:(id)arg0 property:(id)arg1 ;
-(void)emergencyContactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)emergencyContactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)emergencyContactRelationshipPicker:(id)arg0 didChooseRelationshipNamed:(id)arg1 ;
-(void)emergencyContactRelationshipPickerDidCancel:(id)arg0 ;
-(void)presentEmergencyContactFlow;
-(void)setSuggestedContacts:(id)arg0 ;


@end


#endif