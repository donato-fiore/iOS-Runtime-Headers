// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPKNOWNFIELDREPEATEDNUMERICVALUE_H
#define TSPKNOWNFIELDREPEATEDNUMERICVALUE_H

@class NSMutableArray;


#import "TSPKnownField.h"

@interface TSPKnownFieldRepeatedNumericValue : TSPKnownField {
    NSMutableArray *_values;
}




-(id)debugDescription;
-(id)initSubclassWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 ;
-(id)initWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 ;
-(void)mergeToMessage:(struct Message *)arg0 reflection:(struct Reflection *)arg1 ;


@end


#endif