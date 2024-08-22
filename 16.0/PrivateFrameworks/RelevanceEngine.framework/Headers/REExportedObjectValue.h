// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REEXPORTEDOBJECTVALUE_H
#define REEXPORTEDOBJECTVALUE_H



#import "REExportedValue.h"

@interface REExportedObjectValue : REExportedValue {
    id *_object;
    BOOL _allowsEncoding;
}




-(BOOL)shouldEncodeProperty:(id)arg0 ;
-(NSUInteger)propertyCount;
-(NSUInteger)type;
-(id)exportedValueForKey:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)objectValue;
-(void)enumerateValuesUsingBlock:(id)arg0 ;


@end


#endif