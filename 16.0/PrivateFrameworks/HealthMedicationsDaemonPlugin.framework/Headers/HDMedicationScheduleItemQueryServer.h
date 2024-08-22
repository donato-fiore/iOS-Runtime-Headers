// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONSCHEDULEITEMQUERYSERVER_H
#define HDMEDICATIONSCHEDULEITEMQUERYSERVER_H

@class HDQueryServer, HKMedicationScheduleItemQueryConfiguration;



@interface HDMedicationScheduleItemQueryServer : HDQueryServer {
    HKMedicationScheduleItemQueryConfiguration *_configuration;
}




+(Class)queryClass;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;


@end


#endif