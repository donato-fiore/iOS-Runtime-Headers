// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETETIMELINEPARSER_H
#define PXSTORYCONCRETETIMELINEPARSER_H


#import <Foundation/Foundation.h>

#import "PXStoryMutableConcreteTimeline.h"
#import "PXStoryResourcesDataSource.h"
#import "PXStoryConcreteSubtimelineScanner.h"

@interface PXStoryConcreteTimelineParser : NSObject {
    PXStoryMutableConcreteTimeline *_accumulatedBestTimeline;
    PXStoryMutableConcreteTimeline *_nextBestTimeline;
    PXStoryMutableConcreteTimeline *_candidateAccumulatedTimelineWithNextBestTimeline;
}


@property (readonly, nonatomic) BOOL isAtEnd;
@property (nonatomic) NSInteger parseCountLimit; // ivar: _parseCountLimit
@property (nonatomic) CGFloat parseTimeLimit; // ivar: _parseTimeLimit
@property (nonatomic) NSInteger preferredInitialDisplayAssetResourceIndex; // ivar: _preferredInitialDisplayAssetResourceIndex
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // ivar: _resourcesDataSource
@property (readonly, nonatomic) PXStoryConcreteSubtimelineScanner *scanner; // ivar: _scanner


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)parseNextBestTimeline;
-(void)_adjustTimeline:(id)arg0 andAppendTimeline:(id)arg1 ;


@end


#endif