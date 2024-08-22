// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARSDAEMONSERVER_H
#define AVTAVATARSDAEMONSERVER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, AVTAvatarsDaemon, AVTAvatarsDaemonServer, AVTAvatarsDaemonServerDelegate, AVTUILogger;

#import <Foundation/Foundation.h>


@interface AVTAvatarsDaemonServer : NSObject <NSXPCListenerDelegate, AVTAvatarsDaemon, AVTAvatarsDaemonServer>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarsDaemonServerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithListener:(id)arg0 logger:(id)arg1 ;
-(id)initWithLogger:(id)arg0 ;
-(void)checkIn;
-(void)startListening;


@end


#endif