// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REEXPORTEDARRAYVALUE_H
#define REEXPORTEDARRAYVALUE_H

@class NSArray;


#import "REExportedValue.h"

@interface REExportedArrayValue : REExportedValue {
    NSArray *_array;
}




-(NSUInteger)propertyCount;
-(NSUInteger)type;
-(id)arrayValue;
-(id)exportedValueForKey:(id)arg0 ;
-(id)initWithArray:(id)arg0 ;
-(void)enumerateValuesUsingBlock:(id)arg0 ;


@end


#endif