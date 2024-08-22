// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWFIGCAPTURESTREAM_H
#define BWFIGCAPTURESTREAM_H

@class NSString, NSMutableDictionary, NSDictionary;
@protocol BWFigCaptureStreamStartStopDelegate;

#import <Foundation/Foundation.h>


@interface BWFigCaptureStream : NSObject {
    *OpaqueFigCaptureStream _stream;
    NSString *_portTypeShortString;
    NSMutableDictionary *_cachedProperties;
    BOOL _invalidated;
    os_unfair_lock_s _lock;
    unsigned int _ktraceCodePrefix;
}


@property (nonatomic) BOOL calibrationDataSent; // ivar: _calibrationDataSent
@property (readonly) *OpaqueFigCaptureStream figCaptureStream;
@property (readonly, nonatomic) NSString *portType; // ivar: _portType
@property (nonatomic) NSObject<BWFigCaptureStreamStartStopDelegate> *startStopDelegate; // ivar: _startStopDelegate
@property (readonly, nonatomic) BOOL streaming; // ivar: _streaming
@property (readonly, nonatomic) NSDictionary *supportedProperties; // ivar: _supportedProperties
@property (readonly, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(void)initialize;
-(id)copyProperty:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)copyPropertyIfSupported:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)getProperty:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)getPropertyIfSupported:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)initWithFigCaptureStream:(struct OpaqueFigCaptureStream *)arg0 ;
-(int)addAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 options:(id)arg1 ;
-(int)registerForNotification:(struct __CFString *)arg0 listener:(*void)arg1 callback:(*unk)arg2 ;
-(int)sendCommandProperty:(struct __CFString *)arg0 ;
-(int)setProperty:(struct __CFString *)arg0 value:(id)arg1 ;
-(int)setPropertyIfSupported:(struct __CFString *)arg0 value:(id)arg1 ;
-(int)start;
-(int)stop;
-(int)unregisterForNotification:(struct __CFString *)arg0 listener:(*void)arg1 ;
-(int)waitForNotificationBarrier;
-(void)dealloc;
-(void)flushPropertyCache;
-(void)invalidate;
-(void)synchronizedStreamsGroupDidStop;
-(void)synchronizedStreamsGroupWillStop;


@end


#endif