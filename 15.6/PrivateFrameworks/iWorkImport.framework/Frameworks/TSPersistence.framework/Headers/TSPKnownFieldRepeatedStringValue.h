// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPKNOWNFIELDREPEATEDSTRINGVALUE_H
#define TSPKNOWNFIELDREPEATEDSTRINGVALUE_H



#import "TSPKnownField.h"

@interface TSPKnownFieldRepeatedStringValue : TSPKnownField {
    RepeatedField<std::string> _values;
}




-(id)initWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 ;
-(void)mergeToMessage:(struct Message *)arg0 reflection:(struct Reflection *)arg1 ;


@end


#endif