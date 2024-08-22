// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERACLIPPOSTERFRAMEDOWNLOADOPERATION_H
#define HMCAMERACLIPPOSTERFRAMEDOWNLOADOPERATION_H

@class HMFOperation, NSString, NSURL;
@protocol HMFLogging, HMCameraClipFetchAssetContextOperationDataSource;


#import "HMCameraClip.h"
#import "HMCameraClipManager.h"
#import "HMCameraClipPosterFrame.h"

@interface HMCameraClipPosterFrameDownloadOperation : HMFOperation <HMFLogging>



@property (readonly) HMCameraClip *clip; // ivar: _clip
@property (readonly) HMCameraClipManager *clipManager; // ivar: _clipManager
@property (readonly) NSObject<HMCameraClipFetchAssetContextOperationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSURL *destinationFileURL; // ivar: _destinationFileURL
@property (copy) id *downloadPosterFrameCompletionBlock; // ivar: _downloadPosterFrameCompletionBlock
@property (readonly) NSUInteger hash;
@property (readonly) HMCameraClipPosterFrame *posterFrame; // ivar: _posterFrame
@property (readonly) Class superclass;


+(id)logCategory;
-(id)decryptData:(id)arg0 ;
-(id)downloadImageDataForAssetContext:(id)arg0 ;
-(id)fetchAssetContext;
-(id)fetchImageData;
-(id)initWithClipManager:(id)arg0 clip:(id)arg1 posterFrame:(id)arg2 ;
-(id)initWithClipManager:(id)arg0 clip:(id)arg1 posterFrame:(id)arg2 dataSource:(id)arg3 ;
-(id)logIdentifier;
-(id)writeImageData:(id)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)finishWithImageData:(id)arg0 ;
-(void)main;


@end


#endif