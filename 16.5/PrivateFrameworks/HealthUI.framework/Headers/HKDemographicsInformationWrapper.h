// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDEMOGRAPHICSINFORMATIONWRAPPER_H
#define HKDEMOGRAPHICSINFORMATIONWRAPPER_H

@class HKBiologicalSexObject, HKBloodTypeObject, HKCardioFitnessMedicationsUseObject, NSDateComponents, NSArray, NSString, HKFitzpatrickSkinTypeObject, HKQuantity, HKWheelchairUseObject;

#import <Foundation/Foundation.h>


@interface HKDemographicsInformationWrapper : NSObject

@property (copy, nonatomic) HKBiologicalSexObject *biologicalSexObject; // ivar: _biologicalSexObject
@property (copy, nonatomic) HKBloodTypeObject *bloodTypeObject; // ivar: _bloodTypeObject
@property (copy, nonatomic) HKCardioFitnessMedicationsUseObject *cardioFitnessMedicationsUseObject; // ivar: _cardioFitnessMedicationsUseObject
@property (copy, nonatomic) NSDateComponents *dateOfBirthComponents; // ivar: _dateOfBirthComponents
@property (copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) HKFitzpatrickSkinTypeObject *fitzpatrickSkinTypeObject; // ivar: _fitzpatrickSkinTypeObject
@property (copy, nonatomic) HKQuantity *heightQuantity; // ivar: _heightQuantity
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) NSString *middleName; // ivar: _middleName
@property (copy, nonatomic) NSArray *postalAddresses; // ivar: _postalAddresses
@property (copy, nonatomic) HKQuantity *weightQuantity; // ivar: _weightQuantity
@property (copy, nonatomic) HKWheelchairUseObject *wheelchairUseObject; // ivar: _wheelchairUseObject




@end


#endif