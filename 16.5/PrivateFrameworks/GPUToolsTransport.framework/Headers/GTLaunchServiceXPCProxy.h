// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTLAUNCHSERVICEXPCPROXY_H
#define GTLAUNCHSERVICEXPCPROXY_H

@class NSSet;
@protocol GTLaunchService, GTXPCConnection;

#import <Foundation/Foundation.h>


@interface GTLaunchServiceXPCProxy : NSObject <GTLaunchService>

 {
    id<GTXPCConnection> *_connection;
    NSSet *_ignoreMethods;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(id)launchReplayerWithConfiguration:(id)arg0 ;
-(void)bringGuestAppToForeground:(int)arg0 ;
-(void)resumeTaskForPid:(int)arg0 ;
-(void)symbolicatorSignatureForPid:(int)arg0 completionHandler:(id)arg1 ;


@end


#endif