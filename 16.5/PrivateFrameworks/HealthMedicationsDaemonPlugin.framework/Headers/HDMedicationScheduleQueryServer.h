// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONSCHEDULEQUERYSERVER_H
#define HDMEDICATIONSCHEDULEQUERYSERVER_H

@class HDQueryServer, NSArray;



@interface HDMedicationScheduleQueryServer : HDQueryServer {
    NSUInteger _limit;
    NSArray *_sortDescriptors;
}




+(Class)queryClass;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;


@end


#endif