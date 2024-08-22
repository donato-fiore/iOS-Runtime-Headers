// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIACONTROLS_H
#define MPMEDIACONTROLS_H

@class NSXPCConnection, NSString, NSXPCListener, UIView;
@protocol MPMediaControlsProtocol, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "MPMediaControlsConfiguration.h"

@interface MPMediaControls : NSObject <MPMediaControlsProtocol, NSXPCListenerDelegate>

 {
    BOOL _shouldObserveRoutingContextUIDChanges;
    NSUInteger _dismissalReason;
}


@property (readonly, nonatomic) MPMediaControlsConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (copy, nonatomic) id *dismissHandlerWithReason; // ivar: _dismissHandlerWithReason
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (nonatomic) CGFloat preferredWidth; // ivar: _preferredWidth
@property (copy, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;


-(BOOL)_shouldUpdateStyleForCurrentConfigurationStyle:(NSInteger)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSInteger)_mediaControlsStyleForRouteSharingPolicy:(NSUInteger)arg0 ;
-(NSUInteger)_MPRouteSharingPolicyToAVRouteSharingPolicy:(NSUInteger)arg0 ;
-(id)_dismissalReasonString:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 shouldObserveRoutingContextUIDChanges:(BOOL)arg1 ;
-(id)initWithRouteSharingPolicy:(NSUInteger)arg0 routingContextUID:(id)arg1 ;
-(void)_audioSessionRoutingContextDidChangeNotification;
-(void)_reset;
-(void)_updateAudioSessionRoutingContext;
-(void)dealloc;
-(void)dismiss;
-(void)openConnection;
-(void)present;
-(void)setDismissalReason:(NSUInteger)arg0 ;
-(void)startPrewarming;
-(void)stopPrewarming;


@end


#endif