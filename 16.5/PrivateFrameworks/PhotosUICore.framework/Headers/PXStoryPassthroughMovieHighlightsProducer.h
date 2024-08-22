// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPASSTHROUGHMOVIEHIGHLIGHTSPRODUCER_H
#define PXSTORYPASSTHROUGHMOVIEHIGHLIGHTSPRODUCER_H

@protocol PXStoryMovieHighlightsProducer;

#import <Foundation/Foundation.h>


@interface PXStoryPassthroughMovieHighlightsProducer : NSObject <PXStoryMovieHighlightsProducer>





-(id)requestMovieHighlightsForAssets:(id)arg0 partialCollection:(id)arg1 options:(NSUInteger)arg2 resultHandler:(id)arg3 ;


@end


#endif