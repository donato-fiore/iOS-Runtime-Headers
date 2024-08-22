// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCONCRETETASK_H
#define NSCONCRETETASK_H

@class NSMutableDictionary;
@protocol OS_dispatch_source;


#import "NSTask.h"

@interface NSConcreteTask : NSTask {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_dictionary;
    id *_terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    NSInteger _suspendCount;
    int _pid;
    uint8_t __exitRunningInfo;
    char _qos;
    uint8_t _isSpawnedProcessDisclaimed;
}




-(BOOL)isRunning;
-(BOOL)isSpawnedProcessDisclaimed;
-(BOOL)launchAndReturnError:(*id)arg0 ;
-(BOOL)launchWithDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)resume;
-(BOOL)suspend;
-(NSInteger)_platformExitInformation;
-(NSInteger)qualityOfService;
-(NSInteger)suspendCount;
-(NSInteger)terminationReason;
-(id)arguments;
-(id)currentDirectoryPath;
-(id)environment;
-(id)init;
-(id)launchPath;
-(id)preferredArchitectures;
-(id)standardError;
-(id)standardInput;
-(id)standardOutput;
-(id)taskDictionary;
-(id)terminationHandler:(SEL)arg0 ;
-(int)_procid;
-(int)processIdentifier;
-(int)terminationStatus;
-(void)_setTerminationHandler:(id)arg0 ;
-(void)_withTaskDictionary:(id)arg0 ;
-(void)dealloc;
-(void)interrupt;
-(void)launch;
-(void)setArguments:(id)arg0 ;
-(void)setCurrentDirectoryPath:(id)arg0 ;
-(void)setEnvironment:(id)arg0 ;
-(void)setLaunchPath:(id)arg0 ;
-(void)setPreferredArchitectures:(id)arg0 ;
-(void)setQualityOfService:(NSInteger)arg0 ;
-(void)setSpawnedProcessDisclaimed:(BOOL)arg0 ;
-(void)setStandardError:(id)arg0 ;
-(void)setStandardInput:(id)arg0 ;
-(void)setStandardOutput:(id)arg0 ;
-(void)setStartsNewProcessGroup:(BOOL)arg0 ;
-(void)setTaskDictionary:(id)arg0 ;
-(void)setTerminationHandler:(id)arg0 ;
-(void)terminate;
-(void)terminateTask;
-(void)waitUntilExit;


@end


#endif