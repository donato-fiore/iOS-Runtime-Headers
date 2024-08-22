// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXIPCSERVERMESSAGEHANDLERCONTEXT_H
#define AXIPCSERVERMESSAGEHANDLERCONTEXT_H


#import <Foundation/Foundation.h>


@interface AXIPCServerMessageHandlerContext : NSObject

@property (readonly, nonatomic) BOOL async; // ivar: _async
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly, weak, nonatomic) id *target; // ivar: _target


-(id)initWithHandler:(id)arg0 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 async:(BOOL)arg2 ;


@end


#endif