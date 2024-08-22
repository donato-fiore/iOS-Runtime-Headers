// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRMOBILEAGENTDOCK_H
#define XRMOBILEAGENTDOCK_H

@class NSMutableArray, NSString;
@protocol XRMobileAgentStop;

#import <Foundation/Foundation.h>

#import "XRMobileAgent.h"

@interface XRMobileAgentDock : NSObject <XRMobileAgentStop>

 {
    BOOL _agentExecuted;
    BOOL _abandoned;
    NSMutableArray *_waitingAgents;
    _opaque_pthread_mutex_t _mutex;
    _opaque_pthread_cond_t _cond;
}


@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) XRMobileAgent *dockedAgent; // ivar: _dockedAgent
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)waitForAgentToDock;
-(id)init;
-(void)abandon;
-(void)dealloc;
-(void)executeDockedAgent;
-(void)receiveMobileAgent:(id)arg0 ;
-(void)releaseDockedAgent;


@end


#endif