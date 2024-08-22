// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SESSIONSTORESERVICELISTENER_H
#define SESSIONSTORESERVICELISTENER_H

@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface SessionStoreServiceListener : NSObject <NSXPCListenerDelegate>

 {
    ? sessionServiceMachServiceName;
    ? listener;
}




+(id)shared;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)setUpSessionStoreServiceListener;


@end


#endif