// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXSYSTEMCONTROLLER_H
#define MXSYSTEMCONTROLLER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MXSystemController : NSObject

@property (nonatomic) BOOL appWantsVolumeChanges; // ivar: _appWantsVolumeChanges
@property (nonatomic) BOOL canBeNowPlayingApp; // ivar: _canBeNowPlayingApp
@property (nonatomic) int clientPID; // ivar: _clientPID
@property (retain) NSString *displayID; // ivar: _displayID
@property (nonatomic) BOOL hasEntitlementForPIDInheritance; // ivar: _hasEntitlementForPIDInheritance
@property (nonatomic) BOOL hasEntitlementToEnableWombat; // ivar: _hasEntitlementToEnableWombat
@property (nonatomic) BOOL hasEntitlementToInitiateRecordingTemporarily; // ivar: _hasEntitlementToInitiateRecordingTemporarily
@property (readonly, nonatomic) BOOL isSomeoneRecording;
@property (retain) NSDictionary *notificationsSubscribedTo; // ivar: _notificationsSubscribedTo
@property (readonly, nonatomic) BOOL phoneCallExists;
@property (nonatomic) int pidToInheritAppStateFrom; // ivar: _pidToInheritAppStateFrom
@property (retain) NSString *remoteDeviceID; // ivar: _remoteDeviceID
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsActiveOverAirPlayVideo;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsPlaying;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsPlayingOverAirPlayVideo;
@property (readonly, nonatomic) BOOL someSharePlayCapableCallSessionIsActive;


+(BOOL)getCanBeNowPlayingAppForPID:(int)arg0 ;
+(BOOL)isNonSerializedCopyProperty:(id)arg0 ;
+(BOOL)isNonSerializedSetProperty:(id)arg0 ;
+(int)getPIDForAnyAppThatWantsVolumeChanges;
+(int)getPIDToInheritAppStateFromForPID:(int)arg0 ;
+(void)dumpInfoOfMXSystemControllers;
+(void)notifyAll:(id)arg0 payload:(id)arg1 dontPostIfSuspended:(BOOL)arg2 ;
+(void)notifyAll:(id)arg0 payload:(id)arg1 dontPostIfSuspended:(BOOL)arg2 remoteDeviceID:(id)arg3 ;
+(void)updateMXSystemControllerList;
-(id)info;
-(id)initWithPID:(int)arg0 ;
-(id)initWithPID:(int)arg0 remoteDeviceID:(id)arg1 ;
-(int)_performVolumeOperation:(unsigned int)arg0 volume:(float)arg1 category:(id)arg2 mode:(id)arg3 routeName:(id)arg4 routeDeviceIdentifier:(id)arg5 routeSubtype:(id)arg6 outVolume:(*float)arg7 outSequenceNumber:(*NSInteger)arg8 outMuted:(*BOOL)arg9 outCategoryCopy:(*id)arg10 outModeCopy:(*id)arg11 ;
-(int)applyPIDToInheritAppStateFrom:(*void)arg0 ;
-(int)copyAttributeForKey:(id)arg0 withValueOut:(*void)arg1 ;
-(int)copyAttributeForKeyInternal:(id)arg0 withValueOut:(*void)arg1 ;
-(int)performVolumeOperation:(unsigned int)arg0 volume:(float)arg1 category:(id)arg2 mode:(id)arg3 routeName:(id)arg4 routeDeviceIdentifier:(id)arg5 routeSubtype:(id)arg6 outVolume:(*float)arg7 outSequenceNumber:(*NSInteger)arg8 outMuted:(*BOOL)arg9 outCategoryCopy:(*id)arg10 outModeCopy:(*id)arg11 ;
-(int)setAttributeForKey:(id)arg0 andValue:(*void)arg1 ;
-(int)setAttributeForKeyInternal:(id)arg0 andValue:(*void)arg1 ;
-(void)applyCanBeNowPlayingApp:(*void)arg0 ;
-(void)dealloc;
-(void)volumeCategoryAndMode:(id)arg0 mode:(id)arg1 outCategoryCopy:(*id)arg2 outModeCopy:(*id)arg3 ;


@end


#endif