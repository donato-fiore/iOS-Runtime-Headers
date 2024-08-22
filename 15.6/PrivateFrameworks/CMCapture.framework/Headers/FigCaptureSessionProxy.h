// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURESESSIONPROXY_H
#define FIGCAPTURESESSIONPROXY_H

@protocol FigCaptureSessionPreviewTapDelegate;

#import <Foundation/Foundation.h>


@interface FigCaptureSessionProxy : NSObject {
    *OpaqueFigCaptureSession _session;
    NSInteger _identifier;
    BOOL _previewTapOpened;
    id<FigCaptureSessionPreviewTapDelegate> *_previewTapDelegate;
}


@property (readonly) NSInteger identifier;


+(void)initialize;
-(id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 identifier:(NSInteger)arg1 ;
-(int)openPreviewTapWithDelegate:(id)arg0 ;
-(void)closePreviewTap;
-(void)dealloc;


@end


#endif