// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PETEVENTSTRINGVALUEDPROPERTY_H
#define PETEVENTSTRINGVALUEDPROPERTY_H

@class NSSet;


#import "PETEventProperty.h"

@interface PETEventStringValuedProperty : PETEventProperty {
    NSSet *_possibleValues;
    BOOL _autoSanitizeValues;
}




-(BOOL)isValidValue:(id)arg0 ;
-(NSUInteger)cardinality;
-(id)_loggingKeyStringRepresentationForValue:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 possibleValues:(id)arg1 autoSanitizeValues:(BOOL)arg2 ;
-(id)longestValueString;
-(id)possibleValues;


@end


#endif