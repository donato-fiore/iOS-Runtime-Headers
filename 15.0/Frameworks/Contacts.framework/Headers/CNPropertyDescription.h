// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPROPERTYDESCRIPTION_H
#define CNPROPERTYDESCRIPTION_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CNPropertyDescription : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *equivalentLabelSets;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) BOOL isNonnull; // ivar: _isNonnull
@property (readonly, nonatomic) BOOL isSingleValue;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) id *nilValue;
@property (readonly, nonatomic) SEL readSelector; // ivar: _readSelector
@property (readonly, nonatomic) Class valueClass;
@property (readonly, copy, nonatomic) id *valueForKeyTransform; // ivar: _valueForKeyTransform
@property (readonly, nonatomic) SEL writeSelector; // ivar: _writeSelector


+(BOOL)supportsSecureCoding;
+(id)os_log;
-(*void)ABValueForABPerson:(*void)arg0 ;
-(*void)ABValueFromCNValue:(id)arg0 ;
-(?)setABValue:(?)arg0 onABPersonerror;
-(BOOL)abPropertyID:(*int)arg0 ;
-(BOOL)applyABMultivalueValueBytes:(char *)arg0 length:(NSUInteger)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5 ;
-(BOOL)applyDictionary:(id)arg0 identifier:(id)arg1 legacyIdentifier:(int)arg2 label:(id)arg3 toCNMultivalueRepresentation:(id)arg4 ;
-(BOOL)canUnifyValue:(id)arg0 withValue:(id)arg1 ;
-(BOOL)isEqualIgnoringIdentifiersForContact:(id)arg0 other:(id)arg1 ;
-(BOOL)isValidValue:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValue:(id)arg0 equalToEmptyEquivalentOrValue:(id)arg1 ;
-(BOOL)isValue:(id)arg0 preferredToUnifiedValue:(id)arg1 ;
-(BOOL)setCNValue:(id)arg0 onABPerson:(*void)arg1 withDependentPropertiesContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)supportsABLazyLoading;
-(id)CNMutableValueForABMultivalue;
-(id)CNValueForContact:(id)arg0 ;
-(id)CNValueFromABBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)CNValueFromABValue:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 readSelector:(SEL)arg1 writeSelector:(SEL)arg2 ;
-(id)stringForIndexingForContact:(id)arg0 ;
-(id)unifiableLabelsForLabel:(id)arg0 ;
-(id)valueWithResetIdentifiers:(id)arg0 ;
-(void)assertValueType:(id)arg0 ;
-(void)copyFromABPerson:(*void)arg0 toContact:(id)arg1 ;
-(void)decodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)encodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetGuardianManagedValueOnContact:(id)arg0 ;
-(void)setCNValue:(id)arg0 onContact:(id)arg1 ;


@end


#endif