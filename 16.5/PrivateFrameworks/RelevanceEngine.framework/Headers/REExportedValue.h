// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REEXPORTEDVALUE_H
#define REEXPORTEDVALUE_H


#import <Foundation/Foundation.h>


@interface REExportedValue : NSObject



+(id)_exportedValueForTable:(id)arg0 ;
+(id)exportedValueForArray:(id)arg0 ;
+(id)exportedValueForDate:(id)arg0 ;
+(id)exportedValueForDictionary:(id)arg0 ;
+(id)exportedValueForNumber:(id)arg0 ;
+(id)exportedValueForObject:(id)arg0 ;
+(id)exportedValueForString:(id)arg0 ;
-(BOOL)shouldEncodeProperty:(id)arg0 ;
-(NSUInteger)propertyCount;
-(NSUInteger)type;
-(id)arrayValue;
-(id)dateValue;
-(id)dictionaryValue;
-(id)exportedValueForKey:(id)arg0 ;
-(id)numberValue;
-(id)objectValue;
-(id)stringValue;
-(void)enumerateValuesUsingBlock:(id)arg0 ;


@end


#endif