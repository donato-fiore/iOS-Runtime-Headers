// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BAGCONFIG_H
#define BAGCONFIG_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, BAGResource;

#import <Foundation/Foundation.h>

#import "BAGResourceOptions.h"

@interface BAGConfig : NSObject <NSSecureCoding, BAGResource>



@property (retain, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger defaultKeyType; // ivar: _defaultKeyType
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BAGResourceOptions *options; // ivar: _options
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


+(BOOL)supportsSecureCoding;
-(BOOL)_checkIsBoolObject:(id)arg0 ;
-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)boolForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(BOOL)boolForKeyList:(id)arg0 ;
-(BOOL)boolForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_boolNumberFromString:(id)arg0 ;
-(id)_checkIsArrayObject:(id)arg0 typeBlock:(id)arg1 ;
-(id)_checkIsDataObject:(id)arg0 ;
-(id)_checkIsDictionaryObject:(id)arg0 typeBlock:(id)arg1 ;
-(id)_checkIsNumberObject:(id)arg0 ;
-(id)_checkIsStringObject:(id)arg0 ;
-(id)_traverseKeyList:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)arrayForKeyList:(id)arg0 ;
-(id)arrayForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)arrayOfDataForKey:(id)arg0 ;
-(id)arrayOfDataForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)arrayOfDataForKeyList:(id)arg0 ;
-(id)arrayOfDataForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)arrayOfNumbersForKey:(id)arg0 ;
-(id)arrayOfNumbersForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)arrayOfNumbersForKeyList:(id)arg0 ;
-(id)arrayOfNumbersForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)arrayOfStringsForKey:(id)arg0 ;
-(id)arrayOfStringsForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)arrayOfStringsForKeyList:(id)arg0 ;
-(id)arrayOfStringsForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)dataForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)dataForKeyList:(id)arg0 ;
-(id)dataForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)dictionaryForKeyList:(id)arg0 ;
-(id)dictionaryForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)dictionaryOfDataForKey:(id)arg0 ;
-(id)dictionaryOfDataForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)dictionaryOfDataForKeyList:(id)arg0 ;
-(id)dictionaryOfDataForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)dictionaryOfNumbersForKey:(id)arg0 ;
-(id)dictionaryOfNumbersForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)dictionaryOfNumbersForKeyList:(id)arg0 ;
-(id)dictionaryOfNumbersForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)dictionaryOfStringsForKey:(id)arg0 ;
-(id)dictionaryOfStringsForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)dictionaryOfStringsForKeyList:(id)arg0 ;
-(id)dictionaryOfStringsForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 options:(id)arg1 ;
-(id)numberForKey:(id)arg0 ;
-(id)numberForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)numberForKeyList:(id)arg0 ;
-(id)numberForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)stringForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 keyType:(NSUInteger)arg1 ;
-(id)stringForKeyList:(id)arg0 ;
-(id)stringForKeyList:(id)arg0 keyType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif