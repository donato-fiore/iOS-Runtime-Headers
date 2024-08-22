// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMFSESSIONPROXY_H
#define FMFSESSIONPROXY_H

@class NSString;
@protocol FMFXPCInternalClientProtocol;

#import <Foundation/Foundation.h>

#import "FMFSession.h"

@interface FMFSessionProxy : NSObject <FMFXPCInternalClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) FMFSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)initWithFMFSession:(id)arg0 ;
-(void)abDidChange;
-(void)abPreferencesDidChange;
-(void)didAddFollowerHandle:(id)arg0 ;
-(void)didChangeActiveLocationSharingDevice:(id)arg0 ;
-(void)didReceiveFriendshipRequest:(id)arg0 ;
-(void)didReceiveServerError:(id)arg0 ;
-(void)didRemoveFollowerHandle:(id)arg0 ;
-(void)didStartFollowingHandle:(id)arg0 ;
-(void)didStopFollowingHandle:(id)arg0 ;
-(void)didUpdateActiveDeviceList:(id)arg0 ;
-(void)didUpdateFavorites:(id)arg0 ;
-(void)didUpdateFences:(id)arg0 ;
-(void)didUpdateFollowers:(id)arg0 ;
-(void)didUpdateFollowing:(id)arg0 ;
-(void)didUpdateHideFromFollowersStatus:(BOOL)arg0 ;
-(void)didUpdateLocations:(id)arg0 ;
-(void)didUpdatePendingOffersForHandles:(id)arg0 ;
-(void)didUpdatePreferences:(id)arg0 ;
-(void)failedToGetLocationForHandle:(id)arg0 error:(id)arg1 ;
-(void)modelDidLoad;
-(void)networkReachabilityUpdated:(BOOL)arg0 ;
-(void)sendMappingPacket:(id)arg0 toHandle:(id)arg1 ;
-(void)setLocations:(id)arg0 ;


@end


#endif