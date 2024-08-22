// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPBSERVER_LISTENER_H
#define RPBSERVER_LISTENER_H

@class RPBServer, NSString;
@protocol RPBServerListener;

#import <Foundation/Foundation.h>


@interface RPBServer_Listener : NSObject <RPBServerListener>

 {
    RPBServer *_server;
    function<void ()> will_start_running_callback;
    function<void ()> did_start_running_callback;
    function<void ()> will_stop_running_callback;
    function<void ()> did_stop_running_callback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithServer:(id)arg0 ;
-(void)dealloc;
-(void)remoteProcessingBlockServerDidStartRunning:(id)arg0 ;
-(void)remoteProcessingBlockServerDidStopRunning:(id)arg0 ;
-(void)remoteProcessingBlockServerWillStartRunning:(id)arg0 ;
-(void)remoteProcessingBlockServerWillStopRunning:(id)arg0 ;


@end


#endif