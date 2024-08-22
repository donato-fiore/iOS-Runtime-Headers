// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCASSISTANTREMOTECONTROLDESTINATION_H
#define MPCASSISTANTREMOTECONTROLDESTINATION_H

@class NSString, NSArray;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>


@interface MPCAssistantRemoteControlDestination : NSObject <NSMutableCopying>



@property (readonly, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (readonly, nonatomic) NSArray *hashedOutputDeviceUIDs; // ivar: _hashedOutputDeviceUIDs
@property (readonly, nonatomic) *void origin; // ivar: _origin
@property (readonly, nonatomic) BOOL originatingDeviceControl; // ivar: _originatingDeviceControl
@property (readonly, nonatomic) NSString *originatingOutputDeviceUID; // ivar: _originatingOutputDeviceUID
@property (readonly, nonatomic) NSArray *outputDeviceUIDs; // ivar: _outputDeviceUIDs
@property (readonly, nonatomic) NSString *outputGroupID; // ivar: _outputGroupID
@property (readonly, nonatomic) NSArray *outputGroups; // ivar: _outputGroups
@property (readonly, nonatomic) NSString *playerID; // ivar: _playerID
@property (readonly, nonatomic) BOOL singleGroup; // ivar: _singleGroup


+(id)iBooksApplicationDestination;
+(id)nowPlayingApplicationDestination;
+(id)podcastsApplicationDestination;
+(id)systemMediaApplicationDestination;
+(id)watchRadioApplicationDestination;
-(*void)createPlayerPath;
-(id)_copyWithZone:(struct _NSZone *)arg0 usingConcreteClass:(Class)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAppBundleID:(id)arg0 ;
-(id)initWithAppBundleID:(id)arg0 playerID:(id)arg1 origin:(*void)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_getCompanionOrigin:(id)arg0 ;
-(void)dealloc;
-(void)resolveWithHashedRouteIdentifiers:(id)arg0 audioRoutingInfo:(struct ? )arg1 completion:(id)arg2 ;
-(void)resolveWithHashedRouteIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)resolveWithQueue:(id)arg0 hashedRouteIdentifiers:(id)arg1 localPlaybackPermitted:(BOOL)arg2 audioRoutingInfo:(struct ? )arg3 completion:(id)arg4 ;
-(void)resolveWithQueue:(id)arg0 hashedRouteIdentifiers:(id)arg1 localPlaybackPermitted:(BOOL)arg2 completion:(id)arg3 ;
-(void)resolveWithQueue:(id)arg0 routeIdentifiers:(id)arg1 localPlaybackPermitted:(BOOL)arg2 audioRoutingInfo:(struct ? )arg3 completion:(id)arg4 ;
-(void)resolveWithQueue:(id)arg0 routeIdentifiers:(id)arg1 localPlaybackPermitted:(BOOL)arg2 completion:(id)arg3 ;
-(void)resolveWithRouteIdentifiers:(id)arg0 audioRoutingInfo:(struct ? )arg1 completion:(id)arg2 ;
-(void)resolveWithRouteIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif