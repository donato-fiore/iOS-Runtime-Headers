// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFISOFTERROR_H
#define WIFISOFTERROR_H

@class SDRDiagnosticReporter, NSMutableArray, NSString, NSMutableString;

#import <Foundation/Foundation.h>


@interface WiFiSoftError : NSObject

@property (retain, nonatomic) SDRDiagnosticReporter *abcReporter; // ivar: _abcReporter
@property (retain, nonatomic) NSMutableArray *abcSubmissionTimestamps; // ivar: _abcSubmissionTimestamps
@property (retain, nonatomic) NSMutableArray *askToLaunchTapToRadarTimestamps; // ivar: _askToLaunchTapToRadarTimestamps
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (nonatomic) NSInteger enabled; // ivar: _enabled
@property (nonatomic) NSString *hudOffset; // ivar: _hudOffset
@property (retain, nonatomic) NSMutableArray *hudTimestamps; // ivar: _hudTimestamps
@property (readonly, nonatomic) NSInteger intervalForMaxNonUIActions; // ivar: _intervalForMaxNonUIActions
@property (readonly, nonatomic) NSInteger intervalForMaxUIActions; // ivar: _intervalForMaxUIActions
@property (retain, nonatomic) NSMutableString *logMessage; // ivar: _logMessage
@property (readonly, nonatomic) NSInteger maxLogMessageLength; // ivar: _maxLogMessageLength
@property (readonly, nonatomic) NSInteger maxNonUIActions; // ivar: _maxNonUIActions
@property (readonly, nonatomic) NSInteger maxOccurrences; // ivar: _maxOccurrences
@property (readonly, nonatomic) NSInteger maxUIActions; // ivar: _maxUIActions
@property (retain, nonatomic) NSString *metricEventName; // ivar: _metricEventName
@property (readonly, nonatomic) NSInteger metricSubmissionSamplingRate; // ivar: _metricSubmissionSamplingRate
@property (nonatomic) NSInteger metricsEnabled; // ivar: _metricsEnabled
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *occurrenceTimestamps; // ivar: _occurrenceTimestamps
@property (retain, nonatomic) NSMutableArray *simulateCrashTimestamps; // ivar: _simulateCrashTimestamps
@property (retain, nonatomic) NSMutableArray *tapToRadarTimestamps; // ivar: _tapToRadarTimestamps


+(void)_cloudAssetsFetchHandler:(id)arg0 ;
+(void)_submitSummaryReportMetric;
+(void)_updateHUDWithMessage:(id)arg0 ;
-(BOOL)_maxNonUIActionsReachedFor:(id)arg0 ;
-(BOOL)_maxUIActionsReachedFor:(id)arg0 ;
-(BOOL)askToLaunchTapToRadarWithMessage:(id)arg0 ;
-(NSInteger)_countOf:(id)arg0 withinInterval:(CGFloat)arg1 ;
-(NSInteger)count;
-(NSInteger)recentCountWithinTimeInterval:(CGFloat)arg0 ;
-(id)appendLogMessage:(id)arg0 includeTimestamp:(BOOL)arg1 ;
-(id)incrementCount;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 andParams:(id)arg1 ;
-(id)simulateCrashWithReason:(id)arg0 ;
-(id)submitABCReportWithReason:(id)arg0 ;
-(id)submitMetric;
-(id)submitMetricWithData:(id)arg0 ;
-(id)tapToRadarWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)updateHUDWithMessage:(id)arg0 ;
-(void)_addGenericMetricData:(id)arg0 ;
-(void)_recordCurrentTimestampIn:(id)arg0 ;
-(void)clearLogMessage;
-(void)dealloc;
-(void)resetCount;
-(void)writeLogMessage;


@end


#endif