// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADISPATCHQUEUESTATE_H
#define SADISPATCHQUEUESTATE_H

@class NSString;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SAThread.h"
#import "SAThreadState.h"

@interface SADispatchQueueState : NSObject <SASerializable>

 {
    NSUInteger _threadStateIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) SAThread *thread; // ivar: _thread
@property (readonly) SAThreadState *threadState;
@property (readonly) NSUInteger threadStateIndex;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)initWithThread:(id)arg0 threadStateIndex:(NSUInteger)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif