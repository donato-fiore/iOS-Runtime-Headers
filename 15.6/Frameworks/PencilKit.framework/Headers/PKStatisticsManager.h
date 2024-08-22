// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTATISTICSMANAGER_H
#define PKSTATISTICSMANAGER_H

@class NSString;
@protocol PKDrawingPaletteStatistics;

#import <Foundation/Foundation.h>


@interface PKStatisticsManager : NSObject {
    NSString *_recentShapeCreated;
    CGFloat _latestShapeCreatedTimestamp;
    id<PKDrawingPaletteStatistics> *_drawingPaletteStatistics;
}






@end


#endif