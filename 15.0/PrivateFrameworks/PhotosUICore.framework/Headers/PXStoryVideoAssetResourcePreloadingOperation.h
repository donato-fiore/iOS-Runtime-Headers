// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYVIDEOASSETRESOURCEPRELOADINGOPERATION_H
#define PXSTORYVIDEOASSETRESOURCEPRELOADINGOPERATION_H

@class NSString;
@protocol PXChangeObserver;


#import "PXStoryDisplayAssetResourcePreloadingOperation.h"
#import "PXDisplayAssetVideoContentProvider.h"
#import "PXVideoSessionManager.h"

@interface PXStoryVideoAssetResourcePreloadingOperation : PXStoryDisplayAssetResourcePreloadingOperation <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? downloadTimeRange; // ivar: _downloadTimeRange
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isExporting; // ivar: _isExporting
@property (readonly) Class superclass;
@property (retain) PXDisplayAssetVideoContentProvider *videoContentProvider; // ivar: _videoContentProvider
@property (readonly, nonatomic) PXVideoSessionManager *videoSessionManager; // ivar: _videoSessionManager


-(id)diagnosticDescription;
-(id)initWithDisplayAssetResource:(id)arg0 mediaProvider:(id)arg1 ;
-(id)initWithVideoAssetResource:(id)arg0 mediaProvider:(id)arg1 downloadTimeRange:(struct ? )arg2 videoSessionManager:(id)arg3 isExporting:(BOOL)arg4 ;
-(void)cancel;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)px_start;


@end


#endif