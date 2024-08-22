// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCONTACTPICKER_H
#define HKEMERGENCYCONTACTPICKER_H

@class NSString, UIViewController;
@protocol CNContactPickerDelegate, HKEmergencyContactPickerDelegate;

#import <Foundation/Foundation.h>


@interface HKEmergencyContactPicker : NSObject <CNContactPickerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKEmergencyContactPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSecondaryProfile; // ivar: _isSecondaryProfile
@property (retain, nonatomic) UIViewController *owningViewController; // ivar: _owningViewController
@property (readonly) Class superclass;


-(id)_meContactIdentifier;
-(id)initWithOwningViewController:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)presentEmergencyContactPickerForMedicalIDData:(id)arg0 ;


@end


#endif