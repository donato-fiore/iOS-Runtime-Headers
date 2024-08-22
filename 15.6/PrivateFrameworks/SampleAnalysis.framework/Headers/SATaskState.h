// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATASKSTATE_H
#define SATASKSTATE_H

@class NSSet, NSString;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SATaskState : NSObject <SASerializable>

 {
    unsigned int _suspendCount;
    unsigned int _faults;
    unsigned int _pageins;
    unsigned int _cowFaults;
    unsigned int _latencyQos;
    SATimestamp *_startTimestamp;
    SATimestamp *_endTimestamp;
    NSUInteger _startSampleIndex;
    NSUInteger _endSampleIndex;
    NSUInteger _taskSizeInBytes;
    NSUInteger _terminatedThreadsUserTimeInNs;
    NSUInteger _terminatedThreadsSystemTimeInNs;
    NSUInteger _terminatedThreadsInstructions;
    NSUInteger _terminatedThreadsCycles;
    NSSet *_donatingUniquePids;
    NSUInteger _ssFlags;
}


@property (readonly) unsigned int cowFaults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *donatingUniquePids;
@property (readonly) NSUInteger endSampleIndex;
@property (readonly) SATimestamp *endTimestamp;
@property (readonly) unsigned int faults;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isBoosted;
@property (readonly) BOOL isDarwinBG;
@property (readonly) BOOL isDarwinExtBG;
@property (readonly) BOOL isDirty;
@property (readonly) BOOL isForeground;
@property (readonly) BOOL isFrozen;
@property (readonly) BOOL isImpDonor;
@property (readonly) BOOL isLiveImpDonor;
@property (readonly) BOOL isNonVisible;
@property (readonly) BOOL isPidSuspended;
@property (readonly) BOOL isSuppressed;
@property (readonly) BOOL isSuspended;
@property (readonly) BOOL isTaskResourceFlagged;
@property (readonly) BOOL isTerminatedSnapshot;
@property (readonly) BOOL isTimerThrottled;
@property (readonly) BOOL isVisible;
@property (readonly) unsigned int latencyQos;
@property (readonly) unsigned int pageins;
@property (readonly) NSUInteger ssFlags;
@property (readonly) NSUInteger startSampleIndex;
@property (readonly) SATimestamp *startTimestamp;
@property (readonly) Class superclass;
@property (readonly) unsigned int suspendCount;
@property (readonly) NSUInteger taskSizeInBytes;
@property (readonly) NSUInteger terminatedThreadsCpuTimeNs;
@property (readonly) NSUInteger terminatedThreadsCycles;
@property (readonly) NSUInteger terminatedThreadsInstructions;
@property (readonly) NSUInteger terminatedThreadsSystemTimeInNs;
@property (readonly) NSUInteger terminatedThreadsUserTimeInNs;
@property (readonly) BOOL wqExceededConstrainedThreadLimit;
@property (readonly) BOOL wqExceededTotalThreadLimit;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
+(id)stateWithStartTimestamp:(id)arg0 endTimestamp:(id)arg1 startSampleIndex:(NSUInteger)arg2 endSampleIndex:(NSUInteger)arg3 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sampleCountInSampleIndexRangeStart:(NSUInteger)arg0 end:(NSUInteger)arg1 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)initWithStartTimestamp:(id)arg0 endTimestamp:(id)arg1 startSampleIndex:(NSUInteger)arg2 endSampleIndex:(NSUInteger)arg3 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif