// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAVCONCRETEROUTINGDISCOVERYSESSION_APSYNC_H
#define MRAVCONCRETEROUTINGDISCOVERYSESSION_APSYNC_H

@class NSArray, NSString;
@protocol MRAVClusterObserver;


#import "MRAVConcreteRoutingDiscoverySession.h"
#import "MRAVClusterController.h"

@interface MRAVConcreteRoutingDiscoverySession_APSync : MRAVConcreteRoutingDiscoverySession <MRAVClusterObserver>

 {
    NSArray *_availableEndpoints;
    id *_virtualOutputDeviceNotificationToken;
    MRAVClusterController *_clusterController;
    BOOL _scheduledAvailableEndpointsReload;
}


@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups; // ivar: _availableOutputDeviceGroups
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)externalDeviceCache;
+(id)externalDeviceForOutputDeviceUID:(SEL)arg0 ;
+(void)setExternalDeviceForOutputDeviceUID:(id)arg0 ;
-(BOOL)inferAvailableOutputDevices;
-(id)availableEndpoints;
-(id)deduplicateAVODGroups:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 clusterController:(id)arg1 ;
-(void)_availableEndpointsDidChangeNotification:(id)arg0 ;
-(void)_externalDeviceConnectionStateDidChange:(id)arg0 ;
-(void)_logAVODGroupsChangedFrom:(id)arg0 toNewGroups:(id)arg1 ;
-(void)_onQueue_populateExternalDevice:(id)arg0 ;
-(void)_onQueue_reload;
-(void)_onQueue_reloadAvailableEndpoints;
-(void)_onQueue_reloadAvailableOutputDevices;
-(void)_scheduleAvailableEndpointsReload;
-(void)_scheduleReload;
-(void)_virtualDevicesDidChangeNotification:(id)arg0 ;
-(void)clusterController:(id)arg0 clusterStatusDidChange:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)setAvailableEndpoints:(id)arg0 ;


@end


#endif