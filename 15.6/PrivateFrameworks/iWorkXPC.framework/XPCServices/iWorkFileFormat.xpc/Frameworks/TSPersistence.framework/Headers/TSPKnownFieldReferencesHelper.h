// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPKNOWNFIELDREFERENCESHELPER_H
#define TSPKNOWNFIELDREFERENCESHELPER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "TSPLazyReferenceArray.h"

@interface TSPKnownFieldReferencesHelper : NSObject {
    RepeatedField<long long> _objectReferences;
    RepeatedField<long long> _dataReferences;
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
    NSArray *_allData;
}




-(id)initWithFieldDescriptor:(*void)arg0 message:(struct Message *)arg1 reflection:(struct Reflection *)arg2 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)processFieldDescriptor:(*void)arg0 message:(struct Message *)arg1 reflection:(struct Reflection *)arg2 ;
-(void)processFieldsFromMessage:(struct Message *)arg0 messageDescriptor:(*void)arg1 reflection:(struct Reflection *)arg2 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif