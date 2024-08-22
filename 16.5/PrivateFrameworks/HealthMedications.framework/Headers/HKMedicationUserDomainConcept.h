// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONUSERDOMAINCONCEPT_H
#define HKMEDICATIONUSERDOMAINCONCEPT_H

@class HKUserDomainConcept, NSDictionary, NSNumber, NSArray, NSString, HKQuantity, HKOntologyLocalizedEducationContent;
@protocol NSCopying, NSSecureCoding;


#import "HKMedicationUserDomainConceptSemanticIdentifier.h"

@interface HKMedicationUserDomainConcept : HKUserDomainConcept <NSCopying, NSSecureCoding>

 {
    os_unfair_lock_s _computedPropertyLock;
    HKMedicationUserDomainConceptSemanticIdentifier *_semanticIdentifier;
    NSDictionary *_localizedOntologyPreferredNames;
    NSDictionary *_localizedOntologyBrandNames;
    NSDictionary *_localizedOntologyGenericNames;
    NSDictionary *_localizedOntologyManufacturedDoseForms;
    NSDictionary *_localizedOntologyBasicDoseForms;
    NSDictionary *_localizedOntologyLoggingUnitSingular;
    NSDictionary *_localizedOntologyLoggingUnitPlural;
    NSDictionary *_localizedComponentNames;
}


@property (readonly, nonatomic) NSNumber *freeTextMedicationFormCode;
@property (readonly, copy, nonatomic) NSArray *freeTextMedicationIngredientNamedStrengthQuantities;
@property (readonly, copy, nonatomic) NSNumber *freeTextMedicationLoggingUnitCode;
@property (readonly, copy, nonatomic) NSString *freeTextMedicationName;
@property (readonly, copy, nonatomic) HKQuantity *freeTextMedicationStrengthQuantity;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyBasicDoseForms;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyBrandNames;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyComponentNames;
@property (readonly, copy, nonatomic) HKOntologyLocalizedEducationContent *localizedOntologyEducationContent;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyGenericNames;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyLoggingUnitPlural;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyLoggingUnitSingular;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyManufacturedDoseForms;
@property (readonly, copy, nonatomic) NSDictionary *localizedOntologyPreferredNames;
@property (readonly, copy, nonatomic) NSString *unlocalizedQuantifiedUnitStrengthPreferredDisplayString;
@property (readonly, copy, nonatomic) NSString *userSpecifiedName;
@property (readonly, copy, nonatomic) NSString *userSpecifiedNotes;
@property (readonly, copy, nonatomic) NSString *userVisualizationConfigJSONString;


+(BOOL)supportsSecureCoding;
+(id)_typeIdentifier;
-(id)_dataDescription;
-(id)_deepCopy;
-(id)copyMedicationByUpdatingUserSpecifiedName:(id)arg0 userSpecifiedNotes:(id)arg1 userVisualizationConfigJSONString:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCodingCollection:(id)arg0 linkCollection:(id)arg1 propertyCollection:(id)arg2 ;
-(id)initWithCodingCollection:(id)arg0 supplementalPropertyCollection:(id)arg1 ;
-(id)initWithConceptIdentifier:(id)arg0 userSpecifiedName:(id)arg1 userSpecifiedNotes:(id)arg2 ;
-(id)initWithOntologyCoding:(id)arg0 userSpecifiedName:(id)arg1 userSpecifiedNotes:(id)arg2 ;
-(id)initWithOntologyCoding:(id)arg0 userSpecifiedName:(id)arg1 userSpecifiedNotes:(id)arg2 medicationVisualizationConfig:(id)arg3 freeTextProperties:(id)arg4 ;
-(id)semanticIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif