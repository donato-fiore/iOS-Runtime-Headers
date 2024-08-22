// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAMPRESENTINGMODALMESSAGECONTEXT_H
#define IAMPRESENTINGMODALMESSAGECONTEXT_H

@class IAMMessage, NSTimer, UIViewController;

#import <Foundation/Foundation.h>

#import "IAMMessageGroup.h"

@interface IAMPresentingModalMessageContext : NSObject

@property (retain, nonatomic) IAMMessage *message; // ivar: _message
@property (retain, nonatomic) IAMMessageGroup *messageGroup; // ivar: _messageGroup
@property (retain, nonatomic) NSTimer *presentationExpirationTimer; // ivar: _presentationExpirationTimer
@property (copy, nonatomic) id *presentationHandler; // ivar: _presentationHandler
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


-(id)initWithMessage:(id)arg0 messageGroup:(id)arg1 presentingViewController:(id)arg2 presentationExpirationTimer:(id)arg3 presentationHandler:(id)arg4 ;


@end


#endif