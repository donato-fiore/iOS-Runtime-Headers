// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMEMORYAUTOCURATIONPRODUCER_H
#define PXSTORYMEMORYAUTOCURATIONPRODUCER_H

@class NSCache, PHMemory;
@protocol PXStoryAutoCurationProducer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryMemoryAutoCurationProducer : NSObject <PXStoryAutoCurationProducer>

 {
    NSCache *_curationCache;
}


@property (readonly, nonatomic) PHMemory *memory; // ivar: _memory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_optionsForAssets:(id)arg0 ;
-(id)init;
-(id)initWithMemory:(id)arg0 ;
-(id)requestCuratedAssetsWithOptions:(NSUInteger)arg0 targetOverallDurationInfo:(struct ? )arg1 resultHandler:(id)arg2 ;
-(id)requestCurationLengthsWithOptions:(NSUInteger)arg0 allAssets:(id)arg1 curatedAssets:(id)arg2 resultHandler:(id)arg3 ;


@end


#endif