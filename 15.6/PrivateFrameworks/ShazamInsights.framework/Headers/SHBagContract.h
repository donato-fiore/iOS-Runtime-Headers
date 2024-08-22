// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHBAGCONTRACT_H
#define SHBAGCONTRACT_H

@class NSString, NSMutableDictionary, AMSMutableBagKeySet, NSNumberFormatter;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface SHBagContract : NSObject

@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSString *baseDictionaryKey; // ivar: _baseDictionaryKey
@property (readonly, nonatomic) NSMutableDictionary *defaultValues; // ivar: _defaultValues
@property (readonly, nonatomic) AMSMutableBagKeySet *mutableBagKeySet; // ivar: _mutableBagKeySet
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
-(void)addBagKey:(id)arg0 valueType:(NSUInteger)arg1 ;
-(void)addBagKey:(id)arg0 valueType:(NSUInteger)arg1 defaultValue:(id)arg2 ;
-(void)loadBaseDictionary:(id)arg0 ;
-(void)registerBagKeySet;
-(void)unionBagKeySet:(id)arg0 ;


@end


#endif