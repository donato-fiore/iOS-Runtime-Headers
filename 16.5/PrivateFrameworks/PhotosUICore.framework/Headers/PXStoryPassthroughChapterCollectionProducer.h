// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPASSTHROUGHCHAPTERCOLLECTIONPRODUCER_H
#define PXSTORYPASSTHROUGHCHAPTERCOLLECTIONPRODUCER_H

@protocol PXStoryChapterCollectionProducer;

#import <Foundation/Foundation.h>

#import "PXStoryChapterCollectionManager.h"

@interface PXStoryPassthroughChapterCollectionProducer : NSObject <PXStoryChapterCollectionProducer>



@property (readonly, nonatomic) PXStoryChapterCollectionManager *chapterCollectionManager; // ivar: _chapterCollectionManager


-(id)init;
-(id)initWithChapterCollectionManager:(id)arg0 ;
-(id)requestChapterCollectionForKeyAsset:(id)arg0 curatedAssets:(id)arg1 options:(NSUInteger)arg2 resultHandler:(id)arg3 ;


@end


#endif