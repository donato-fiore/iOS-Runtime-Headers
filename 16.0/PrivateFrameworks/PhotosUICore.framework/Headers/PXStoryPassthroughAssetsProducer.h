// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPASSTHROUGHASSETSPRODUCER_H
#define PXSTORYPASSTHROUGHASSETSPRODUCER_H

@protocol PXStoryAssetsProducer;

#import <Foundation/Foundation.h>

#import "PXAssetsDataSourceManager.h"

@interface PXStoryPassthroughAssetsProducer : NSObject <PXStoryAssetsProducer>



@property (readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager; // ivar: _assetsDataSourceManager


-(id)init;
-(id)initWithAssetsDataSourceManager:(id)arg0 ;
-(id)requestAssetsWithOptions:(NSUInteger)arg0 storyQueue:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif