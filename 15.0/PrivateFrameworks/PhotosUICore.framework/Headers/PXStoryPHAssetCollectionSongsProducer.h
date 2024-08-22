// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPHASSETCOLLECTIONSONGSPRODUCER_H
#define PXSTORYPHASSETCOLLECTIONSONGSPRODUCER_H

@class PHAssetCollection;
@protocol PXStorySongsProducer, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "PXStoryPhotoKitMusicCurationProvider.h"

@interface PXStoryPHAssetCollectionSongsProducer : NSObject <PXStorySongsProducer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    PXStoryPhotoKitMusicCurationProvider *_curationProvider;
}


@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) NSUInteger logContext; // ivar: logContext


-(id)init;
-(id)initWithAssetCollection:(id)arg0 curationProvider:(id)arg1 ;
-(id)requestSongsWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;
-(void)_handleAppleMusicCapabilityStatus:(NSInteger)arg0 error:(id)arg1 curationResult:(id)arg2 resultHandler:(id)arg3 ;
-(void)_handleMusicCurationResult:(id)arg0 signpostID:(NSUInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif