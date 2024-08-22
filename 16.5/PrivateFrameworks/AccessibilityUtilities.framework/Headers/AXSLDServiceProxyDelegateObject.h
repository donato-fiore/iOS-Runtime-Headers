// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSLDSERVICEPROXYDELEGATEOBJECT_H
#define AXSLDSERVICEPROXYDELEGATEOBJECT_H

@protocol SLDServiceProxyDelegate;

#import <Foundation/Foundation.h>


@interface AXSLDServiceProxyDelegateObject : NSObject <SLDServiceProxyDelegate>





-(void)serviceProxyDidConnect:(id)arg0 ;
-(void)serviceProxyDidDisconnect:(id)arg0 ;


@end


#endif