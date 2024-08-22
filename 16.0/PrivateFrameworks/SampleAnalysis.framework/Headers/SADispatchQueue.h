// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SADISPATCHQUEUE_H
#define SADISPATCHQUEUE_H

@class NSString, NSArray;
@protocol SASerializable;


#import "SARecipe.h"

@interface SADispatchQueue : SARecipe <SASerializable>

 {
    BOOL _hasConcurrentExecution;
    NSString *_dispatchQueueLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger dispatchQueueId;
@property (readonly) NSString *dispatchQueueLabel;
@property (readonly) NSArray *dispatchQueueStates;
@property (readonly) BOOL hasConcurrentExecution;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isConcurrent;
@property (readonly) Class superclass;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif