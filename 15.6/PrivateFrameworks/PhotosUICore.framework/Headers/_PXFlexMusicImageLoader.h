// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXFLEXMUSICIMAGELOADER_H
#define _PXFLEXMUSICIMAGELOADER_H

@class NSError;
@protocol PXAudioAssetImageLoader, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXFlexMusicArtworkAsset.h"
#import "PXFlexMusicDownloader.h"

@interface _PXFlexMusicImageLoader : NSObject <PXAudioAssetImageLoader>



@property (readonly, nonatomic) PXFlexMusicArtworkAsset *artworkAsset; // ivar: _artworkAsset
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) PXFlexMusicDownloader *downloader; // ivar: _downloader
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) *CGImage image; // ivar: _image
@property (readonly, nonatomic) CGSize maxSize; // ivar: _maxSize
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedImageLoadingQueue; // ivar: _sharedImageLoadingQueue


-(id)initWithArtworkAsset:(id)arg0 maxSize:(struct CGSize )arg1 sharedImageLoadingQueue:(id)arg2 ;
-(void)_handleDownloadCompleted:(BOOL)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)startWithCompletion:(id)arg0 ;


@end


#endif