// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAREPLAY_H
#define TAREPLAY_H

@class OSLogPersistence, OSActivityStream, NSURL, NSString;
@protocol OSLogPersistenceDelegate, OSActivityStreamDelegate, OSDeviceDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "TATrackingAvoidanceService.h"
#import "TAAnalyticsManager.h"

@interface TAReplay : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate, OSDeviceDelegate>

 {
    TATrackingAvoidanceService *_service;
    OSLogPersistence *_persistence;
    OSActivityStream *_stream;
    NSObject<OS_dispatch_semaphore> *_persistenceWait;
    NSObject<OS_dispatch_semaphore> *_streamWait;
    NSURL *_outputPath;
    NSURL *_inputPersistencePath;
    TAAnalyticsManager *_analyticsManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)activityStream:(id)arg0 deviceUDID:(id)arg1 deviceID:(id)arg2 status:(NSInteger)arg3 error:(id)arg4 ;
-(BOOL)activityStream:(id)arg0 results:(id)arg1 ;
-(BOOL)persistence:(id)arg0 results:(id)arg1 error:(id)arg2 ;
-(id)initWithLogArchive:(id)arg0 outputPath:(id)arg1 inputPersistencePath:(id)arg2 ;
-(void)persistenceDidFinishReadingForStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)replaySingleEventLogString:(id)arg0 ;
-(void)replayWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)streamDidFail:(id)arg0 error:(id)arg1 ;
-(void)streamDidStart:(id)arg0 ;
-(void)streamDidStop:(id)arg0 ;


@end


#endif