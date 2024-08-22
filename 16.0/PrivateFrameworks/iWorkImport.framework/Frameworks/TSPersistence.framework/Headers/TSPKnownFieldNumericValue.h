// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPKNOWNFIELDNUMERICVALUE_H
#define TSPKNOWNFIELDNUMERICVALUE_H

@class NSNumber;


#import "TSPKnownField.h"

@interface TSPKnownFieldNumericValue : TSPKnownField {
    NSNumber *_value;
}




-(id)debugDescription;
-(id)initSubclassWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 ;
-(id)initWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 ;
-(void)mergeToMessage:(struct Message *)arg0 reflection:(struct Reflection *)arg1 ;


@end


#endif