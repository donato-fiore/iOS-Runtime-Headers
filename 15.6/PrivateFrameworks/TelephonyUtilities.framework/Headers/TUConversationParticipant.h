// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCONVERSATIONPARTICIPANT_H
#define TUCONVERSATIONPARTICIPANT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUConversationParticipantCapabilities.h"
#import "TUHandle.h"

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *activeIDSDestination; // ivar: _activeIDSDestination
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // ivar: _audioEnabled
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused; // ivar: _audioPaused
@property (nonatomic) NSInteger audioPriority; // ivar: _audioPriority
@property (copy, nonatomic) NSString *avcIdentifier; // ivar: _avcIdentifier
@property (copy, nonatomic) TUConversationParticipantCapabilities *capabilities; // ivar: _capabilities
@property (readonly, copy, nonatomic) TUHandle *handle; // ivar: _handle
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (nonatomic, getter=isLightweight) BOOL lightweight; // ivar: _lightweight
@property (nonatomic, getter=isLocalAccountHandle) BOOL localAccountHandle; // ivar: _localAccountHandle
@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable; // ivar: _momentsAvailable
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (nonatomic, getter=isRemoteAudioEnabled) BOOL remoteAudioEnabled; // ivar: _remoteAudioEnabled
@property (nonatomic, getter=isRemoteVideoEnabled) BOOL remoteVideoEnabled; // ivar: _remoteVideoEnabled
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled; // ivar: _screenEnabled
@property (nonatomic) NSInteger screenToken; // ivar: _screenToken
@property (nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // ivar: _videoEnabled
@property (nonatomic) NSInteger videoPriority; // ivar: _videoPriority


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToParticipant:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationParticipant:(id)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 handle:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif