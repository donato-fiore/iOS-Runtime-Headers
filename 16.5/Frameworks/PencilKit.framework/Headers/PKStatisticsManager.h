// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSTATISTICSMANAGER_H
#define PKSTATISTICSMANAGER_H

@class NSString, NSDictionary;
@protocol PKDrawingPaletteStatistics;

#import <Foundation/Foundation.h>


@interface PKStatisticsManager : NSObject {
    NSString *_recentShapeCreated;
    CGFloat _latestShapeCreatedTimestamp;
    NSDictionary *_recentTextLinesStraightened;
    CGFloat _latestTextLinesStraightenedTimestamp;
    id<PKDrawingPaletteStatistics> *_drawingPaletteStatistics;
}






@end


#endif