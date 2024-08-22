// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSTATISTICSREPORTER_H
#define MPCSTATISTICSREPORTER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface MPCStatisticsReporter : NSObject {
    NSObject<OS_dispatch_queue> *_writerQueue;
}


@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, copy, nonatomic) NSString *recordScenarioName;


-(id)_reportDirectoryURL;
-(id)_reportingFileForRecorder:(id)arg0 extension:(id)arg1 ;
-(id)coreAnalyticsEventName;
-(id)description;
-(id)init;
-(void)_clearLocalReports;
-(void)_sendAnalyticsData;
-(void)_writeAnalyticsDataFromRecorder:(id)arg0 ;
-(void)_writeData:(id)arg0 toFileAtPath:(id)arg1 ;
-(void)_writeSamplesFromRecorder:(id)arg0 ;
-(void)flush;
-(void)reportRecordedResults:(id)arg0 ;


@end


#endif