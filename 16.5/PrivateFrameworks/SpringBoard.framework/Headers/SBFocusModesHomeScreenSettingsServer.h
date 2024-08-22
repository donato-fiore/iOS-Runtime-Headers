// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFOCUSMODESHOMESCREENSETTINGSSERVER_H
#define SBFOCUSMODESHOMESCREENSETTINGSSERVER_H

@class FBServiceClientAuthenticator, NSMutableArray, NSString, BSServiceConnectionListener;
@protocol BSServiceConnectionListenerDelegate, SBSFocusModesHomeScreenSettingsClientToServerInterface, SBFocusModesHomeScreenSettingsServerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBFocusModesHomeScreenSettingsServer : NSObject <BSServiceConnectionListenerDelegate, SBSFocusModesHomeScreenSettingsClientToServerInterface>



@property (readonly, nonatomic) FBServiceClientAuthenticator *authenticator; // ivar: _authenticator
@property (readonly, copy, nonatomic) NSMutableArray *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFocusModesHomeScreenSettingsServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)init;
-(void)activate;
-(void)addSuggestedHomeScreenPageWithRequest:(id)arg0 ;
-(void)homeScreenSnapshotsForSuggestedPagesWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)homeScreenSnapshotsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)updateFocusModeHomeScreenSettingsWithRequest:(id)arg0 ;


@end


#endif