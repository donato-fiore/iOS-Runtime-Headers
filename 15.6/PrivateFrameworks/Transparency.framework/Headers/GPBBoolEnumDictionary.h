// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBBOOLENUMDICTIONARY_H
#define GPBBOOLENUMDICTIONARY_H

@protocol GPBDictionaryInternalsProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "GPBMessage.h"

@interface GPBBoolEnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>

 {
    GPBMessage *_autocreator;
    int _values;
    BOOL _valueSet;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) *unk validationFunc; // ivar: _validationFunc


-(BOOL)getEnum:(*int)arg0 forKey:(BOOL)arg1 ;
-(BOOL)getRawValue:(*int)arg0 forKey:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)computeSerializedSizeAsField:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithValidationFunction:(*unk)arg0 ;
-(id)initWithValidationFunction:(*unk)arg0 capacity:(NSUInteger)arg1 ;
-(id)initWithValidationFunction:(*unk)arg0 rawValues:(*int)arg1 forKeys:(*BOOL)arg2 count:(NSUInteger)arg3 ;
-(id)serializedDataForUnknownValue:(int)arg0 forKey:(*unk)arg1 keyDataType:(BOOL)arg2 ;
-(void)addRawEntriesFromDictionary:(id)arg0 ;
-(void)enumerateForTextFormat:(id)arg0 ;
-(void)enumerateKeysAndEnumsUsingBlock:(id)arg0 ;
-(void)enumerateKeysAndRawValuesUsingBlock:(id)arg0 ;
-(void)removeAll;
-(void)removeEnumForKey:(BOOL)arg0 ;
-(void)setEnum:(int)arg0 forKey:(BOOL)arg1 ;
-(void)setGPBGenericValue:(*unk)arg0 forGPBGenericValueKey:(BOOL)arg1 ;
-(void)setRawValue:(int)arg0 forKey:(BOOL)arg1 ;
-(void)writeToCodedOutputStream:(id)arg0 asField:(id)arg1 ;


@end


#endif