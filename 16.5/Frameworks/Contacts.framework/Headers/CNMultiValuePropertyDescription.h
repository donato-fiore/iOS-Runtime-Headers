// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMULTIVALUEPROPERTYDESCRIPTION_H
#define CNMULTIVALUEPROPERTYDESCRIPTION_H

@class NSArray;


#import "CNPropertyDescription.h"

@interface CNMultiValuePropertyDescription : CNPropertyDescription

@property (readonly, nonatomic) id *fromPlistTransform;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) BOOL isSingleValue;
@property (readonly, nonatomic) Class labeledValueClass;
@property (readonly, nonatomic) NSArray *managedLabels;
@property (readonly, nonatomic) id *plistTransform;
@property (readonly, nonatomic) NSArray *standardLabels;
@property (readonly, nonatomic) Class valueClass;


-(*void)ABMultiValueValueFromCNLabeledValueValue:(id)arg0 ;
-(*void)ABMultiValueValueFromCNLabeledValueValue:(id)arg0 gettersByABKeys:(id)arg1 ;
-(*void)ABMutableMultiValueForABPerson:(*void)arg0 ;
-(*void)ABValueFromCNValue:(id)arg0 ;
-(BOOL)applyABMultivalueValueBytes:(char *)arg0 length:(NSUInteger)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5 ;
-(BOOL)applyCNValue:(id)arg0 toArray:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 ;
-(BOOL)applyDictionary:(id)arg0 identifier:(id)arg1 legacyIdentifier:(int)arg2 label:(id)arg3 toCNMultivalueRepresentation:(id)arg4 ;
-(BOOL)isEqualIgnoringIdentifiersForContact:(id)arg0 other:(id)arg1 ;
-(BOOL)isValidMultiValueValue:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValidValue:(id)arg0 error:(*id)arg1 ;
-(id)CNLabeledValueLabelFromABMultiValueLabel:(struct __CFString *)arg0 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(*void)arg0 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(*void)arg0 destinationClass:(Class)arg1 settersByABKeys:(id)arg2 ;
-(id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)CNMutableValueForABMultivalue;
-(id)CNValueFromABValue:(*void)arg0 ;
-(id)localizedStringForLabel:(id)arg0 ;
-(id)standardLabelsWithOptions:(NSUInteger)arg0 ;
-(id)stringForIndexingForContact:(id)arg0 ;
-(id)valueWithResetIdentifiers:(id)arg0 ;
-(struct __CFString *)ABMultiValueLabelFromCNLabeledValueLabel:(id)arg0 ;
-(unsigned int)abPropertyType;
-(void)assertValueType:(id)arg0 ;


@end


#endif