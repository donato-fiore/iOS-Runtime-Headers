// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBCOREAVVIDEOCAPTURESOURCEOBSERVER_H
#define WEBCOREAVVIDEOCAPTURESOURCEOBSERVER_H

@class NSString;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate;

#import <Foundation/Foundation.h>


@interface WebCoreAVVideoCaptureSourceObserver : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>

 {
    *void m_callback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCallback:(*void)arg0 ;
-(void)addNotificationObservers;
-(void)beginSessionInterrupted:(id)arg0 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)deviceConnectedDidChange:(id)arg0 ;
-(void)disconnect;
-(void)endSessionInterrupted:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeNotificationObservers;
-(void)sessionRuntimeError:(id)arg0 ;


@end


#endif