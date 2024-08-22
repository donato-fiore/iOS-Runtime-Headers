// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XPCNSSERVICELISTENER_H
#define XPCNSSERVICELISTENER_H

@class NSString;
@protocol XPCServiceListenerDelegate, XPCNSServiceListenerDelegate;

#import <Foundation/Foundation.h>

#import "XPCServiceListener.h"

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate>

 {
    XPCServiceListener *_serviceListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<XPCNSServiceListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;


-(BOOL)XPCServiceListener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithServiceName:(id)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(void)XPCServiceListener:(id)arg0 didReceiveNewConnection:(id)arg1 ;
-(void)shutDownCompletionBlock:(id)arg0 ;
-(void)start;


@end


#endif