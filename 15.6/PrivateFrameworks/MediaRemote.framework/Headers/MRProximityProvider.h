// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRPROXIMITYPROVIDER_H
#define MRPROXIMITYPROVIDER_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol MRMigrationDeviceDelegate, PCProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRMigrationDevice.h"

@interface MRProximityProvider : NSObject <MRMigrationDeviceDelegate, PCProvider>



@property (copy, nonatomic) id *behaviorCallback; // ivar: _behaviorCallback
@property (retain, nonatomic) NSMutableDictionary *behaviorResults; // ivar: _behaviorResults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *displayContextHandler; // ivar: _displayContextHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *migratingDevice; // ivar: _migratingDevice
@property (retain, nonatomic) MRMigrationDevice *proactiveDevice; // ivar: _proactiveDevice
@property (copy, nonatomic) id *progressEventHandler; // ivar: _progressEventHandler
@property (retain, nonatomic) NSMutableSet *providingDevices; // ivar: _providingDevices
@property (retain, nonatomic) NSMutableDictionary *remoteDevices; // ivar: _remoteDevices
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(void)_migrate:(id)arg0 destinationEndpoint:(id)arg1 destinationUID:(id)arg2 outputDevice:(id)arg3 label:(id)arg4 completion:(id)arg5 ;
-(NSInteger)migrationActionForProactivePlayer:(id)arg0 proactiveEndpoint:(id)arg1 remotePlayer:(id)arg2 remoteEndpoint:(id)arg3 reason:(*id)arg4 ;
-(id)_deviceForUID:(id)arg0 ;
-(id)_displayContextForDevice:(id)arg0 withRemotePlayerState:(id)arg1 proactivePlayerState:(id)arg2 migrationBehavior:(id)arg3 ;
-(id)_displayStringForContentItem:(id)arg0 ;
-(id)_effectivePlayerStateForDevice:(id)arg0 ;
-(id)_nameForDevice:(id)arg0 inEndpoint:(id)arg1 ;
-(id)_outputDeviceWithUID:(id)arg0 fromSource:(id)arg1 andDestination:(id)arg2 ;
-(id)_persistArtworkData:(id)arg0 forDevice:(id)arg1 ;
-(id)contentToDisplayForDevice:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)endpointForDevice:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_addDeviceIfNeeded:(id)arg0 ;
-(void)_beginProvidingDisplayContextIfNeeded:(id)arg0 ;
-(void)_endProvidingDisplayContextIfNeeded:(id)arg0 ;
-(void)_migrateForDevice:(id)arg0 completion:(id)arg1 ;
-(void)_migrationBehaviorForRemoteDevice:(id)arg0 completion:(id)arg1 ;
-(void)_migrationBehaviorForRemoteDevice:(id)arg0 proactiveDevice:(id)arg1 completion:(id)arg2 ;
-(void)_provideDisplayContextForDevice:(id)arg0 ;
-(void)_recalculateMigrationBehaviorAndProvideUpdatedDisplayContextForDevice:(id)arg0 ;
-(void)_removeDeviceIfNeeded:(id)arg0 ;
-(void)device:(id)arg0 playerStateDidChange:(id)arg1 ;
-(void)device:(id)arg0 stateDidChange:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)receiveEvent:(id)arg0 ;


@end


#endif