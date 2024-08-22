// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXSYSTEMCONTROLLER_H
#define MXSYSTEMCONTROLLER_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MXSystemController : NSObject {
    BOOL mAppWantsVolumeChanges;
    BOOL mCanBeNowPlayingApp;
    int mClientPID;
    int mPIDToInheritAppStateFrom;
    NSString *mDisplayID;
    NSMutableDictionary *mNotificationsSubscribedTo;
    BOOL mHasEntitlementForPIDInheritance;
    NSString *mRemoteDeviceID;
}


@property (readonly, nonatomic) BOOL isSomeoneRecording;
@property (readonly, nonatomic) BOOL phoneCallExists;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsActiveOverAirPlayVideo;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsPlaying;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsPlayingOverAirPlayVideo;
@property (readonly, nonatomic) BOOL someSharePlayCapableCallSessionIsActive;


+(BOOL)getCanBeNowPlayingAppForPID:(int)arg0 ;
+(int)getPIDForAnyAppThatWantsVolumeChanges;
+(int)getPIDToInheritAppStateFromForPID:(int)arg0 ;
+(void)dumpInfoOfMXSystemControllers;
+(void)notifyAll:(id)arg0 payload:(id)arg1 dontPostIfSuspended:(BOOL)arg2 ;
+(void)notifyAll:(id)arg0 payload:(id)arg1 dontPostIfSuspended:(BOOL)arg2 remoteDeviceID:(id)arg3 ;
+(void)updateMXSystemControllerList;
-(id)getDisplayID;
-(id)info;
-(id)initWithPID:(int)arg0 ;
-(id)initWithPID:(int)arg0 remoteDeviceID:(id)arg1 ;
-(int)applyPIDToInheritAppStateFrom:(*void)arg0 ;
-(int)copyAttributeForKey:(id)arg0 withValueOut:(*void)arg1 ;
-(int)setAttributeForKey:(id)arg0 andValue:(*void)arg1 ;
-(void)applyCanBeNowPlayingApp:(*void)arg0 ;
-(void)dealloc;


@end


#endif