// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNSTATISTICSPROVIDER_H
#define SCNSTATISTICSPROVIDER_H


#import <Foundation/Foundation.h>


@interface SCNStatisticsProvider : NSObject



-(id)collectedShadersForPid:(int)arg0 ;
-(id)performanceStatisticsForPid:(int)arg0 ;
-(int)startCollectingPerformanceStatisticsForPid:(int)arg0 ;
-(int)stopCollectingPerformanceStatisticsForPid:(int)arg0 ;


@end


#endif