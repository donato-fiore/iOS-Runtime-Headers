// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYCHAPTEREDCOMPOSABILITYRESULTS_H
#define PXSTORYCHAPTEREDCOMPOSABILITYRESULTS_H

@class NSString;
@protocol PXStoryComposabilityResults, PXStoryChapterCollection, PXDisplayAssetFetchResult;

#import <Foundation/Foundation.h>


@interface PXStoryChapteredComposabilityResults : NSObject <PXStoryComposabilityResults>



@property (readonly, nonatomic) NSObject<PXStoryChapterCollection> *chapterCollection; // ivar: _chapterCollection
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *displayAssets; // ivar: _displayAssets
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXStoryComposabilityResults> *originalResults; // ivar: _originalResults
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDisplayAssets:(id)arg0 originalResults:(id)arg1 chapterCollection:(id)arg2 ;
-(struct ? )composabilityScoresAtIndex:(NSUInteger)arg0 ;


@end


#endif