// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKTOOLCOMMAND_H
#define CRKTOOLCOMMAND_H

@class CATTaskClient, CATOperationQueue, CATOperation, NSString;
@protocol CATTaskClientDelegate, OS_dispatch_source, CRKToolCommandDelegate;

#import <Foundation/Foundation.h>

#import "CRKClassroomInstallation.h"

@interface CRKToolCommand : NSObject <CATTaskClientDelegate>

 {
    NSObject<OS_dispatch_source> *mSIGINTSource;
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    CATOperation *mOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRKToolCommandDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=shouldPrintJSON) BOOL printJSON; // ivar: _printJSON
@property (nonatomic, getter=shouldPrintVerbose) BOOL printVerbose; // ivar: _printVerbose
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) CRKClassroomInstallation *targetClassroomInstallation; // ivar: _targetClassroomInstallation
@property (nonatomic, getter=shouldUseDMFRequest) BOOL useDMFRequest; // ivar: _useDMFRequest


+(BOOL)handlesProgress;
+(BOOL)instructorCommand;
+(BOOL)supportsDMFRequest;
+(BOOL)supportsJSON;
+(BOOL)supportsVerboseOutput;
+(id)aliases;
+(id)help;
+(id)subcommandPath;
+(void)printHelp;
-(BOOL)didCommandSucceed;
-(BOOL)didOperationSucceed:(id)arg0 ;
-(BOOL)isCommandFinished;
-(id)DMFRequestWithArguments:(id)arg0 ;
-(id)arrayByParsingAndRemovingArgumentFlags:(id)arg0 ;
-(id)init;
-(id)operationWithClient:(id)arg0 arguments:(id)arg1 ;
-(id)requestWithArguments:(id)arg0 ;
-(id)transportProvider;
-(void)_remoteTaskDidFinish:(id)arg0 ;
-(void)_remoteTaskDidProgress:(id)arg0 ;
-(void)cleanupAndExitIfNeeded;
-(void)client:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)client:(id)arg0 didReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)clientDidConnect:(id)arg0 ;
-(void)clientDidDisconnect:(id)arg0 ;
-(void)connectToTaskClientWithCompletionBlock:(id)arg0 ;
-(void)executeOperation:(id)arg0 ;
-(void)remoteTaskDidFinish:(id)arg0 ;
-(void)remoteTaskDidProgress:(id)arg0 ;
-(void)runWithArguments:(id)arg0 ;
-(void)runWithClient:(id)arg0 arguments:(id)arg1 ;


@end


#endif