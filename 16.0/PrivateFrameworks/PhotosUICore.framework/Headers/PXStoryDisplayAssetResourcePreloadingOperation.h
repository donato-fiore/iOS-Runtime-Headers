// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYDISPLAYASSETRESOURCEPRELOADINGOPERATION_H
#define PXSTORYDISPLAYASSETRESOURCEPRELOADINGOPERATION_H

@class NSError;
@protocol PXDisplayAsset, PXStoryResource;


#import "PXAsyncOperation.h"
#import "PXMediaProvider.h"

@interface PXStoryDisplayAssetResourcePreloadingOperation : PXAsyncOperation

@property (readonly, nonatomic) NSObject<PXDisplayAsset> *displayAsset; // ivar: _displayAsset
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (readonly, nonatomic) NSObject<PXStoryResource> *resource; // ivar: _resource
@property CGFloat startTime; // ivar: _startTime


-(id)init;
-(void)px_finishIfPossible;
-(void)px_start;


@end


#endif