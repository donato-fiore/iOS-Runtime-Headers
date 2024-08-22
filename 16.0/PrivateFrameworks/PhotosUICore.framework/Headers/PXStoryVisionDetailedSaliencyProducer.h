// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYVISIONDETAILEDSALIENCYPRODUCER_H
#define PXSTORYVISIONDETAILEDSALIENCYPRODUCER_H

@protocol PXStoryDetailedSaliencyProducer, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXMediaProvider.h"

@interface PXStoryVisionDetailedSaliencyProducer : NSObject <PXStoryDetailedSaliencyProducer>



@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) NSInteger overlappingTileCount; // ivar: _overlappingTileCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)effectiveSaliencyAreasFromTiledVisionSaliencyAreas:(id)arg0 ;
-(id)init;
-(id)initWithMediaProvider:(id)arg0 ;
-(id)requestDetailedSaliencyForDisplayAssets:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;
-(void)_requestDetailedSaliencyForDisplayAssets:(id)arg0 options:(NSUInteger)arg1 progress:(id)arg2 resultHandler:(id)arg3 ;
-(void)requestWorkingImageForDisplayAsset:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif