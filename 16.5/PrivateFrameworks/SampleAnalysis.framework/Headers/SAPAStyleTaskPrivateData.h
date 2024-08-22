// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAPASTYLETASKPRIVATEDATA_H
#define SAPASTYLETASKPRIVATEDATA_H

@class NSString;
@protocol SASerializable;

#import <Foundation/Foundation.h>


@interface SAPAStyleTaskPrivateData : NSObject <SASerializable>

 {
    int _suspend_count;
    int _faults;
    int _pageins;
    int _cow_faults;
    unsigned int _latency_qos;
    NSUInteger _task_size_bytes;
    NSUInteger _ss_flags;
    NSUInteger _terminatedThreadsUserTimeInNs;
    NSUInteger _terminatedThreadsSystemTimeInNs;
    NSUInteger _terminatedThreadsInstructions;
    NSUInteger _terminatedThreadsCycles;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif