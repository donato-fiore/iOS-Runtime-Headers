// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTEVENTLISTENER_H
#define SUSCRIPTEVENTLISTENER_H

@class NSLock, WebScriptObject, NSString;

#import <Foundation/Foundation.h>


@interface SUScriptEventListener : NSObject {
    NSLock *_lock;
}


@property (retain) WebScriptObject *callback; // ivar: _callback
@property (copy) NSString *name; // ivar: _name
@property BOOL shouldUseCapture; // ivar: _useCapture


-(id)init;


@end


#endif