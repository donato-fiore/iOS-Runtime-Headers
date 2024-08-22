// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXAPPLEMUSICIMAGELOADER_H
#define _PXAPPLEMUSICIMAGELOADER_H

@class NSURLSessionDataTask, NSError;
@protocol PXAudioAssetImageLoader;

#import <Foundation/Foundation.h>

#import "PXAppleMusicArtworkAsset.h"

@interface _PXAppleMusicImageLoader : NSObject <PXAudioAssetImageLoader>

 {
    NSURLSessionDataTask *_dataTask;
    id *_completionHandler;
}


@property (readonly, nonatomic) PXAppleMusicArtworkAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) *CGImage image; // ivar: _image
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


-(id)init;
-(id)initWithAsset:(id)arg0 targetSize:(struct CGSize )arg1 ;
-(void)_beginDownloadFromURL:(id)arg0 ;
-(void)_handleRequestData:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)_handleURLFetchFailureWithError:(id)arg0 ;
-(void)dealloc;
-(void)startWithCompletion:(id)arg0 ;


@end


#endif