// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPKNOWNFIELDMESSAGE_H
#define TSPKNOWNFIELDMESSAGE_H



#import "TSPKnownFieldStringValue.h"
#import "TSPKnownFieldReferencesHelper.h"

@interface TSPKnownFieldMessage : TSPKnownFieldStringValue {
    TSPKnownFieldReferencesHelper *_referencesHelper;
}




-(id)debugDescription;
-(id)initWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif