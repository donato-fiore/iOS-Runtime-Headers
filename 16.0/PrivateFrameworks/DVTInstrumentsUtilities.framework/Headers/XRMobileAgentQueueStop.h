// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRMOBILEAGENTQUEUESTOP_H
#define XRMOBILEAGENTQUEUESTOP_H

@class NSString;
@protocol XRMobileAgentStop, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface XRMobileAgentQueueStop : NSObject <XRMobileAgentStop>

 {
    NSObject<OS_dispatch_queue> *_funnelQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    int _diagnosticID;
    BOOL _holdIsPossible;
}


@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)backgroundQueueStop;
+(id)mainQueueStop;
+(id)userInitiatedQueueStop;
+(id)userInteractiveQueueStop;
+(id)utilityQueueStop;
+(void)initialize;
-(BOOL)_holdReceivedAgent:(id)arg0 ticket:(id)arg1 ;
-(id)_funnelQueue;
-(id)init;
-(id)initWithDispatchQueue:(id)arg0 ;
-(id)initWithDispatchQueue:(id)arg0 funnelTarget:(id)arg1 ;
-(id)initWithMainQueue;
-(void)_escortAgentToExit:(id)arg0 withTicket:(id)arg1 ;
-(void)_executeAgent:(id)arg0 ;
-(void)_executeWelcomeForAgent:(id)arg0 ;
-(void)_prepareAgentToExecute:(id)arg0 withTicket:(id)arg1 ;
-(void)_runAgentEpilogue:(id)arg0 ;
-(void)_runAgentPrologue:(id)arg0 ;
-(void)_welcomeAgent:(id)arg0 ;
-(void)_welcomeAgent:(id)arg0 followedByAgents:(id)arg1 ;
-(void)_welcomeAgents:(id)arg0 ;
-(void)receiveMobileAgent:(id)arg0 ;


@end


#endif