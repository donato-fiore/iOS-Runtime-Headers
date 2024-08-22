// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPDAEMON_H
#define HDSPSLEEPDAEMON_H

@class NSString, NSDate;
@protocol HDSPDiagnosticsProvider, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSleepDaemon : NSObject <HDSPDiagnosticsProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *launchDate; // ivar: _launchDate
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *sigtermSource; // ivar: _sigtermSource
@property (readonly) Class superclass;


-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)init;
-(id)initWithBehavior:(id)arg0 ;
-(void)_handleSigterm;
-(void)_setupSigtermHandler;
-(void)start;


@end


#endif