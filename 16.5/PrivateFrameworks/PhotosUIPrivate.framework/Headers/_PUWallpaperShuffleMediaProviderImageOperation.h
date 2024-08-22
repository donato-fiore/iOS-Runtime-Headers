// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PUWALLPAPERSHUFFLEMEDIAPROVIDERIMAGEOPERATION_H
#define _PUWALLPAPERSHUFFLEMEDIAPROVIDERIMAGEOPERATION_H

@class PXAsyncOperation, NUBufferRenderRequest, NSError, PXImageRequestDescriptor, PXCGImage;


#import "PUWallpaperShuffleSegmentationLoadingOperation.h"

@interface _PUWallpaperShuffleMediaProviderImageOperation : PXAsyncOperation {
    NUBufferRenderRequest *_renderRequest;
}


@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) PXImageRequestDescriptor *requestDescriptor; // ivar: _requestDescriptor
@property (readonly, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) PXCGImage *resultImage; // ivar: _resultImage
@property (readonly, nonatomic) PUWallpaperShuffleSegmentationLoadingOperation *segmentationLoadingOperation; // ivar: _segmentationLoadingOperation


-(id)initWithSegmentationOperation:(id)arg0 requestDescriptor:(id)arg1 resultHandler:(id)arg2 ;
-(void)_handleRenderResponse:(id)arg0 ;
-(void)cancel;
-(void)px_start;


@end


#endif