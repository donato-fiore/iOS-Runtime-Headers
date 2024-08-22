// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCONCEPT_H
#define HKCONCEPT_H

@class NSString, NSArray, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKConceptIdentifier.h"

@interface HKConcept : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) HKMedicalCoding *LOINCCoding;
@property (readonly, copy, nonatomic) HKMedicalCoding *RxNormCoding;
@property (readonly, copy, nonatomic) NSString *adHocCode;
@property (readonly, copy, nonatomic) NSArray *attributes; // ivar: _attributes
@property (readonly, copy, nonatomic) HKConcept *chartedWithConcept;
@property (readonly, nonatomic) BOOL chartsBloodPressure;
@property (readonly, copy, nonatomic) HKMedicalCoding *coding;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, copy, nonatomic) HKConcept *groupByConcept;
@property (readonly, nonatomic) BOOL hidesOutOfRangeFilter;
@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isAdHoc;
@property (readonly, nonatomic) BOOL isGeneric;
@property (readonly, nonatomic) BOOL isInMemory;
@property (readonly, nonatomic) BOOL isLowUtility;
@property (readonly, nonatomic) BOOL isNebulous;
@property (readonly, nonatomic) BOOL isUndefined; // ivar: _isUndefined
@property (readonly, copy, nonatomic) NSString *localizedPreferredName;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *preferredName;
@property (readonly, copy, nonatomic) NSArray *relationships; // ivar: _relationships
@property (readonly, nonatomic) BOOL relationshipsAreLoaded;
@property (readonly, copy, nonatomic) NSArray *synonyms;
@property (readonly, copy, nonatomic) NSSet *validInRegions;
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)conceptWithIdentifier:(id)arg0 attributes:(id)arg1 relationships:(id)arg2 ;
+(id)fallbackLanguagesForLocale:(id)arg0 ;
+(id)preferredLanguages;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_conceptsOfRelationshipType:(NSInteger)arg0 ;
-(id)_firstConceptOfRelationshipType:(NSInteger)arg0 ;
-(id)_sortedRelationships;
-(id)attributesForType:(NSInteger)arg0 ;
-(id)copyWithRelationships:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstAttributeForType:(NSInteger)arg0 ;
-(id)firstConceptOfRelationshipType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 attributes:(id)arg1 relationships:(id)arg2 version:(NSInteger)arg3 deleted:(BOOL)arg4 options:(NSUInteger)arg5 ;
-(id)stringsForAttributeType:(NSInteger)arg0 ;
-(id)treeDescription;
-(void)_appendSortedAttributeTypeCountDescriptionToString:(id)arg0 ;
-(void)_appendTreeDescriptionToString:(id)arg0 visitedStack:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAttributesWithType:(NSInteger)arg0 block:(id)arg1 ;
-(void)mutateBySettingRelationships:(id)arg0 ;


@end


#endif