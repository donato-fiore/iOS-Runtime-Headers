// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKLTAILLOG_H
#define CKLTAILLOG_H

@class OSActivityStream, NSString, OSLogPersistence, NSMutableArray;
@protocol OSLogPersistenceDelegate, OSActivityStreamDelegate, OS_dispatch_queue;



@interface CKLTailLog : OSActivityStream <OSLogPersistenceDelegate, OSActivityStreamDelegate>



@property (retain, nonatomic) OSActivityStream *activityStream; // ivar: _activityStream
@property (nonatomic) BOOL continueToReturnResults; // ivar: _continueToReturnResults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OSLogPersistence *logPersistence; // ivar: _logPersistence
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableArray *results; // ivar: _results
@property (nonatomic) BOOL stillReadingFromArchive; // ivar: _stillReadingFromArchive
@property (readonly) Class superclass;


-(BOOL)activityStream:(id)arg0 results:(id)arg1 ;
-(BOOL)persistence:(id)arg0 results:(id)arg1 error:(id)arg2 ;
-(id)init;
-(void)fetchFromStartDate:(id)arg0 toEndDate:(id)arg1 ;
-(void)persistenceDidFinishReadingForStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)start;
-(void)startFromStartDate:(id)arg0 ;
-(void)stop;
-(void)streamDidFail:(id)arg0 error:(id)arg1 ;
-(void)streamDidStop:(id)arg0 ;


@end


#endif