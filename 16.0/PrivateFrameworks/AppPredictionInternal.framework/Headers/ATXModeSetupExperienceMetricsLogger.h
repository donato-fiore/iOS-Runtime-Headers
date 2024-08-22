// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODESETUPEXPERIENCEMETRICSLOGGER_H
#define ATXMODESETUPEXPERIENCEMETRICSLOGGER_H

@class NSURL, ATXModeConfigurationUIFlowLoggingBiomeStream;

#import <Foundation/Foundation.h>


@interface ATXModeSetupExperienceMetricsLogger : NSObject

@property (retain, nonatomic) NSURL *bookmarkURLPath; // ivar: _bookmarkURLPath
@property (retain, nonatomic) ATXModeConfigurationUIFlowLoggingBiomeStream *stream; // ivar: _stream


-(id)generateBookmark;
-(id)generateBookmarkURLPath;
-(id)init;
-(void)logMetrics;
-(void)writeBookmarkToFile:(id)arg0 ;


@end


#endif