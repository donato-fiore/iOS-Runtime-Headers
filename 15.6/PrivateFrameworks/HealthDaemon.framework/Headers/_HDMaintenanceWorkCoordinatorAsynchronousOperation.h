// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDMAINTENANCEWORKCOORDINATORASYNCHRONOUSOPERATION_H
#define _HDMAINTENANCEWORKCOORDINATORASYNCHRONOUSOPERATION_H



#import "HDMaintenanceOperation.h"

@interface _HDMaintenanceWorkCoordinatorAsynchronousOperation : HDMaintenanceOperation {
    id *_operationBlock;
}


@property (getter=isExecuting) BOOL executing; // ivar: executing
@property (getter=isFinished) BOOL finished; // ivar: finished


-(BOOL)isAsynchronous;
-(id)initWithName:(id)arg0 operationBlock:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)start;


@end


#endif