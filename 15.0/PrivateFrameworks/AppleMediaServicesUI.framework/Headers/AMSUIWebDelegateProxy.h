// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBDELEGATEPROXY_H
#define AMSUIWEBDELEGATEPROXY_H


#import <Foundation/Foundation.h>


@interface AMSUIWebDelegateProxy : NSObject

@property (weak, nonatomic) id *delegate; // ivar: _delegate


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif