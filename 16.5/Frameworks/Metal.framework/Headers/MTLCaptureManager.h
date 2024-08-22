// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLCAPTUREMANAGER_H
#define MTLCAPTUREMANAGER_H

@protocol MTLCaptureScope;

#import <Foundation/Foundation.h>


@interface MTLCaptureManager : NSObject

@property (retain) NSObject<MTLCaptureScope> *defaultCaptureScope; // ivar: _defaultCaptureScope
@property (readonly) BOOL isCapturing; // ivar: _isCapturing


+(id)sharedCaptureManager;
-(BOOL)startCaptureWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsDestination:(NSInteger)arg0 ;
-(id)newCaptureScopeWithCommandQueue:(id)arg0 ;
-(id)newCaptureScopeWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)startCaptureWithCommandQueue:(id)arg0 ;
-(void)startCaptureWithDevice:(id)arg0 ;
-(void)startCaptureWithScope:(id)arg0 ;
-(void)stopCapture;


@end


#endif