// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYIMAGEASSETRESOURCEPRELOADINGOPERATION_H
#define PXSTORYIMAGEASSETRESOURCEPRELOADINGOPERATION_H

@protocol OS_dispatch_group;


#import "PXStoryDisplayAssetResourcePreloadingOperation.h"

@interface PXStoryImageAssetResourcePreloadingOperation : PXStoryDisplayAssetResourcePreloadingOperation

@property CGFloat fractionComplete; // ivar: _fractionComplete
@property NSInteger imageRequestID; // ivar: _imageRequestID
@property (retain) NSObject<OS_dispatch_group> *loadingGroup; // ivar: _loadingGroup
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


+(id)_resultHandlingQueue;
-(id)diagnosticDescription;
-(id)initWithDisplayAssetResource:(id)arg0 mediaProvider:(id)arg1 ;
-(id)initWithDisplayAssetResource:(id)arg0 targetSize:(struct CGSize )arg1 mediaProvider:(id)arg2 ;
-(void)_handleImageLoadingResultWithImage:(struct CGImage *)arg0 info:(id)arg1 ;
-(void)cancel;
-(void)px_start;


@end


#endif