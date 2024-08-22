// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAASSETRESOURCEDATALOADER_H
#define PHAASSETRESOURCEDATALOADER_H

@class NSMutableSet, PHPhotoLibrary, NSString;
@protocol PHAAssetResourceDataLoading, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHAAssetResourceDataLoader : NSObject <PHAAssetResourceDataLoading>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activeDownloads;
    PHPhotoLibrary *_photoLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)dataLoaderWithDefaultConfigurationForPhotoLibrary:(id)arg0 ;
-(id)_firstLocallyAvailableAssetResourceFromAssetResources:(id)arg0 ;
-(id)_localFileURLForAssetResource:(id)arg0 error:(*id)arg1 ;
-(id)assetResourceFromAcceptableAssetResources:(id)arg0 options:(id)arg1 ;
-(id)init;
-(void)_inq_cancelAllDownloads;
-(void)_inq_downloadAssetResource:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)cancelAllDownloads;
-(void)requestDataForAssetResource:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif