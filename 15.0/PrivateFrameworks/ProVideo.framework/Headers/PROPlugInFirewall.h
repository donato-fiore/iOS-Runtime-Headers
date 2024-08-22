// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PROPLUGINFIREWALL_H
#define PROPLUGINFIREWALL_H

@class Protocol;
@protocol PROPlugInFirewallErrorHandler;

#import <Foundation/Foundation.h>


@interface PROPlugInFirewall : NSObject {
    id<PROPlugInFirewallErrorHandler> *errorHandler;
    id *protectedObject;
    Protocol *protocol;
    Protocol *secondaryProtocol;
}




+(id)methodSignatureForSelector:(SEL)arg0 ;
+(void)deadMethod;
+(void)doesNotRecognizeSelector:(SEL)arg0 ;
+(void)forwardInvocation:(id)arg0 ;
-(id)description;
-(id)initWithProtectedObject:(id)arg0 protocol:(id)arg1 secondaryProtocol:(id)arg2 errorHandler:(id)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)protectedObject;
-(void)deadMethod;
-(void)dealloc;
-(void)doesNotRecognizeSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif