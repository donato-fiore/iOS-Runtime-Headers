// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREINPUT_H
#define AVCAPTUREINPUT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVCaptureInputInternal.h"

@interface AVCaptureInput : NSObject {
    AVCaptureInputInternal *_inputInternal;
}


@property (readonly, nonatomic) NSArray *ports;


+(void)initialize;
-(id)initSubclass;
-(id)session;
-(id)videoDevice;
-(struct OpaqueCMClock *)clock;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)handleChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(id)arg0 ;
-(void)setSession:(id)arg0 ;


@end


#endif