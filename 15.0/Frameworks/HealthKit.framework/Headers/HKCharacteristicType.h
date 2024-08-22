// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCHARACTERISTICTYPE_H
#define HKCHARACTERISTICTYPE_H



#import "HKObjectType.h"

@interface HKCharacteristicType : HKObjectType



-(BOOL)_validateActivityMoveMode:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateBiologicalSex:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateBloodType:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateCardioFitnessMedicationsUse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateCharacteristic:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateDateOfBirth:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateFitzpatrickSkinType:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateQuantity:(id)arg0 withCompatibleUnit:(id)arg1 error:(*id)arg2 ;
-(BOOL)_validateWheelchairUse:(id)arg0 error:(*id)arg1 ;
-(id)_canoncialUnit;
-(id)_relatedCategoryType;
-(id)_relatedQuantityType;
-(id)_relatedSampleForInsertionWithCharacteristicValue:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif