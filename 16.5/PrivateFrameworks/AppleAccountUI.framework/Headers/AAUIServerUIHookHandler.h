// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUISERVERUIHOOKHANDLER_H
#define AAUISERVERUIHOOKHANDLER_H

@class RUIServerHookHandler, UIViewController;


#import "AAUIServerHookHandlerDelegate.h"

@interface AAUIServerUIHookHandler : RUIServerHookHandler {
    AAUIServerHookHandlerDelegate *_delegate;
}


@property (retain, nonatomic) UIViewController *presentingControllerOverride; // ivar: _presentingControllerOverride


-(id)init;


@end


#endif