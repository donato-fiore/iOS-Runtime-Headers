// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTEEXECUTIONSESSION_H
#define WFREMOTEEXECUTIONSESSION_H

@class NSString, IDSService;
@protocol WFRemoteExecutionSessionDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "WFRemoteExecutionRequest.h"

@interface WFRemoteExecutionSession : NSObject

@property (weak, nonatomic) NSObject<WFRemoteExecutionSessionDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (retain, nonatomic) WFRemoteExecutionRequest *request; // ivar: _request
@property (readonly, nonatomic) IDSService *service; // ivar: _service
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // ivar: _timeoutTimer


-(CGFloat)timeoutLimitInSeconds;
-(id)initWithService:(id)arg0 ;
-(id)invalidAceCommandError;
-(id)sessionTimedOutError;
-(void)cancelTimeout;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)handleIncomingProtobuf:(id)arg0 ;
-(void)handleTimeout;
-(void)restartTimeout;
-(void)sendToDestinations:(id)arg0 options:(id)arg1 ;


@end


#endif