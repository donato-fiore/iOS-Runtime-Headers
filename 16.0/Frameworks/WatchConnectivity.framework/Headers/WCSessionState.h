// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WCSESSIONSTATE_H
#define WCSESSIONSTATE_H

@class NSString, NSSet, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WCSessionState : NSObject <NSSecureCoding>



@property (readonly, copy) NSString *appInstallationID; // ivar: _appInstallationID
@property (readonly, getter=isAppInstalled) BOOL appInstalled; // ivar: _appInstalled
@property (readonly, getter=isCompanionAppInstalled) BOOL companionAppInstalled; // ivar: _companionAppInstalled
@property (readonly, getter=isComplicationEnabled) BOOL complicationEnabled; // ivar: _complicationEnabled
@property (readonly) BOOL iOSDeviceNeedsFirstUnlock; // ivar: _iOSDeviceNeedsFirstUnlock
@property (readonly, getter=isPaired) BOOL paired; // ivar: _paired
@property (readonly, copy) NSSet *pairedDevicesPairingIDs; // ivar: _pairedDevicesPairingIDs
@property (readonly, copy) NSString *pairingID; // ivar: _pairingID
@property (readonly, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly) NSUInteger remainingComplicationUserInfoTransfers; // ivar: _remainingComplicationUserInfoTransfers
@property (readonly, getter=isStandaloneApp) BOOL standalone; // ivar: _standalone
@property (readonly, copy) NSURL *watchDirectoryURL;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReachable:(BOOL)arg0 iOSDeviceNeedsFirstUnlock:(BOOL)arg1 activePairingID:(id)arg2 standaloneApp:(BOOL)arg3 companionAppInstalled:(BOOL)arg4 ;
-(id)initWithReachable:(BOOL)arg0 paired:(BOOL)arg1 appInstalled:(BOOL)arg2 complicationEnabled:(BOOL)arg3 remainingComplicationUserInfoTransfers:(NSUInteger)arg4 activePairingID:(id)arg5 pairedDevicesPairingIDs:(id)arg6 appInstallationID:(id)arg7 ;
-(id)initWithReachable:(BOOL)arg0 paired:(BOOL)arg1 appInstalled:(BOOL)arg2 complicationEnabled:(BOOL)arg3 remainingComplicationUserInfoTransfers:(NSUInteger)arg4 iOSDeviceNeedsFirstUnlock:(BOOL)arg5 pairingID:(id)arg6 pairedDevicesPairingIDs:(id)arg7 appInstallationID:(id)arg8 standaloneApp:(BOOL)arg9 companionAppInstalled:(BOOL)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif