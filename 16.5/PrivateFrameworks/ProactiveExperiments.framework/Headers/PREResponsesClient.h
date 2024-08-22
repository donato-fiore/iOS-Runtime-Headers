// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRERESPONSESCLIENT_H
#define PRERESPONSESCLIENT_H

@protocol PREResponsesProtocol;

#import <Foundation/Foundation.h>

#import "PREXPCClientHelpers.h"

@interface PREResponsesClient : NSObject <PREResponsesProtocol>

 {
    PREXPCClientHelpers *_clientHelpers;
}




+(id)sharedInstance;
-(id)_remoteObjectProxy;
-(id)init;
-(void)preResponseItemsForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 conversationTurns:(id)arg2 context:(id)arg3 time:(id)arg4 language:(id)arg5 recipientHandles:(id)arg6 modelFilePath:(id)arg7 modelConfigPath:(id)arg8 espressoBinFilePath:(id)arg9 vocabFilePath:(id)arg10 registerDisplayed:(BOOL)arg11 includeCustomResponses:(BOOL)arg12 includeResponsesToRobots:(BOOL)arg13 completion:(id)arg14 ;
-(void)registerResponse:(id)arg0 position:(id)arg1 isCanned:(BOOL)arg2 isUsingQuickResponses:(BOOL)arg3 locale:(id)arg4 modelConfigPath:(id)arg5 vocabPath:(id)arg6 ;


@end


#endif