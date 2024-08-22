// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMASSISTANTMESSAGESENDHANDLERDEFAULTDELEGATE_H
#define IMASSISTANTMESSAGESENDHANDLERDEFAULTDELEGATE_H

@class NSString;
@protocol IMAssistantMessageSendHandlerDelegate;

#import <Foundation/Foundation.h>


@interface IMAssistantMessageSendHandlerDefaultDelegate : NSObject <IMAssistantMessageSendHandlerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)sendMessage:(id)arg0 toChat:(id)arg1 ;


@end


#endif