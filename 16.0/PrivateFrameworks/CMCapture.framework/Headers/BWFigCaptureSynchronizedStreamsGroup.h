// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWFIGCAPTURESYNCHRONIZEDSTREAMSGROUP_H
#define BWFIGCAPTURESYNCHRONIZEDSTREAMSGROUP_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "BWFigCaptureStream.h"

@interface BWFigCaptureSynchronizedStreamsGroup : NSObject {
    *OpaqueFigCaptureSynchronizedStreamsGroup _syncGroup;
    BOOL _invalidated;
    NSArray *_activeStreams;
    os_unfair_lock_s _lock;
    unsigned int _ktraceCodePrefix;
}


@property (readonly) BOOL stopSupported; // ivar: _stopSupported
@property (readonly) NSArray *streams; // ivar: _streams
@property (readonly) NSDictionary *supportedProperties; // ivar: _supportedProperties
@property (readonly) BWFigCaptureStream *synchronizationMaster; // ivar: _synchronizationMaster


+(void)initialize;
-(id)activeStreams;
-(id)copyProperty:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)getProperty:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)initWithFigCaptureSynchronizedStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup *)arg0 captureDevice:(id)arg1 ;
-(int)setActiveStreams:(id)arg0 ;
-(int)setCameraControlsMasterStream:(id)arg0 ;
-(int)setMasterStream:(id)arg0 slaveConfigurationsByPortType:(id)arg1 ;
-(int)setProperty:(struct __CFString *)arg0 value:(id)arg1 ;
-(int)stop;
-(struct OpaqueFigCaptureSynchronizedStreamsGroup *)figCaptureSynchronizedStreamsGroup;
-(void)dealloc;
-(void)invalidate;


@end


#endif