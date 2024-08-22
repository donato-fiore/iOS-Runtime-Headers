// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETEVENTFREEVALUEDPROPERTY_H
#define PETEVENTFREEVALUEDPROPERTY_H



#import "PETEventProperty.h"

@interface PETEventFreeValuedProperty : PETEventProperty



-(BOOL)isValidValue:(id)arg0 ;
-(NSUInteger)cardinality;
-(id)_loggingKeyStringRepresentationForValue:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 ;
-(id)longestValueString;
-(id)possibleValues;


@end


#endif