// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC15PREVIEWSHELLKIT12DAEMONSERVERP33_576070ED32EC2757B9EEB3834790A9E115MESSAGERECEIVER_H
#define _TTCC15PREVIEWSHELLKIT12DAEMONSERVERP33_576070ED32EC2757B9EEB3834790A9E115MESSAGERECEIVER_H

@protocol UVDaemonServiceProtocol;

#import <Foundation/Foundation.h>


@interface _TtCC15PreviewShellKit12DaemonServerP33_576070ED32EC2757B9EEB3834790A9E115MessageReceiver : NSObject <UVDaemonServiceProtocol>

 {
    ? connection;
    ? responder;
}




-(id)init;
-(void)copyURLToAgentIdentifierPayload:(id)arg0 usingData:(id)arg1 replyHandler:(id)arg2 ;
-(void)grantExecutePermissionToAgentIdentifierPayload:(id)arg0 usingData:(id)arg1 replyHandler:(id)arg2 ;
-(void)sendPreviewServiceMessage:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif