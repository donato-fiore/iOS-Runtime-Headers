// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOUDSERVICESANALYTICS_H
#define CLOUDSERVICESANALYTICS_H

@class SFAnalytics;



@interface CloudServicesAnalytics : SFAnalytics



+(id)databasePath;
+(id)logger;
-(void)logSuccessForEvent:(id)arg0 ;
-(void)logUnrecoverableError:(id)arg0 forEvent:(id)arg1 withAttributes:(id)arg2 ;


@end


#endif