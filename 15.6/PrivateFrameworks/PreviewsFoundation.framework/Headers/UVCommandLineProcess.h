// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVCOMMANDLINEPROCESS_H
#define UVCOMMANDLINEPROCESS_H

@class NSArray, NSURL, NSDictionary, NSTask;

#import <Foundation/Foundation.h>


@interface UVCommandLineProcess : NSObject {
    id *_terminationHandler;
}


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
@property (retain) NSTask *task; // ivar: _task
@property (copy) id *terminationHandler;
@property (readonly) NSInteger terminationReason;
@property (readonly) int terminationStatus;


-(BOOL)launchAndReturnError:(*id)arg0 ;
-(BOOL)resume;
-(BOOL)suspend;
-(id)init;
-(id)initNoTask;
-(id)initWithTask:(id)arg0 ;
-(void)dealloc;
-(void)interrupt;
-(void)terminate;


@end


#endif