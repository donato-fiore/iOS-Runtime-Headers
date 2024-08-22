// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDSRCSTREAM_H
#define ASDSRCSTREAM_H

@class NSArray;
@protocol OS_dispatch_queue;


#import "ASDStream.h"
#import "ASDAudioDevice.h"

@interface ASDSRCStream : ASDStream {
    ASDAudioDevice *_owningDevice;
    unique_ptr<ASDSRCStreamHelper, std::default_delete<ASDSRCStreamHelper>> _streamHelper;
    NSObject<OS_dispatch_queue> *_srcQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    BOOL _isRunning;
    NSInteger _maximumFramesPerIOCycle;
    NSInteger _ioReferenceCount;
}


@property (readonly, nonatomic) NSInteger maximumFramesPerIOCycle;
@property (copy, nonatomic) NSArray *underlyingStreams; // ivar: _underlyingStreams


-(BOOL)_allocateStreamingResources;
-(BOOL)changePhysicalFormat:(id)arg0 ;
-(id)initWithDirection:(unsigned int)arg0 withPlugin:(id)arg1 ;
-(id)initWithOwningDevice:(id)arg0 underlyingStreams:(id)arg1 direction:(unsigned int)arg2 plugin:(id)arg3 ;
-(id)readInputBlock:(SEL)arg0 ;
-(id)writeMixBlock:(SEL)arg0 ;
-(void)_deallocateStreamingResources;
-(void)_updateLatency;
-(void)_updateMaximumFramesPerIOCycle;
-(void)startStream;
-(void)stopStream;
-(void)updateLatency;


@end


#endif