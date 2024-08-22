// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPEXCEPTIONTOERRORPROXY_H
#define FPEXCEPTIONTOERRORPROXY_H


#import <Foundation/Foundation.h>


@interface FPExceptionToErrorProxy : NSObject

@property (copy, nonatomic) id *target; // ivar: _target
@property (copy, nonatomic) id *unhandledExceptionHandler; // ivar: _unhandledExceptionHandler


-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)errorFromException:(id)arg0 whileSendingToSelector:(SEL)arg1 ;
-(id)initWithTarget:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif