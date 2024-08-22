// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCLOUDINMEMORYTASKMANAGER_H
#define PLCLOUDINMEMORYTASKMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLCloudInMemoryTaskManager : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_resourceIDsToDownloadTasks;
    NSMutableDictionary *_taskIDsToDownloadTasks;
}




-(BOOL)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)arg0 taskIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(id)_identifierForResource:(id)arg0 ;
-(id)init;
-(void)cancelTaskWithTaskIdentifier:(id)arg0 ;
-(void)reportCompletionForResource:(id)arg0 withData:(id)arg1 error:(id)arg2 ;
-(void)reset;
-(void)setTransferTask:(id)arg0 forResource:(id)arg1 ;


@end


#endif