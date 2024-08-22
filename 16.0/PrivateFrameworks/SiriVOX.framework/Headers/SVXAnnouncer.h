// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXANNOUNCER_H
#define SVXANNOUNCER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface SVXAnnouncer : NSObject {
    *__CFDictionary _protocolRequiredInstanceMethodSignaturesBySelector;
    *__CFDictionary _protocolOptionalInstanceMethodSignaturesBySelector;
    NSHashTable *_listeners;
}




+(id)protocol;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_accessListenersUsingBlock:(id)arg0 ;
-(void)addListener:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)removeAllListeners;
-(void)removeListener:(id)arg0 ;


@end


#endif