// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREVIDEOTHUMBNAILOUTPUT_H
#define AVCAPTUREVIDEOTHUMBNAILOUTPUT_H

@class NSArray;
@protocol AVCaptureVideoThumbnailContentsDelegate;


#import "AVCaptureOutput.h"
#import "AVCaptureVideoThumbnailOutputInternal.h"

@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput {
    AVCaptureVideoThumbnailOutputInternal *_internal;
}


@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) NSObject<AVCaptureVideoThumbnailContentsDelegate> *thumbnailContentsDelegate;
@property (nonatomic) CGSize thumbnailSize;


+(struct CGRect )contentsRectForFilterAtIndex:(NSUInteger)arg0 thumbnailSize:(struct CGSize )arg1 filterCount:(NSUInteger)arg2 ;
+(void)initialize;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(id)connectionMediaTypes;
-(id)init;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_signalInvalidationOfPropagatedContentsIfNecessary;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;


@end


#endif