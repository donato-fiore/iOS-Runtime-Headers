// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMAGEREQUEST_H
#define PHIMAGEREQUEST_H

@class NSURL, NSString, PLProgressFollower;
@protocol OS_dispatch_semaphore, PHImageRequestDelegate;


#import "PHMediaRequest.h"
#import "PHImageDecoderAsyncDecodeRequestHandle.h"
#import "PHImageResult.h"
#import "PHImageResourceChooser.h"
#import "PHImageRequestBehaviorSpec.h"
#import "PHImageDisplaySpec.h"

@interface PHImageRequest : PHMediaRequest {
    os_unfair_lock_s _lock;
    PHImageDecoderAsyncDecodeRequestHandle *_asyncDecodeRequestHandle;
    PHImageResult *_imageResult;
    PHImageResourceChooser *_chooser;
    BOOL _forceIgnoreCache;
    NSObject<OS_dispatch_semaphore> *_syncDownloadWaitSemaphore;
    NSURL *_configuredImageURL;
    NSString *_configuredImageUTI;
    NSInteger _configuredExifOrientation;
    PLProgressFollower *_progressFollower;
}


@property (retain, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec; // ivar: _behaviorSpec
@property (readonly, weak, nonatomic) NSObject<PHImageRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGSize desiredImageSize; // ivar: _desiredImageSize
@property (retain, nonatomic) PHImageDisplaySpec *displaySpec; // ivar: _displaySpec


-(BOOL)isNetworkAccessAllowed;
-(BOOL)isSynchronous;
-(NSInteger)downloadIntent;
-(NSInteger)downloadPriority;
-(id)description;
-(id)initWithRequestID:(int)arg0 requestIndex:(NSUInteger)arg1 contextType:(NSInteger)arg2 managerID:(NSUInteger)arg3 asset:(id)arg4 displaySpec:(id)arg5 behaviorSpec:(id)arg6 chooser:(id)arg7 delegate:(id)arg8 ;
-(void)_decodeImageConfiguredWithURL:(id)arg0 isPrimaryFormat:(BOOL)arg1 ;
-(void)cancel;
-(void)configureWithURL:(id)arg0 uniformTypeIdentifier:(id)arg1 exifOrientation:(int)arg2 ;
-(void)handleAvailabilityChangeForResource:(id)arg0 url:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)startRequest;


@end


#endif