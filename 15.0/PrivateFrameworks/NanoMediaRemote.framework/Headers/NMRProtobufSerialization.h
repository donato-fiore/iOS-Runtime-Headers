// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRPROTOBUFSERIALIZATION_H
#define NMRPROTOBUFSERIALIZATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface NMRProtobufSerialization : NSObject {
    NSDictionary *_protobufKeyToDictionaryKeyMapping;
}


@property (copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping; // ivar: _dictionaryKeyToProtobufKeyMapping
@property (copy, nonatomic) id *dictionaryValueToProtobufValueTransformer; // ivar: _dictionaryValueToProtobufValueTransformer
@property (retain, nonatomic) Class protobufClass; // ivar: _protobufClass
@property (copy, nonatomic) id *protobufValueToDictionaryValueTransformer; // ivar: _protobufValueToDictionaryValueTransformer


-(id)dictionaryFromProtobuf:(id)arg0 ;
-(id)dictionaryFromProtobufData:(id)arg0 ;
-(id)protobufDataFromDictionary:(id)arg0 ;
-(id)protobufFromDictionary:(id)arg0 ;


@end


#endif