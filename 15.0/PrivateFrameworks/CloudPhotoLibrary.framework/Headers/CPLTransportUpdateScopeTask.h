// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLTRANSPORTUPDATESCOPETASK_H
#define CPLTRANSPORTUPDATESCOPETASK_H

@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;


#import "CPLEngineScopedTask.h"

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {
    id<CPLEngineTransportDeleteTransportScopeTask> *_deleteTask;
    id<CPLEngineTransportUpdateTransportScopeTask> *_updateTask;
}




-(BOOL)checkScopeIsValidInTransaction:(id)arg0 ;
-(id)taskIdentifier;
-(void)cancel;
-(void)launch;


@end


#endif