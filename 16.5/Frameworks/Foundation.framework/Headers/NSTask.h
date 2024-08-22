// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTASK_H
#define NSTASK_H

@class NSArray, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface NSTask : NSObject

@property (copy) NSArray *arguments;
@property (copy) NSURL *currentDirectoryURL;
@property (copy) NSDictionary *environment;
@property (copy) NSURL *executableURL;
@property (readonly) int processIdentifier;
@property NSInteger qualityOfService;
@property (readonly, getter=isRunning) BOOL running;
@property (retain) id *standardError;
@property (retain) id *standardInput;
@property (retain) id *standardOutput;
@property (copy) id *terminationHandler;
@property (readonly) NSInteger terminationReason;
@property (readonly) int terminationStatus;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)currentTaskDictionary;
+(id)launchedTaskWithDictionary:(id)arg0 ;
+(id)launchedTaskWithExecutableURL:(id)arg0 arguments:(id)arg1 error:(*id)arg2 terminationHandler:(id)arg3 ;
+(id)launchedTaskWithLaunchPath:(id)arg0 arguments:(id)arg1 ;
-(BOOL)isSpawnedProcessDisclaimed;
-(BOOL)launchAndReturnError:(*id)arg0 ;
-(BOOL)resume;
-(BOOL)suspend;
-(NSInteger)suspendCount;
-(id)currentDirectoryPath;
-(id)init;
-(id)launchPath;
-(void)interrupt;
-(void)launch;
-(void)setCurrentDirectoryPath:(id)arg0 ;
-(void)setLaunchPath:(id)arg0 ;
-(void)setSpawnedProcessDisclaimed:(BOOL)arg0 ;
-(void)terminate;


@end


#endif