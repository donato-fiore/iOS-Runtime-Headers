// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALUSERDOMAINCONCEPT_H
#define HKMEDICALUSERDOMAINCONCEPT_H

@class NSDictionary, NSArray, NSString;
@protocol NSSecureCoding;


#import "HKUserDomainConcept.h"
#import "HKMedicalUserDomainConceptSemanticIdentifier.h"
#import "HKOntologyLocalizedEducationContent.h"

@interface HKMedicalUserDomainConcept : HKUserDomainConcept <NSSecureCoding>

 {
    os_unfair_lock_s _computedPropertyLock;
    NSDictionary *_preferredNameByLocaleIdentifier;
    HKMedicalUserDomainConceptSemanticIdentifier *_semanticIdentifier;
}


@property (readonly, copy, nonatomic) NSArray *categoryTypes; // ivar: _categoryTypes
@property (readonly, nonatomic) BOOL chartsBloodPressure;
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy, nonatomic) HKOntologyLocalizedEducationContent *educationContent;
@property (readonly, nonatomic) BOOL hidesOutOfRangeFilter;
@property (readonly, nonatomic) BOOL isLowUtility;
@property (readonly, copy, nonatomic) NSString *ontologyPreferredName;
@property (readonly, copy, nonatomic) NSDictionary *preferredNameByLocaleIdentifier;


+(BOOL)supportsSecureCoding;
+(id)_typeIdentifier;
-(BOOL)shouldForceNanoSyncUponInsertion;
-(BOOL)unitTesting_isIdentical:(id)arg0 ;
-(id)_dataDescription;
-(id)_deepCopy;
-(id)_generateSemanticIdentifier;
-(id)init;
-(id)initWithCategoryTypes:(id)arg0 ;
-(id)initWithCategoryTypes:(id)arg0 countryCode:(id)arg1 codingCollection:(id)arg2 propertyCollection:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCodingCollection:(id)arg0 linkCollection:(id)arg1 propertyCollection:(id)arg2 ;
-(id)medicalConceptByAddingCategoryType:(NSInteger)arg0 ;
-(id)medicalConceptByReplacingCategoryTypes:(id)arg0 ;
-(id)medicalConceptByReplacingCategoryTypes:(id)arg0 codingCollection:(id)arg1 linkCollection:(id)arg2 ;
-(id)semanticIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif