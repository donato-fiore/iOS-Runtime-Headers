// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13TEAFOUNDATION14BRIDGEDCONTEXT_H
#define _TTC13TEAFOUNDATION14BRIDGEDCONTEXT_H

@protocol TFContext;

#import <Foundation/Foundation.h>


@interface _TtC13TeaFoundation14BridgedContext : NSObject <TFContext>

 {
    ? context;
}




-(id)init;
-(void)useObject:(id)arg0 forClass:(Class)arg1 ;
-(void)useObject:(id)arg0 forClass:(Class)arg1 name:(id)arg2 ;
-(void)useObject:(id)arg0 forProtocol:(id)arg1 ;
-(void)useObject:(id)arg0 forProtocol:(id)arg1 name:(id)arg2 ;
-(void)whenResolvingClass:(Class)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenResolvingProtocol:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;


@end


#endif