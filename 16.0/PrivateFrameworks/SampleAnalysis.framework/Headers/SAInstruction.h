// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINSTRUCTION_H
#define SAINSTRUCTION_H

@class NSString;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SABinary.h"
#import "SASegment.h"
#import "SASourceInfo.h"
#import "SASymbol.h"

@interface SAInstruction : NSObject <SASerializable>

 {
    id *_symbolOrSymbols;
    id *_sourceInfoOrSourceInfos;
    SABinary *_binary;
    SASegment *_segment;
    NSUInteger _offsetIntoSegment;
}


@property (readonly, weak) SABinary *binary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger offsetIntoBinary;
@property (readonly) NSUInteger offsetIntoSegment;
@property (readonly) NSUInteger offsetIntoTextSegment;
@property (readonly, weak) SASegment *segment;
@property (readonly) SASourceInfo *sourceInfo;
@property (readonly) Class superclass;
@property (readonly) SASymbol *symbol;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)hasOffsetIntoBinary;
-(BOOL)hasSourceInfo;
-(BOOL)symbolicateWithOptions:(NSUInteger)arg0 pid:(int)arg1 ;
-(NSUInteger)enumerateSymbols:(id)arg0 ;
-(NSUInteger)numSymbols;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif