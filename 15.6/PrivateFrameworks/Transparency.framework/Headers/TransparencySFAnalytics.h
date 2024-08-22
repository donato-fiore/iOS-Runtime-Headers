// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYSFANALYTICS_H
#define TRANSPARENCYSFANALYTICS_H

@class SFAnalytics;



@interface TransparencySFAnalytics : SFAnalytics



+(id)databasePath;
+(id)logger;
-(void)backgroundPerform:(id)arg0 ;
-(void)logHardFailureForEventNamed:(id)arg0 withAttributes:(id)arg1 ;
-(void)logMetric:(id)arg0 withName:(id)arg1 ;
-(void)logResultForEvent:(id)arg0 hardFailure:(BOOL)arg1 result:(id)arg2 ;
-(void)logResultForEvent:(id)arg0 hardFailure:(BOOL)arg1 result:(id)arg2 withAttributes:(id)arg3 ;
-(void)logSoftFailureForEventNamed:(id)arg0 withAttributes:(id)arg1 ;
-(void)logSuccessForEventNamed:(id)arg0 ;
-(void)noteEventNamed:(id)arg0 ;


@end


#endif