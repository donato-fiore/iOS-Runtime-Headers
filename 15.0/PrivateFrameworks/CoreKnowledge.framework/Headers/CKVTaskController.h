// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVTASKCONTROLLER_H
#define CKVTASKCONTROLLER_H


#import <Foundation/Foundation.h>

#import "CKVSettings.h"

@interface CKVTaskController : NSObject {
    CKVSettings *_settings;
}


@property BOOL taskExecutionAllowed; // ivar: _taskExecutionAllowed


+(id)adminControllerWithSettings:(id)arg0 ;
+(id)daemonControllerWithSettings:(id)arg0 ;
-(BOOL)isTaskExecutionAllowed;
-(BOOL)shouldExecuteTask:(unsigned short)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 taskExecutionAllowed:(BOOL)arg1 ;
-(void)allowTaskExecution;
-(void)prohibitTaskExecution;


@end


#endif