// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPKNOWNFIELDSTRINGVALUE_H
#define TSPKNOWNFIELDSTRINGVALUE_H



#import "TSPKnownField.h"

@interface TSPKnownFieldStringValue : TSPKnownField {
    basic_string<char, std::char_traits<char>, std::allocator<char>> _value;
}




-(id)debugDescription;
-(id)initWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 ;
-(void)mergeToMessage:(struct Message *)arg0 reflection:(struct Reflection *)arg1 ;


@end


#endif