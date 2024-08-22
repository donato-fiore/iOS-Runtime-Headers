// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCALLPROVIDER_H
#define TUCALLPROVIDER_H

@class NSString, NSURL, NSArray, NSData, NSOrderedSet, NSSet;
@protocol NSSecureCoding, NSCopying, OS_tcc_identity;

#import <Foundation/Foundation.h>

#import "TUSandboxExtendedURL.h"

@interface TUCallProvider : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (copy, nonatomic) NSArray *emergencyHandles; // ivar: _emergencyHandles
@property (copy, nonatomic) NSArray *emergencyLabeledHandles; // ivar: _emergencyLabeledHandles
@property (readonly, nonatomic, getter=isFaceTimeProvider) BOOL faceTimeProvider;
@property (copy, nonatomic) NSArray *handoffIdentifiers; // ivar: _handoffIdentifiers
@property (copy, nonatomic) NSData *iconTemplateImageData; // ivar: _iconTemplateImageData
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic) NSUInteger maximumCallGroups; // ivar: _maximumCallGroups
@property (nonatomic) NSUInteger maximumCallsPerCallGroup; // ivar: _maximumCallsPerCallGroup
@property (retain, nonatomic) NSURL *originalRingtoneSoundURL; // ivar: _originalRingtoneSoundURL
@property (copy, nonatomic) NSOrderedSet *prioritizedSenderIdentities; // ivar: _prioritizedSenderIdentities
@property (retain, nonatomic) NSURL *ringtoneSoundURL;
@property (retain, nonatomic) TUSandboxExtendedURL *sandboxExtendedRingtoneSoundURL; // ivar: _sandboxExtendedRingtoneSoundURL
@property (nonatomic) NSInteger sandboxExtensionHandle; // ivar: _sandboxExtensionHandle
@property (readonly, nonatomic, getter=isSuperboxProvider) BOOL superboxProvider;
@property (copy, nonatomic) NSSet *supportedHandleTypes; // ivar: _supportedHandleTypes
@property (nonatomic) BOOL supportsAudioAndVideo; // ivar: _supportsAudioAndVideo
@property (nonatomic) BOOL supportsAudioOnly; // ivar: _supportsAudioOnly
@property (nonatomic) BOOL supportsCurrentPlatform; // ivar: _supportsCurrentPlatform
@property (nonatomic) BOOL supportsEmergency; // ivar: _supportsEmergency
@property (nonatomic) BOOL supportsRecents; // ivar: _supportsRecents
@property (nonatomic) BOOL supportsVoicemail; // ivar: _supportsVoicemail
@property (readonly, nonatomic, getter=isTelephonyProvider) BOOL telephonyProvider;


+(BOOL)supportsSecureCoding;
-(BOOL)hasRestrictionsInRetailEnvironment;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCallProvider:(id)arg0 ;
-(BOOL)isSystemProvider;
-(BOOL)isTinCanProvider;
-(BOOL)prefersShowingInCallUI;
-(BOOL)supportsHandleType:(NSInteger)arg0 ;
-(BOOL)supportsShowingInCallUI;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayAppBundleIdentifier;
-(id)inCallUIBundleIdentifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)senderIdentities;
-(id)senderIdentityForAccountUUID:(id)arg0 ;
-(id)senderIdentityForHandle:(id)arg0 ;
-(id)senderIdentityForUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setSenderIdentities:(id)arg0 ;


@end


#endif