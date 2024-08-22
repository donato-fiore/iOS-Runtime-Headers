// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTALLOCATIONSRECORDER_H
#define DTALLOCATIONSRECORDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DTAllocationsRecorder : NSObject {
    *DTXSharedMemory _shmem;
    _CSTypeRef _trackingSymbolicator;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_serialEventQueue;
    *? _partialEvent;
    *? _fullEvent;
    unsigned int _partialSize;
    unsigned int _partialFilled;
    int _eventTotal;
    NSUInteger _bytesTotal;
    uint8_t _outstandingBytes;
    unsigned int _targetTask;
    int _stopCollection;
    map<unsigned long long, std::map<unsigned int, OAKeyFrame *>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::map<unsigned int, OAKeyFrame *>>>> _threadToKeyFramesMap;
}


@property (copy, nonatomic) id *bufferHandler; // ivar: _bufferHandler
@property (readonly) int eventCount;
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (nonatomic) BOOL readStackLogsUponAttach; // ivar: _readStackLogsUponAttach
@property (nonatomic) unsigned int sharedMemorySize; // ivar: _sharedMemorySize


+(BOOL)configureLocalLaunchEnvironment:(id)arg0 recordedEventsMask:(unsigned int)arg1 ;
+(id)_libraryPath;
+(id)serviceIdentifier;
+(int)currentVersion;
+(unsigned int)allEventsMask;
+(unsigned int)cppClassNamesMask;
+(unsigned int)mallocReallocFreeEventsMask;
+(unsigned int)retainReleaseAutoEventsMask;
+(unsigned int)vmEventsMask;
+(unsigned int)zombieEventsMask;
-(BOOL)_startWithError:(*id)arg0 ;
-(BOOL)startForProcessingBuffersWithError:(*id)arg0 ;
-(NSUInteger)_setupSharedMemoryInTask:(unsigned int)arg0 ;
-(id)init;
-(void)_endAndTossResources:(BOOL)arg0 ;
-(void)_processIncomingData;
-(void)addKeyFrame:(struct ? *)arg0 ;
-(void)cancel;
-(void)createFullEventFromDelta:(struct ? *)arg0 withEvent:(struct ? *)arg1 ;
-(void)dealloc;
-(void)processBufferMessage:(id)arg0 ;
-(void)startAttachingToTask:(unsigned int)arg0 recordedEventsMask:(unsigned int)arg1 errorHandler:(id)arg2 ;
-(void)stop;


@end


#endif