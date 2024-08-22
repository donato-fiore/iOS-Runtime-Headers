// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLCAPTURESERVICEOBSERVER_H
#define GTMTLCAPTURESERVICEOBSERVER_H

@protocol GTMTLCaptureServiceObserver, OS_xpc_object, GTXPCConnection;

#import <Foundation/Foundation.h>


@interface GTMTLCaptureServiceObserver : NSObject <GTMTLCaptureServiceObserver>

 {
    NSUInteger _replyStream;
    NSObject<OS_xpc_object> *_replyPath;
    id<GTXPCConnection> *_connection;
}




-(id)initWithMessage:(id)arg0 notifyConnection:(id)arg1 ;
-(void)notifyCaptureObjectsChanged:(id)arg0 ;
-(void)notifyCaptureProgress:(id)arg0 ;
-(void)notifyCaptureRequest:(id)arg0 ;
-(void)notifyUnsupportedFenum:(id)arg0 ;


@end


#endif