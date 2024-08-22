// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLLOG_H
#define CKLLOG_H

@class NSDate, OSLogEventLiveStream, OSLogEventStream, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CKLLog : NSObject

@property (retain, nonatomic) NSDate *absoluteStartDate; // ivar: _absoluteStartDate
@property (nonatomic) BOOL colorOutput; // ivar: _colorOutput
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) OSLogEventLiveStream *liveStream; // ivar: _liveStream
@property (retain, nonatomic) OSLogEventStream *logEventStream; // ivar: _logEventStream
@property (nonatomic) BOOL onlyTestLogs; // ivar: _onlyTestLogs
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) CGFloat startTimeOffset; // ivar: _startTimeOffset
@property (retain, nonatomic) NSMutableArray *streamObservers; // ivar: _streamObservers
@property (nonatomic) BOOL wantsSimulatorLogs; // ivar: _wantsSimulatorLogs


+(id)preparedLiveStreamFromLiveStore:(id)arg0 ;
+(id)preparedStreamFromStore:(id)arg0 ;
-(id)_init;
-(id)initForHostStream;
-(id)initWithArchiveAtURL:(id)arg0 ;
-(void)addStreamObserver:(id)arg0 ;
-(void)streamLogsWithCompletion:(id)arg0 ;


@end


#endif