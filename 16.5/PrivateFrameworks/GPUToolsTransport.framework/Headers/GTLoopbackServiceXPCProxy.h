// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTLOOPBACKSERVICEXPCPROXY_H
#define GTLOOPBACKSERVICEXPCPROXY_H

@protocol GTLoopbackService;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"

@interface GTLoopbackServiceXPCProxy : NSObject <GTLoopbackService>

 {
    GTServiceConnection *_connection;
}




-(id)echo:(id)arg0 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)echo:(id)arg0 completionHandler:(id)arg1 ;
-(void)echo:(id)arg0 repeat:(NSUInteger)arg1 callback:(id)arg2 ;
// -(void)echo:(id)arg0 repeat:(NSUInteger)arg1 callback:(id)arg2 complete:(unk)arg3  ;


@end


#endif