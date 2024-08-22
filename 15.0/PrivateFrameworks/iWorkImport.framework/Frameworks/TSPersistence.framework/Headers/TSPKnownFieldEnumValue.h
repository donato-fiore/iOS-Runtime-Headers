// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPKNOWNFIELDENUMVALUE_H
#define TSPKNOWNFIELDENUMVALUE_H



#import "TSPKnownFieldNumericValue.h"

@interface TSPKnownFieldEnumValue : TSPKnownFieldNumericValue {
    shared_ptr<google::protobuf::UnknownFieldSet> _unknownFieldSet;
}




-(BOOL)hasUnknownValues;
-(id)debugDescription;
-(id)initWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 unknownFieldSet:(*void)arg4 ;
-(void)mergeToMessage:(struct Message *)arg0 reflection:(struct Reflection *)arg1 ;
-(void)mergeToUnknownFieldSet:(*void)arg0 ;


@end


#endif