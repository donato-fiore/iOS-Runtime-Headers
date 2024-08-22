// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PETEVENTENUMMAPPEDPROPERTY_H
#define PETEVENTENUMMAPPEDPROPERTY_H

@class NSDictionary;


#import "PETEventProperty.h"

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}




-(BOOL)isValidValue:(id)arg0 ;
-(NSUInteger)cardinality;
-(id)_loggingKeyStringRepresentationForValue:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 enumMapping:(id)arg1 autoSanitizeValues:(BOOL)arg2 ;
-(id)longestValueString;
-(id)possibleValues;
-(struct _NSRange )validRange;


@end


#endif