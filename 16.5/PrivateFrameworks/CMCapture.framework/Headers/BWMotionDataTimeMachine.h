// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMOTIONDATATIMEMACHINE_H
#define BWMOTIONDATATIMEMACHINE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface BWMotionDataTimeMachine : NSObject {
    NSMutableArray *_cache;
    NSArray *_motionMetadataKeys;
    NSArray *_sampleBufferAttachmentKeys;
    NSUInteger _earliestAvailableMotionDataSerialNumber;
    NSUInteger _latestAvailableMotionDataSerialNumber;
    NSUInteger _capacity;
    BOOL _synchronizedSlaveMotionDataCachingEnabled;
    BOOL _cacheEntireMetadataDictionary;
    *OpaqueFigSimpleMutex _propertyMutex;
}


@property (readonly) NSUInteger earliestAvailableMotionDataSerialNumber;
@property (readonly) NSUInteger latestAvailableMotionDataSerialNumber;
@property (readonly) BOOL synchronizedSlaveMotionDataCachingEnabled;


+(void)initialize;
-(NSUInteger)addMotionDataToCacheForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)copyMotionDataForSerialNumber:(NSUInteger)arg0 ;
-(id)copyMotionDataForStartingSerialNumber:(NSUInteger)arg0 endingSerialNumber:(NSUInteger)arg1 ;
-(id)initWithCapacity:(NSUInteger)arg0 synchronizedSlaveMotionDataCachingEnabled:(BOOL)arg1 cacheEntireMetadataDictionary:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif