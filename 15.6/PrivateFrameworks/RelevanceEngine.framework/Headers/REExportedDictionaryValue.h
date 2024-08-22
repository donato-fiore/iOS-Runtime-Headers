// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REEXPORTEDDICTIONARYVALUE_H
#define REEXPORTEDDICTIONARYVALUE_H

@class NSDictionary;


#import "REExportedValue.h"

@interface REExportedDictionaryValue : REExportedValue {
    NSDictionary *_dictionary;
}




-(NSUInteger)propertyCount;
-(NSUInteger)type;
-(id)dictionaryValue;
-(id)exportedValueForKey:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)enumerateValuesUsingBlock:(id)arg0 ;


@end


#endif