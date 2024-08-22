// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSHAZAMMEDIAACTION_H
#define WFSHAZAMMEDIAACTION_H

@class WFAction, NSString, SHManagedSession;
@protocol SHSessionDelegate;



@interface WFShazamMediaAction : WFAction <SHSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SHManagedSession *managedSession; // ivar: _managedSession
@property (readonly) Class superclass;


+(id)userInterfaceProtocol;
-(void)finishRunningWithError:(id)arg0 ;
-(void)finishRunningWithMatch:(id)arg0 error:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)session:(id)arg0 didFindMatch:(id)arg1 ;
-(void)session:(id)arg0 didNotFindMatchForSignature:(id)arg1 error:(id)arg2 ;
-(void)startShazam;


@end


#endif