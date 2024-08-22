// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWFIGCAPTUREISPPROCESSINGSESSION_H
#define BWFIGCAPTUREISPPROCESSINGSESSION_H

@class NSDictionary, NSMutableDictionary;
@protocol BWFigCaptureISPProcessingSessionDelegate;

#import <Foundation/Foundation.h>


@interface BWFigCaptureISPProcessingSession : NSObject {
    *OpaqueFigCaptureISPProcessingSession _session;
    NSDictionary *_supportedProperties;
    NSMutableDictionary *_cachedProperties;
    id<BWFigCaptureISPProcessingSessionDelegate> *_delegate;
    BOOL _invalidated;
    os_unfair_lock_s _lock;
}


@property (nonatomic) NSObject<BWFigCaptureISPProcessingSessionDelegate> *delegate;
@property (readonly) *OpaqueFigCaptureISPProcessingSession figCaptureISPProcessingSession;
@property (readonly) NSDictionary *supportedProperties;


+(void)initialize;
-(id)copyProperty:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)getProperty:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)initWithFigCaptureISPProcessingSession:(struct OpaqueFigCaptureISPProcessingSession *)arg0 ;
-(int)flush;
-(int)invalidate;
-(int)prepareWithHandler:(id)arg0 ;
-(int)processBuffer:(struct __CVBuffer *)arg0 refCon:(*void)arg1 outputDescriptors:(struct ? *)arg2 numOutputDescriptors:(int)arg3 parameters:(id)arg4 ;
-(int)setProperty:(struct __CFString *)arg0 value:(id)arg1 ;
-(void)dealloc;


@end


#endif