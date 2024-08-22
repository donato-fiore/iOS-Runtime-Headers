// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly) BOOL isKernel;
@property (readonly) BOOL isRootFrame;
@property (readonly) BOOL isTruncatedBacktraceFrame;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) BOOL symbolicationOffByOne;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)initWithFrame:(id)arg0 andParent:(id)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif