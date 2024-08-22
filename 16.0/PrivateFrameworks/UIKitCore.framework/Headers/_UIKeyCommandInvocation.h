// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYCOMMANDINVOCATION_H
#define _UIKEYCOMMANDINVOCATION_H


#import <Foundation/Foundation.h>

#import "UIKeyCommand.h"
#import "UIPhysicalKeyboardEvent.h"

@interface _UIKeyCommandInvocation : NSObject

@property (readonly, nonatomic) UIKeyCommand *keyCommand; // ivar: _keyCommand
@property (readonly, weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) UIPhysicalKeyboardEvent *triggeringEvent; // ivar: _triggeringEvent


-(id)initWithKeyCommand:(id)arg0 triggeringEvent:(id)arg1 target:(id)arg2 ;


@end


#endif