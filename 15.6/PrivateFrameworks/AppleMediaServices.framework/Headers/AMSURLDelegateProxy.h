// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSURLDELEGATEPROXY_H
#define AMSURLDELEGATEPROXY_H


#import <Foundation/Foundation.h>

#import "AMSURLSession.h"

@interface AMSURLDelegateProxy : NSObject

@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) AMSURLSession *session; // ivar: _session


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithSession:(id)arg0 delegate:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)invalidate;


@end


#endif