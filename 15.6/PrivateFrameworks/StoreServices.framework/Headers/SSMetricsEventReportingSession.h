// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSMETRICSEVENTREPORTINGSESSION_H
#define SSMETRICSEVENTREPORTINGSESSION_H

@class NSURL, NSArray, NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "SSMetricsEventController.h"

@interface SSMetricsEventReportingSession : NSObject {
    NSInteger _insertTimestamp;
    NSURL *_reportingURL;
    NSArray *_unreportedEvents;
    NSMutableArray *_unreportedEventPIDs;
    SSMetricsEventController *_eventController;
    NSString *_sessionCanaryIdentifier;
    BOOL _suppressUserInfo;
}




-(BOOL)anyUnreportedEvents;
-(BOOL)markEventsAsReported;
-(NSInteger)_estimateSizeOfJsonObject:(id)arg0 ;
-(id)_unreportedEvents;
-(id)initWithReportingURL:(id)arg0 insertTimestamp:(NSInteger)arg1 eventController:(id)arg2 ;
-(id)initWithReportingURL:(id)arg0 insertTimestamp:(NSInteger)arg1 suppressDSID:(BOOL)arg2 eventController:(id)arg3 ;
-(id)initWithReportingURL:(id)arg0 insertTimestamp:(NSInteger)arg1 suppressUserInfo:(BOOL)arg2 eventController:(id)arg3 ;
-(id)sessionCanaryIdentifier;
-(id)writeEventsToStream:(id)arg0 ;
-(id)writeEventsToStream:(id)arg0 uncompressedMaxSize:(NSInteger)arg1 ;
-(void)_writeString:(id)arg0 toData:(id)arg1 ;


@end


#endif