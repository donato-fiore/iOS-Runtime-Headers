// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMASSISTANTMESSAGESETATTRIBUTEHANDLER_H
#define IMASSISTANTMESSAGESETATTRIBUTEHANDLER_H

@class NSString;
@protocol INSetMessageAttributeIntentHandling;


#import "IMAssistantMessageHandler.h"

@interface IMAssistantMessageSetAttributeHandler : IMAssistantMessageHandler <INSetMessageAttributeIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleSetMessageAttribute:(id)arg0 completion:(id)arg1 ;


@end


#endif