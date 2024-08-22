// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLRAPIDCONTROLLER_H
#define PLRAPIDCONTROLLER_H

@class NSString, NSDate, DRConfigMonitor;

#import <Foundation/Foundation.h>


@interface PLRapidController : NSObject

@property (retain) NSString *configUUID; // ivar: _configUUID
@property (retain) NSString *failureReason; // ivar: _failureReason
@property (retain) NSDate *logCreationEndDate; // ivar: _logCreationEndDate
@property (retain) NSDate *logCreationResumeDate; // ivar: _logCreationResumeDate
@property (retain) NSDate *logCreationStartDate; // ivar: _logCreationStartDate
@property (retain) NSString *mdLogCompressedFilePath; // ivar: _mdLogCompressedFilePath
@property (retain) NSString *mdLogFilePath; // ivar: _mdLogFilePath
@property (retain) NSString *mssCompressedFilePath; // ivar: _mssCompressedFilePath
@property (retain) NSString *mssFilePath; // ivar: _mssFilePath
@property CGFloat samplingPercentage; // ivar: _samplingPercentage
@property NSInteger stage; // ivar: _stage
@property (retain) DRConfigMonitor *taskingMonitor; // ivar: _taskingMonitor
@property (retain) NSString *taskingRequestReason; // ivar: _taskingRequestReason


+(BOOL)deferActivity:(id)arg0 ;
+(BOOL)diagnosticLogSubmissionEnabled;
+(BOOL)finishActivity:(id)arg0 withStatus:(NSInteger)arg1 ;
+(BOOL)randomBoolWithYesPercentage:(CGFloat)arg0 ;
+(id)allTablesInDB:(id)arg0 ;
+(id)dataCollectionCriterion;
+(id)sharedInstance;
+(id)trimConditionsForTables:(id)arg0 trimDate:(id)arg1 ;
+(int)hangTypeFromStr:(id)arg0 ;
+(void)cleanup;
+(void)dropDataFromDB:(id)arg0 withConfig:(id)arg1 ;
+(void)dropTablesFromDB:(id)arg0 excludingSet:(id)arg1 ;
+(void)offsetTimestampsInDB:(id)arg0 withConfig:(id)arg1 withBaseTimestamp:(CGFloat)arg2 ;
+(void)roundDataInDB:(id)arg0 withConfig:(id)arg1 ;
-(BOOL)copyDB;
-(BOOL)packageDB:(id)arg0 ;
-(BOOL)prepareMSSLog;
-(BOOL)prepareMicroDiagnosticLog:(id)arg0 shouldDefer:(*BOOL)arg1 ;
-(BOOL)shouldDoRapidCollection;
-(id)configFromMonitor:(id)arg0 ;
-(id)contextDictionary;
-(id)init;
-(id)setupConnection;
-(id)uploadLog;
-(void)addMDLogContext:(id)arg0 ;
-(void)addMSSContext:(id)arg0 ;
-(void)completeTaskingConfig:(id)arg0 ;
-(void)createHangTableInDB:(id)arg0 ;
-(void)handleDRConfigUpdate:(id)arg0 error:(id)arg1 ;
-(void)handleXPCActivityCallback:(id)arg0 ;
-(void)initializeSamplingPercentage;
-(void)initializeTaskingParams;
-(void)logHangSignposts:(id)arg0 toDB:(id)arg1 ;
-(void)logSignpostDataToDB:(id)arg0 ;
-(void)logToCADataUploadState:(id)arg0 ;
-(void)logToCALogGenerationStats;
-(void)persistActivityState;
-(void)pruneDB:(id)arg0 withConfig:(id)arg1 ;
-(void)registerDataCollectionActivity;
-(void)rejectTaskingConfig:(id)arg0 ;
-(void)resetActivity;
-(void)setMDLogCompressedFilePath;
-(void)setMDLogFilePath;
-(void)setMSSCompressedFilePath;
-(void)setMSSFilePath;
-(void)setupDRTasking;
-(void)stopDRTasking;
-(void)trimAndFilterDB:(id)arg0 withConfig:(id)arg1 ;


@end


#endif