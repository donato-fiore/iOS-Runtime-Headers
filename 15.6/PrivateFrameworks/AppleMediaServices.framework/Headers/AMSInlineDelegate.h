// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSINLINEDELEGATE_H
#define AMSINLINEDELEGATE_H

@class NSMutableSet, Protocol;

#import <Foundation/Foundation.h>


@interface AMSInlineDelegate : NSObject

@property (retain, nonatomic) NSMutableSet *implementations; // ivar: _implementations
@property (retain, nonatomic) Protocol *protocol; // ivar: _protocol


-(BOOL)_implementMethodWithSelector:(SEL)arg0 isRequired:(BOOL)arg1 isInstance:(BOOL)arg2 block:(id)arg3 ;
-(BOOL)implementOptionalClassMethodWithSelector:(SEL)arg0 block:(id)arg1 ;
-(BOOL)implementOptionalInstanceMethodWithSelector:(SEL)arg0 block:(id)arg1 ;
-(BOOL)implementRequiredClassMethodWithSelector:(SEL)arg0 block:(id)arg1 ;
-(BOOL)implementRequiredInstanceMethodWithSelector:(SEL)arg0 block:(id)arg1 ;
-(id)_initWithProtocol:(id)arg0 ;
-(id)initWithProtocol:(id)arg0 ;
-(void)dealloc;


@end


#endif