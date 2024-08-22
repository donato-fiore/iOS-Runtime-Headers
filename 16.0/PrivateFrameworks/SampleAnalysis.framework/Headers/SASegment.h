// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASEGMENT_H
#define SASEGMENT_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol SAJSONSerialization, SASerializable;

#import <Foundation/Foundation.h>

#import "SABinary.h"

@interface SASegment : NSObject <SAJSONSerialization, SASerializable>

 {
    NSMutableArray *_symbols;
    NSMutableDictionary *_inlineSymbols;
    NSUInteger _length;
    NSInteger _offsetIntoBinary;
    SABinary *_binary;
    NSMutableDictionary *_instructions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger length;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSInteger offsetIntoBinary;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)hasOffsetIntoBinary;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)initWithBinary:(id)arg0 name:(id)arg1 length:(NSUInteger)arg2 offsetIntoBinary:(NSInteger)arg3 ;
-(id)instructionAtOffsetIntoSegment:(NSUInteger)arg0 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif