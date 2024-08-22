// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAFRAME_H
#define SAFRAME_H

@class NSString;
@protocol SAJSONSerialization, SASerializable;

#import <Foundation/Foundation.h>

#import "SABinaryLoadInfo.h"
#import "SAFrame.h"
#import "SAInstruction.h"

@interface SAFrame : NSObject <SAJSONSerialization, SASerializable>

 {
    ? _bools;
    NSUInteger _address;
    SABinaryLoadInfo *_binaryLoadInfo;
    SAFrame *_parentFrame;
    id *_childFrameOrFrames;
}


@property (readonly) NSUInteger address;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) SAInstruction *instruction;
@property (readonly) BOOL isFakeFrame;
@property (readonly) BOOL isKernel;
@property (readonly) BOOL isLeafyCallstackIsInAnotherCallTreeFrame;
@property (readonly) BOOL isRootFrame;
@property (readonly) BOOL isSwiftAsync;
@property (readonly) BOOL isSymbolicationOffByOne;
@property (readonly) BOOL isTruncatedBacktraceFrame;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
+(void)printFrameTree:(id)arg0 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)initCopyingFrame:(id)arg0 withParent:(id)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif