// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKLLOG_H
#define CKLLOG_H

@class NSDate, OSLogPersistence, NSString, NSMutableArray, OSActivityStream;
@protocol OSLogPersistenceDelegate, OSActivityStreamDelegate;

#import <Foundation/Foundation.h>


@interface CKLLog : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate>



@property (retain, nonatomic) NSDate *absoluteStartDate; // ivar: _absoluteStartDate
@property (retain, nonatomic) OSLogPersistence *archiveSource; // ivar: _archiveSource
@property (nonatomic) BOOL colorOutput; // ivar: _colorOutput
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL onlyTestLogs; // ivar: _onlyTestLogs
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) CGFloat startTimeOffset; // ivar: _startTimeOffset
@property (retain, nonatomic) NSMutableArray *streamObservers; // ivar: _streamObservers
@property (retain, nonatomic) OSActivityStream *streamSource; // ivar: _streamSource
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsSimulatorLogs; // ivar: _wantsSimulatorLogs


-(BOOL)activityStream:(id)arg0 results:(id)arg1 ;
-(BOOL)persistence:(id)arg0 results:(id)arg1 error:(id)arg2 ;
-(id)_init;
-(id)initForHostStream;
-(id)initWithArchiveAtURL:(id)arg0 ;
-(id)initWithRemoteDevice:(id)arg0 ;
-(void)_configureStreamSource:(id)arg0 ;
-(void)addStreamObserver:(id)arg0 ;
-(void)persistenceDidFinishReadingForStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)streamDidFail:(id)arg0 error:(id)arg1 ;
-(void)streamDidStop:(id)arg0 ;
-(void)streamLogsWithCompletion:(id)arg0 ;


@end


#endif