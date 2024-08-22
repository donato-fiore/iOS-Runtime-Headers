// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STYDIAGNOSTICSCOLLECTOR_H
#define STYDIAGNOSTICSCOLLECTOR_H

@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STYDiagnosticsCollector : NSObject

@property (retain) NSObject<OS_os_log> *logger; // ivar: _logger
@property (retain) NSObject<OS_dispatch_queue> *serialUtilityQueue; // ivar: _serialUtilityQueue


+(id)sharedDiagnosticsCollector;
-(void)collectTailspinForScenarioReport:(id)arg0 tailspinFileDescriptor:(int)arg1 completionHandler:(id)arg2 ;


@end


#endif