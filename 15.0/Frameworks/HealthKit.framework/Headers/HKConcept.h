// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCONCEPT_H
#define HKCONCEPT_H

@class NSArray, NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKMedicalCoding.h"
#import "HKConceptAttribute.h"
#import "HKConcept.h"
#import "HKConceptIdentifier.h"

@interface HKConcept : NSObject <NSSecureCoding>

 {
    NSArray *_relationships;
}


@property (readonly, copy, nonatomic) HKMedicalCoding *LOINCCode;
@property (readonly, copy, nonatomic) HKMedicalCoding *RxNormCoding;
@property (readonly, copy, nonatomic) HKConceptAttribute *adHocCode;
@property (readonly, copy, nonatomic) NSArray *attributes; // ivar: _attributes
@property (readonly, copy, nonatomic) HKConcept *boSS;
@property (readonly, copy, nonatomic) NSArray *brandNames;
@property (readonly, copy, nonatomic) HKConcept *chartedWithConcept;
@property (readonly, nonatomic) BOOL chartsBloodPressure;
@property (readonly, copy, nonatomic) HKMedicalCoding *coding;
@property (readonly, copy, nonatomic) HKConcept *form;
@property (readonly, copy, nonatomic) HKConcept *groupByConcept;
@property (readonly, nonatomic) BOOL hidesOutOfRangeFilter;
@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isAdHoc;
@property (readonly, nonatomic) BOOL isInMemory;
@property (readonly, nonatomic) BOOL isLowUtility;
@property (readonly, nonatomic) BOOL isNebulous;
@property (readonly, nonatomic) BOOL isUndefined; // ivar: _isUndefined
@property (readonly, copy, nonatomic) HKConceptAttribute *labEducationalContent;
@property (readonly, copy, nonatomic) NSString *localizedPreferredName;
@property (readonly, copy, nonatomic) NSArray *modifiers;
@property (copy, nonatomic) NSString *nodeName; // ivar: _nodeName
@property (readonly, copy, nonatomic) NSString *patientEducationExcerpt;
@property (readonly, copy, nonatomic) NSString *preferredName;
@property (readonly, copy, nonatomic) NSArray *relationships;
@property (readonly, nonatomic) BOOL relationshipsAreLoaded; // ivar: _relationshipsAreLoaded
@property (readonly, copy, nonatomic) HKConcept *route;
@property (readonly, copy, nonatomic) HKConcept *strength;
@property (readonly, copy, nonatomic) NSArray *synonyms;
@property (readonly, copy, nonatomic) HKConcept *tradeName;
@property (readonly, copy, nonatomic) NSSet *validInRegions;
@property (readonly, nonatomic) NSInteger version;


+(BOOL)supportsSecureCoding;
+(id)_conceptWithIdentifier:(id)arg0 attributes:(id)arg1 ;
+(id)conceptWithIdentifier:(id)arg0 attributes:(id)arg1 relationships:(id)arg2 ;
+(id)fallbackLanguagesForLocale:(id)arg0 ;
+(id)preferredLanguages;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_conceptsOfRelationshipType:(NSInteger)arg0 ;
-(id)_firstConceptOfRelationshipType:(NSInteger)arg0 ;
-(id)attributesForType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstAttributeForType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 attributes:(id)arg1 relationships:(id)arg2 relationshipsAreLoaded:(BOOL)arg3 ;
-(id)stringsForAttributeType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAttributesWithType:(NSInteger)arg0 block:(id)arg1 ;


@end


#endif