// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATHREAD_H
#define SATHREAD_H

@class NSString, NSArray;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"
#import "SAFrame.h"

@interface SAThread : NSObject <SASerializable>

 {
    BOOL _isGlobalForcedIdle;
    BOOL _isMainThread;
    SATimestamp *_creationTimestamp;
    SATimestamp *_exitTimestamp;
    SAFrame *_resampledLeafUserFrame;
}


@property (readonly) SATimestamp *creationTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) SATimestamp *exitTimestamp;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isGlobalForcedIdle;
@property (readonly) BOOL isMainThread;
@property (readonly) BOOL isProcessorIdleThread;
@property (readonly) Class superclass;
@property (readonly) NSUInteger threadId; // ivar: _threadId
@property (readonly) NSArray *threadStates; // ivar: _threadStates


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)indexOfFirstThreadStateOnOrAfterTime:(id)arg0 withSampleIndex:(BOOL)arg1 ;
-(NSUInteger)indexOfLastThreadStateOnOrBeforeTime:(id)arg0 withSampleIndex:(BOOL)arg1 ;
-(NSUInteger)sampleCountInTimestampRangeStart:(id)arg0 end:(id)arg1 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)firstThreadStateOnOrAfterTime:(id)arg0 withSampleIndex:(BOOL)arg1 ;
-(id)initWithId:(NSUInteger)arg0 ;
-(id)lastThreadStateOnOrBeforeTime:(id)arg0 withSampleIndex:(BOOL)arg1 ;
-(id)patchedStackForTruncatedStack:(id)arg0 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)enumerateThreadStatesBetweenStartTime:(id)arg0 endTime:(id)arg1 reverseOrder:(BOOL)arg2 withSampleIndex:(BOOL)arg3 block:(id)arg4 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif