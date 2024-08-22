// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCALLUPDATE_H
#define CXCALLUPDATE_H

@class NSString, NSUUID, NSSet, NSDictionary;
@protocol CXCopying, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CXAccount.h"
#import "CXParticipant.h"
#import "CXHandoffContext.h"
#import "CXSandboxExtendedURL.h"
#import "CXHandle.h"
#import "CXScreenShareAttributes.h"

@interface CXCallUpdate : NSObject <CXCopying, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *ISOCountryCode; // ivar: _ISOCountryCode
@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (retain, nonatomic) CXAccount *account; // ivar: _account
@property (retain, nonatomic) CXParticipant *activeRemoteParticipant; // ivar: _activeRemoteParticipant
@property (copy, nonatomic) NSSet *activeRemoteParticipantHandles; // ivar: _activeRemoteParticipantHandles
@property (copy, nonatomic) NSString *announceProviderIdentifier; // ivar: _announceProviderIdentifier
@property (copy, nonatomic) NSString *audioCategory; // ivar: _audioCategory
@property (nonatomic) NSInteger audioInterruptionOperationMode; // ivar: _audioInterruptionOperationMode
@property (nonatomic) NSInteger audioInterruptionProvider; // ivar: _audioInterruptionProvider
@property (copy, nonatomic) NSString *audioMode; // ivar: _audioMode
@property (nonatomic, getter=isBlocked) BOOL blocked; // ivar: _blocked
@property (nonatomic) NSInteger bluetoothAudioFormat; // ivar: _bluetoothAudioFormat
@property (copy, nonatomic) NSDictionary *context; // ivar: _context
@property (nonatomic, getter=isConversation) BOOL conversation; // ivar: _conversation
@property (copy, nonatomic) NSString *crossDeviceIdentifier; // ivar: _crossDeviceIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmergency) BOOL emergency; // ivar: _emergency
@property (nonatomic, getter=isFailureExpected) BOOL failureExpected; // ivar: _failureExpected
@property (retain, nonatomic) CXHandoffContext *handoffContext; // ivar: _handoffContext
@property (nonatomic) CXCallUpdateHasSet hasSet; // ivar: _hasSet
@property (nonatomic) BOOL hasVideo; // ivar: _hasVideo
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger identificationCategory; // ivar: _identificationCategory
@property (nonatomic) BOOL ignoresBluetoothDeviceUID; // ivar: _ignoresBluetoothDeviceUID
@property (nonatomic) NSInteger inCallSoundRegion; // ivar: _inCallSoundRegion
@property (nonatomic) NSInteger junkConfidence; // ivar: _junkConfidence
@property (copy, nonatomic) NSUUID *localSenderIdentityAccountUUID; // ivar: _localSenderIdentityAccountUUID
@property (copy, nonatomic) NSUUID *localSenderIdentityUUID; // ivar: _localSenderIdentityUUID
@property (copy, nonatomic) CXSandboxExtendedURL *localizedCallerImageURL; // ivar: _localizedCallerImageURL
@property (copy, nonatomic) NSString *localizedCallerName; // ivar: _localizedCallerName
@property (nonatomic) BOOL mayRequireBreakBeforeMake; // ivar: _mayRequireBreakBeforeMake
@property (nonatomic) BOOL mediaPlaybackOnExternalDevice; // ivar: _mediaPlaybackOnExternalDevice
@property (nonatomic) BOOL mixesVoiceWithMedia; // ivar: _mixesVoiceWithMedia
@property (nonatomic, getter=isMutuallyExclusiveCall) BOOL mutuallyExclusiveCall; // ivar: _mutuallyExclusiveCall
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled; // ivar: _oneToOneModeEnabled
@property (copy, nonatomic) NSSet *otherInvitedHandles; // ivar: _otherInvitedHandles
@property (retain, nonatomic) NSUUID *participantGroupUUID; // ivar: _participantGroupUUID
@property (nonatomic) BOOL prefersExclusiveAccessToCellularNetwork; // ivar: _prefersExclusiveAccessToCellularNetwork
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (copy, nonatomic) CXHandle *remoteHandle; // ivar: _remoteHandle
@property (copy, nonatomic) NSSet *remoteParticipantHandles; // ivar: _remoteParticipantHandles
@property (nonatomic, getter=isRemoteUplinkMuted) BOOL remoteUplinkMuted; // ivar: _remoteUplinkMuted
@property (nonatomic) BOOL requiresAuthentication; // ivar: _requiresAuthentication
@property (nonatomic) BOOL requiresInCallSounds; // ivar: _requiresInCallSounds
@property (retain, nonatomic) CXScreenShareAttributes *screenShareAttributes; // ivar: _screenShareAttributes
@property (nonatomic, getter=isSendingVideo) BOOL sendingVideo; // ivar: _sendingVideo
@property (nonatomic) NSInteger serviceStatus; // ivar: _serviceStatus
@property (nonatomic, getter=isSharingScreen) BOOL sharingScreen; // ivar: _sharingScreen
@property (nonatomic) BOOL shouldSuppressInCallUI; // ivar: _shouldSuppressInCallUI
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAddCall; // ivar: _supportsAddCall
@property (nonatomic) BOOL supportsDTMF; // ivar: _supportsDTMF
@property (nonatomic) BOOL supportsEmergencyFallback; // ivar: _supportsEmergencyFallback
@property (nonatomic) BOOL supportsGrouping; // ivar: _supportsGrouping
@property (nonatomic) BOOL supportsHolding; // ivar: _supportsHolding
@property (nonatomic) BOOL supportsSendingToVoicemail; // ivar: _supportsSendingToVoicemail
@property (nonatomic) BOOL supportsTTYWithVoice; // ivar: _supportsTTYWithVoice
@property (nonatomic) BOOL supportsUnambiguousMultiPartyState; // ivar: _supportsUnambiguousMultiPartyState
@property (nonatomic) BOOL supportsUngrouping; // ivar: _supportsUngrouping
@property (nonatomic) NSInteger transmissionMode; // ivar: _transmissionMode
@property (nonatomic, setter=setTTYType:) NSInteger ttyType; // ivar: _ttyType
@property (nonatomic, getter=isUsingBaseband) BOOL usingBaseband; // ivar: _usingBaseband
@property (nonatomic) NSInteger verificationStatus; // ivar: _verificationStatus
@property (nonatomic) NSInteger videoStreamToken; // ivar: _videoStreamToken


+(BOOL)supportsSecureCoding;
+(id)callUpdateWithDefaultValuesSet;
-(BOOL)blocked;
-(BOOL)conversation;
-(BOOL)emergency;
-(BOOL)failureExpected;
-(BOOL)mutuallyExclusiveCall;
-(BOOL)oneToOneModeEnabled;
-(BOOL)remoteUplinkMuted;
-(BOOL)sendingVideo;
-(BOOL)sharingScreen;
-(BOOL)usingBaseband;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopy;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateWithUpdate:(id)arg0 ;


@end


#endif