// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNLABELEDVALUE_H
#define CNLABELEDVALUE_H

@class NSString, NSSet, NSDictionary, SGRecordId;
@protocol CNSuggested, NSCopying, NSSecureCoding, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNLabelValuePair.h"
#import "CNValueOrigin.h"

@interface CNLabeledValue : NSObject <CNSuggested, NSCopying, NSSecureCoding>

 {
    BOOL _isValueMutable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int iOSLegacyIdentifier; // ivar: _iOSLegacyIdentifier
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBirthday;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly) CNLabelValuePair *labelValuePair; // ivar: _labelValuePair
@property (copy, nonatomic) NSSet *linkedIdentifiers; // ivar: _linkedIdentifiers
@property (readonly, nonatomic) NSString *localizedAppName;
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (copy, nonatomic) NSDictionary *storeInfo; // ivar: _storeInfo
@property (readonly, nonatomic, getter=isSuggested) BOOL suggested;
@property (readonly, nonatomic) NSString *suggestionFoundInBundleId;
@property (readonly, nonatomic) SGRecordId *suggestionRecordId;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSObject<NSCopying><NSSecureCoding> *value;
@property (readonly, nonatomic) CNValueOrigin *valueOrigin;


+(BOOL)isArrayOfEntries:(id)arg0 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)Value:(SEL)arg0 ;
+(id)allValuesInArray:(id)arg0 ;
+(id)emptyEntries;
+(id)entriesByUnifyingEntryArrays:(id)arg0 forProperty:(id)arg1 ;
+(id)entryForIdentifier:(id)arg0 inArray:(id)arg1 ;
+(id)entryWithIdentifier:(id)arg0 label:(id)arg1 value:(id)arg2 ;
+(id)firstLabeledValueWithValue:(id)arg0 inArray:(id)arg1 ;
+(id)labelForIdentifier:(id)arg0 inArray:(id)arg1 ;
+(id)labeledValueWithIdentifier:(id)arg0 inArray:(id)arg1 ;
+(id)labeledValueWithLabel:(id)arg0 value:(id)arg1 ;
+(id)localizedStringForLabel:(id)arg0 ;
+(id)testMatchingIdentifier:(SEL)arg0 ;
+(id)valueForIdentifier:(id)arg0 inArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringIdentifiers:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 label:(id)arg1 value:(id)arg2 ;
-(id)initWithLabel:(id)arg0 value:(id)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg0 ;
-(id)labeledValueBySettingLabel:(id)arg0 value:(id)arg1 ;
-(id)labeledValueBySettingValue:(id)arg0 ;
-(id)primitiveInitWithIdentifier:(id)arg0 label:(id)arg1 value:(id)arg2 ;
-(void)addStoreInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif