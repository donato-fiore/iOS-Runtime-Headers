// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAREPLAY_H
#define SAREPLAY_H

@class OSLogPersistence, OSActivityStream, NSURL, NSString, NSMutableDictionary, NSMutableArray;
@protocol OSLogPersistenceDelegate, OSActivityStreamDelegate, OSDeviceDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "SAService.h"
#import "SAAnalytics.h"

@interface SAReplay : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate, OSDeviceDelegate>

 {
    SAService *_service;
    OSLogPersistence *_persistence;
    OSActivityStream *_stream;
    NSObject<OS_dispatch_semaphore> *_persistenceWait;
    NSObject<OS_dispatch_semaphore> *_streamWait;
    NSURL *_outputPath;
    NSURL *_inputPersistencePath;
    SAAnalytics *_analytics;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *eventMessages; // ivar: _eventMessages
@property (retain, nonatomic) NSMutableArray *eventOrder; // ivar: _eventOrder
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