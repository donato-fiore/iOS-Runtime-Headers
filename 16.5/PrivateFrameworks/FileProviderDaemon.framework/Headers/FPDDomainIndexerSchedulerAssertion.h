// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDDOMAININDEXERSCHEDULERASSERTION_H
#define FPDDOMAININDEXERSCHEDULERASSERTION_H

@class NSString;
@protocol FPDProcessMonitorDelegate, FPIndexingAssertion;

#import <Foundation/Foundation.h>

#import "FPDProcessMonitor.h"

@interface FPDDomainIndexerSchedulerAssertion : NSObject <FPDProcessMonitorDelegate, FPIndexingAssertion>

 {
    FPDProcessMonitor *_monitor;
    int _pid;
    BOOL _forceForeground;
    id *_unregisterForceRunning;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPID:(int)arg0 forceForeground:(BOOL)arg1 ;
-(void)dealloc;
-(void)processMonitor:(id)arg0 didBecomeForeground:(BOOL)arg1 ;
-(void)start;
-(void)stop;


@end


#endif