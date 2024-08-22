// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCLOUDCLIENTAVAILABILITYSERVICE_H
#define ICCLOUDCLIENTAVAILABILITYSERVICE_H

@class NSString, NSXPCConnection;
@protocol ICCloudAvailability, ICCloudServerListenerEndpointProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICCloudClientAvailabilityService : NSObject <ICCloudAvailability>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<ICCloudServerListenerEndpointProviding> *listenerEndpointProvider; // ivar: _listenerEndpointProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)isCellularDataRestricted;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(id)_xpcConnectionWithListenerEndpoint:(id)arg0 ;
-(id)initWithListenerEndpointProvider:(id)arg0 ;


@end


#endif