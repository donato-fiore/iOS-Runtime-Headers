// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17PREVIEWSINJECTION14UVPREVIEWAGENT_H
#define _TTC17PREVIEWSINJECTION14UVPREVIEWAGENT_H

@protocol UVAgentPreviewServiceProtocol;

#import <Foundation/Foundation.h>


@interface _TtC17PreviewsInjection14UVPreviewAgent : NSObject <UVAgentPreviewServiceProtocol>

 {
    ? connection;
    ? scene;
    ? messageResponder;
    ? sceneMessenger;
}




-(id)init;
-(void)sendMessageType:(id)arg0 messagePayload:(id)arg1 fence:(id)arg2 reply:(id)arg3 ;
-(void)sendMessageType:(id)arg0 messagePayload:(id)arg1 reply:(id)arg2 ;


@end


#endif