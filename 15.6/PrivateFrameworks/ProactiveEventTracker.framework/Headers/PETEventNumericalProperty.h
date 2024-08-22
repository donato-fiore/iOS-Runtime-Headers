// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETEVENTNUMERICALPROPERTY_H
#define PETEVENTNUMERICALPROPERTY_H



#import "PETEventProperty.h"

@interface PETEventNumericalProperty : PETEventProperty {
    _NSRange _validRange;
    BOOL _clampValues;
}




-(BOOL)isValidValue:(id)arg0 ;
-(NSUInteger)_unsignedIntegerValueForNumericValue:(id)arg0 ;
-(NSUInteger)cardinality;
-(id)_loggingKeyStringRepresentationForValue:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 range:(struct _NSRange )arg1 clampValues:(BOOL)arg2 ;
-(id)longestValueString;
-(struct _NSRange )validRange;


@end


#endif