// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WEBSAFEFORWARDER_H
#define _WEBSAFEFORWARDER_H


#import <Foundation/Foundation.h>


@interface _WebSafeForwarder : NSObject {
    id *_target;
    id *_defaultTarget;
}


@property (readonly, nonatomic) id *asyncForwarder; // ivar: _asyncForwarder


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithTarget:(id)arg0 defaultTarget:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)clearTarget;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif