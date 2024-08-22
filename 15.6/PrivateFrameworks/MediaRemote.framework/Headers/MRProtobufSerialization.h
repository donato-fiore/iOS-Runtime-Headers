// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRPROTOBUFSERIALIZATION_H
#define MRPROTOBUFSERIALIZATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MRProtobufSerialization : NSObject {
    NSDictionary *_protobufKeyToDictionaryKeyMapping;
}


@property (copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping; // ivar: _dictionaryKeyToProtobufKeyMapping
@property (copy, nonatomic) id *dictionaryValueToProtobufValueTransformer; // ivar: _dictionaryValueToProtobufValueTransformer
@property (retain, nonatomic) Class protobufClass; // ivar: _protobufClass
@property (copy, nonatomic) id *protobufValueToDictionaryValueTransformer; // ivar: _protobufValueToDictionaryValueTransformer


-(id)createDictionaryFromProtobuf:(id)arg0 ;
-(id)createProtobufFromDictionary:(id)arg0 ;


@end


#endif