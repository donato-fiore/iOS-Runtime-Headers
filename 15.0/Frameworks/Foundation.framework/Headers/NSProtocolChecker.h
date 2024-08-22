// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPROTOCOLCHECKER_H
#define NSPROTOCOLCHECKER_H

@class Protocol;

#import <Foundation/Foundation.h>

#import "NSProxy.h"

@interface NSProtocolChecker : NSProxy

@property (readonly) Protocol *protocol;
@property (readonly, retain) NSObject *target;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)protocolCheckerWithTarget:(id)arg0 protocol:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(char *)_localClassNameForClass;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithTarget:(id)arg0 protocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(struct objc_method_description *)methodDescriptionForSelector:(SEL)arg0 ;
-(void)doesNotRecognizeSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif