// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHBAGCONTRACT_H
#define SHBAGCONTRACT_H

@class AMSBag, NSString, NSDictionary, NSMutableDictionary, NSNumberFormatter;

#import <Foundation/Foundation.h>


@interface SHBagContract : NSObject

@property (readonly, nonatomic) AMSBag *bag; // ivar: _bag
@property (readonly, copy, nonatomic) NSString *baseDictionaryKey; // ivar: _baseDictionaryKey
@property (readonly, nonatomic) NSDictionary *defaultValues;
@property (readonly, nonatomic) NSMutableDictionary *mutableDefaultValues; // ivar: _mutableDefaultValues
@property (readonly, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (nonatomic) BOOL throwOnError; // ivar: _throwOnError


-(BOOL)booleanBackedByStringForKey:(id)arg0 ;
-(BOOL)booleanForKey:(id)arg0 ;
-(CGFloat)doubleBackedByStringForKey:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(NSInteger)integerBackedByStringForKey:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(id)defaultValueForKey:(id)arg0 ;
-(id)fullyQualifiedKey:(id)arg0 ;
-(id)initWithBaseDictionaryKey:(id)arg0 bag:(id)arg1 ;
-(id)initWithBaseDictionaryKey:(id)arg0 profile:(id)arg1 profileVersion:(id)arg2 ;
-(id)numberFromString:(id)arg0 forKey:(id)arg1 ;
-(id)stringForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 bagValue:(id)arg1 ;
-(void)addBagKey:(id)arg0 defaultValue:(id)arg1 ;
-(void)loadBaseDictionary:(id)arg0 ;


@end


#endif