// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMCDAYSUMMARYQUERYSERVER_H
#define HDMCDAYSUMMARYQUERYSERVER_H

@class HDQueryServer, HKMCDaySummaryQueryConfiguration;



@interface HDMCDaySummaryQueryServer : HDQueryServer {
    HKMCDaySummaryQueryConfiguration *_configuration;
}




+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)queryClass;
+(id)requiredEntitlements;
-(BOOL)_queue_surfaceDaySummariesWithError:(*id)arg0 ;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)objectTypes;
-(void)_queue_start;


@end


#endif