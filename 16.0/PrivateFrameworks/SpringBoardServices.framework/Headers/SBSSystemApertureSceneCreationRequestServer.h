// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSSYSTEMAPERTURESCENECREATIONREQUESTSERVER_H
#define SBSSYSTEMAPERTURESCENECREATIONREQUESTSERVER_H

@class BSServiceConnectionListener, NSMutableSet, NSString;
@protocol BSServiceConnectionListenerDelegate, SBSSystemApertureSceneCreationRequestInterface, SBSSystemApertureSceneCreationRequestServerDelegate;

#import <Foundation/Foundation.h>


@interface SBSSystemApertureSceneCreationRequestServer : NSObject <BSServiceConnectionListenerDelegate, SBSSystemApertureSceneCreationRequestInterface>

 {
    BSServiceConnectionListener *_connectionListener;
    BOOL _isAvailable;
    os_unfair_lock_s _connectionsLock;
    NSMutableSet *_connectionsLock_connections;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSSystemApertureSceneCreationRequestServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)activeInstance;
+(id)identifier;
+(id)interface;
+(id)serviceQuality;
-(id)initWithDelegate:(id)arg0 ;
-(void)_addConnection:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)requestSystemApertureSceneForCurrentProcess;
-(void)requestSystemApertureSceneWithRequestIdentifier:(id)arg0 ;
-(void)startServer;


@end


#endif