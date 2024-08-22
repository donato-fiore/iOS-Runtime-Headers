// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWFIGCAPTUREDEVICE_H
#define BWFIGCAPTUREDEVICE_H

@class NSDictionary, NSMutableArray, NSString, NSArray;
@protocol BWFigCaptureISPProcessingSessionDelegate;

#import <Foundation/Foundation.h>


@interface BWFigCaptureDevice : NSObject <BWFigCaptureISPProcessingSessionDelegate>

 {
    *OpaqueFigCaptureDevice _device;
    NSDictionary *_streamsByPortType;
    NSMutableArray *_activeProcessingSessions;
    BOOL _invalidated;
    os_unfair_lock_s _lock;
    unsigned int _ktraceCodePrefix;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) *OpaqueFigCaptureDevice figCaptureDevice;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL invalidated;
@property (readonly) NSArray *streams; // ivar: _streams
@property (readonly) Class superclass;
@property (readonly) NSDictionary *supportedProperties; // ivar: _supportedProperties
@property (readonly) NSArray *synchronizedStreamsGroups; // ivar: _synchronizedStreamsGroups


+(void)initialize;
-(id)copyISPProcessingSessionWithType:(int)arg0 error:(*int)arg1 ;
-(id)copyProperty:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)copyPropertyIfSupported:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)copyStreamForFigCaptureStream:(struct OpaqueFigCaptureStream *)arg0 error:(*int)arg1 ;
-(id)copyStreamWithPortType:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)copyStreamsWithPortTypes:(id)arg0 error:(*int)arg1 ;
-(id)copySyncGroupForFigCaptureSynchronizedStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup *)arg0 error:(*int)arg1 ;
-(id)copySynchronizedStreamsGroupForStreams:(id)arg0 error:(*int)arg1 ;
-(id)getProperty:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)getPropertyIfSupported:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)initWithFigCaptureDevice:(struct OpaqueFigCaptureDevice *)arg0 ;
-(int)registerForNotification:(struct __CFString *)arg0 listener:(*void)arg1 callback:(*unk)arg2 ;
-(int)relinquishControlOfStreams:(id)arg0 ;
-(int)requestControlOfStreams:(id)arg0 ;
-(int)setProperty:(struct __CFString *)arg0 value:(id)arg1 ;
-(int)setPropertyIfSupported:(struct __CFString *)arg0 value:(id)arg1 ;
-(int)unregisterForNotification:(struct __CFString *)arg0 listener:(*void)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)processingSessionHasBeenInvalidated:(id)arg0 ;


@end


#endif