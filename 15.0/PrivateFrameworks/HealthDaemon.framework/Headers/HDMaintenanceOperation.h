// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMAINTENANCEOPERATION_H
#define HDMAINTENANCEOPERATION_H

@class NSOperation;



@interface HDMaintenanceOperation : NSOperation {
    CGFloat _startedTime;
}




+(id)maintenanceOperationWithName:(id)arg0 asynchronousBlock:(id)arg1 ;
+(id)maintenanceOperationWithName:(id)arg0 queue:(id)arg1 synchronousBlock:(id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg0 ;


@end


#endif