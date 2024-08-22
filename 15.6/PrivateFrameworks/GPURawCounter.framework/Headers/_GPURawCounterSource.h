// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GPURAWCOUNTERSOURCE_H
#define _GPURAWCOUNTERSOURCE_H

@class NSString, NSDictionary;
@protocol GPURawCounterSource, GPURawCounterSourceGroup;

#import <Foundation/Foundation.h>


@interface _GPURawCounterSource : NSObject <GPURawCounterSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name; // ivar: _name
@property (copy) NSDictionary *options; // ivar: _options
@property (readonly) NSObject<GPURawCounterSourceGroup> *sourceGroup; // ivar: _sourceGroup
@property (readonly) Class superclass;


-(BOOL)isEnabled;
-(BOOL)pollCountersAtBufferIndex:(unsigned int)arg0 withBlock:(id)arg1 ;
-(BOOL)postProcessRawDataWithRingBufferIndex:(unsigned int)arg0 source:(char *)arg1 sourceSize:(NSUInteger)arg2 sourceRead:(*NSUInteger)arg3 sourceWrite:(NSUInteger)arg4 output:(char *)arg5 outputSize:(NSUInteger)arg6 outputRead:(NSUInteger)arg7 outputWrite:(*NSUInteger)arg8 isLast:(BOOL)arg9 ;
-(BOOL)postProcessRawDataWithRingBufferSource:(char *)arg0 sourceSize:(NSUInteger)arg1 sourceRead:(*NSUInteger)arg2 sourceWrite:(NSUInteger)arg3 output:(char *)arg4 outputSize:(NSUInteger)arg5 outputRead:(NSUInteger)arg6 outputWrite:(*NSUInteger)arg7 isLast:(BOOL)arg8 ;
-(BOOL)postProcessRawDataWithSource:(char *)arg0 sourceSize:(NSUInteger)arg1 sourceRead:(*NSUInteger)arg2 output:(char *)arg3 outputSize:(NSUInteger)arg4 outputWritten:(*NSUInteger)arg5 isLast:(BOOL)arg6 ;
-(BOOL)requestCounters:(id)arg0 firstErrorIndex:(*NSUInteger)arg1 ;
-(BOOL)requestTriggers:(id)arg0 firstErrorIndex:(*NSUInteger)arg1 ;
-(BOOL)ringBufferInfoAtIndex:(unsigned int)arg0 base:(*char *)arg1 size:(*unsigned int)arg2 dataOffset:(*unsigned int)arg3 dataSize:(*unsigned int)arg4 ;
-(BOOL)setEnabled:(BOOL)arg0 ;
-(id)availableCounters;
-(id)availableTriggers;
-(id)initWithSourceGroup:(id)arg0 name:(id)arg1 ;
-(id)selectedCounters;
-(id)selectedTriggers;
-(unsigned int)drainRingBufferAtIndex:(unsigned int)arg0 dataSize:(unsigned int)arg1 ;
-(unsigned int)ringBufferNum;
-(void)dealloc;
-(void)resetRawDataPostProcessor;


@end


#endif