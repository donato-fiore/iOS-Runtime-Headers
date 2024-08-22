// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSCREENCAPTUREVIRTUALDISPLAY_H
#define VCSCREENCAPTUREVIRTUALDISPLAY_H

@class NSString;
@protocol VCScreenCaptureSource, VCScreenCaptureSourceDelegate;


#import "VCObject.h"

@interface VCScreenCaptureVirtualDisplay : VCObject <VCScreenCaptureSource>

 {
    NSObject<VCScreenCaptureSourceDelegate> *_delegate;
    *OpaqueFigVirtualDisplaySession _session;
    _VCScreenCaptureSourceContext _frameCallback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 screenCaptureSourceContext:(struct _VCScreenCaptureSourceContext *)arg1 ;
-(int)pauseScreenCapture:(BOOL)arg0 ;
-(int)setupCaptureSession:(id)arg0 ;
-(int)startScreenCaptureWithConfig:(id)arg0 ;
-(int)stopScreenCapture;
-(void)callbackWithEventString:(id)arg0 ;
-(void)dealloc;
-(void)finalize;
-(void)shouldClearScreen:(BOOL)arg0 ;


@end


#endif