// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCSANALYTICS_H
#define PCSANALYTICS_H

@class SFAnalytics;



@interface PCSAnalytics : SFAnalytics



+(id)databasePath;
+(id)logger;
-(id)dateOfLastSuccessForEvent:(id)arg0 ;
-(void)logRecoverableError:(id)arg0 forEvent:(id)arg1 withAttributes:(id)arg2 ;
-(void)logSuccessForEvent:(id)arg0 ;
-(void)logUnrecoverableError:(id)arg0 forEvent:(id)arg1 withAttributes:(id)arg2 ;
-(void)noteEvent:(id)arg0 ;


@end


#endif