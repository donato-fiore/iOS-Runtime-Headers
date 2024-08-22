// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPASSTHROUGHAUTOCURATIONPRODUCER_H
#define PXSTORYPASSTHROUGHAUTOCURATIONPRODUCER_H

@protocol PXStoryAutoCurationProducer, PXDisplayAssetFetchResult;

#import <Foundation/Foundation.h>


@interface PXStoryPassthroughAutoCurationProducer : NSObject <PXStoryAutoCurationProducer>



@property (retain, nonatomic) NSObject<PXDisplayAssetFetchResult> *assets; // ivar: _assets


-(id)requestCuratedAssetsWithOptions:(NSUInteger)arg0 targetOverallDurationInfo:(struct ? )arg1 resultHandler:(id)arg2 ;
-(id)requestCurationLengthsWithOptions:(NSUInteger)arg0 allAssets:(id)arg1 curatedAssets:(id)arg2 resultHandler:(id)arg3 ;


@end


#endif