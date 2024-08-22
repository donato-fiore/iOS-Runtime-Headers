// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMCAMERAREVIEWADAPTER_H
#define CAMCAMERAREVIEWADAPTER_H

@class NSMutableArray, UIViewController<CAMCameraReviewViewController>, NSString;
@protocol CAMCameraCaptureDelegate;

#import <Foundation/Foundation.h>


@interface CAMCameraReviewAdapter : NSObject <CAMCameraCaptureDelegate>



@property (readonly, nonatomic) NSMutableArray *_pendingAssetsForReview; // ivar: __pendingAssetsForReview
@property (retain, nonatomic, getter=_cachedReviewViewController, setter=_setCachedReviewViewController:) UIViewController<CAMCameraReviewViewController> *cachedReviewViewController; // ivar: _cachedReviewViewController
@property (readonly, nonatomic) UIViewController<CAMCameraReviewViewController> *cameraReviewViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)reviewAssetForAVAsset:(id)arg0 audioMix:(id)arg1 properties:(id)arg2 ;
+(id)reviewAssetForLivePhoto:(id)arg0 withProperties:(id)arg1 ;
+(id)reviewAssetForPhoto:(id)arg0 withProperties:(id)arg1 ;
-(id)init;
-(void)cameraViewController:(id)arg0 didCaptureAVAsset:(id)arg1 andAudioMix:(id)arg2 withProperties:(id)arg3 error:(id)arg4 ;
-(void)cameraViewController:(id)arg0 didCaptureLivePhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3 ;
-(void)cameraViewController:(id)arg0 didCapturePhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3 ;


@end


#endif