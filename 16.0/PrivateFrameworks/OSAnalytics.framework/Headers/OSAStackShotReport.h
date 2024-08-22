// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSASTACKSHOTREPORT_H
#define OSASTACKSHOTREPORT_H

@class NSString, NSDictionary, NSArray, NSMutableDictionary;
@protocol OSAConcreteReport;


#import "OSAReport.h"

@interface OSAStackShotReport : OSAReport <OSAConcreteReport>

 {
    int _pid;
    NSString *_appName;
    NSString *_reason;
    *NSInteger _exceptionCodes;
    unsigned int _exceptionCodeCount;
    NSDictionary *_additionalPayload;
    int _thermalNotificationCurrentLevel;
    NSArray *_thermalSensorValues;
    NSMutableDictionary *_extras;
    *void _stackshot_config;
}


@property (readonly, nonatomic) NSUInteger capture_absoluteTime; // ivar: _capture_absoluteTime
@property (nonatomic) BOOL dead_snapshot; // ivar: _dead_snapshot
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly, nonatomic) NSArray *frontmostPids; // ivar: _frontmostPids
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeSyslog; // ivar: _includeSyslog
@property (nonatomic) int jetsamLevel; // ivar: _jetsamLevel
@property (nonatomic) unsigned int ss_sequence; // ivar: _ss_sequence
@property (readonly, nonatomic) *void ss_trace_buffer; // ivar: _ss_trace_buffer
@property (readonly, nonatomic) unsigned int ss_trace_length; // ivar: _ss_trace_length
@property (readonly) Class superclass;


-(BOOL)isActionable;
-(id)appleCareDetails;
-(id)exceptionCodesDescription;
-(id)getExtraData:(id)arg0 ;
-(id)getStackshotData;
-(id)getVMStatistics;
-(id)initForPid:(int)arg0 process:(id)arg1 withReason:(id)arg2 exceptionCode:(*NSInteger)arg3 exceptionCodeCount:(unsigned int)arg4 stackshotFlags:(unsigned int)arg5 ;
-(id)initWithName:(id)arg0 reason:(id)arg1 exceptionCode:(*NSInteger)arg2 exceptionCodeCount:(unsigned int)arg3 ;
-(id)problemType;
-(id)reportNamePrefix;
-(id)resampleUUIDsForTask:(int)arg0 usingCatalog:(id)arg1 ;
-(int)resampleTruncatedBacktracesForTask:(int)arg0 forThreads:(id)arg1 usingCatalog:(id)arg2 in:(id)arg3 ;
-(void)acquireStackshot;
-(void)addCustomField:(char *)arg0 value:(id)arg1 into:(id)arg2 ;
-(void)addNotes:(id)arg0 ;
-(void)dealloc;
// -(void)decodeKCDataWithBlock:(id)arg0 withTuning:(unk)arg1 usingCatalog:(id)arg2  ;
-(void)generateLogAtLevel:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)queryThermalData;
-(void)setAdditionalPayload:(id)arg0 ;
-(void)setIncidentID:(id)arg0 ;
-(void)setReason:(id)arg0 ;
-(void)useStackshotBuffer:(*void)arg0 size:(unsigned int)arg1 frontmostPids:(id)arg2 atTime:(CGFloat)arg3 machTime:(NSUInteger)arg4 sequence:(unsigned int)arg5 ;
-(void)useStackshotData:(id)arg0 frontmostPids:(id)arg1 atTime:(CGFloat)arg2 machTime:(NSUInteger)arg3 sequence:(unsigned int)arg4 ;


@end


#endif