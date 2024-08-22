// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSSHLOGGER_H
#define NMSSHLOGGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMSSHLogger : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) id *logBlock; // ivar: _logBlock
@property (nonatomic) NSUInteger logLevel; // ivar: _logLevel
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // ivar: _loggerQueue


+(id)logger;
+(id)sharedLogger;
-(void)log:(id)arg0 level:(NSUInteger)arg1 flag:(NSUInteger)arg2 ;
-(void)logError:(id)arg0 ;
-(void)logInfo:(id)arg0 ;
-(void)logVerbose:(id)arg0 ;
-(void)logWarn:(id)arg0 ;


@end


#endif