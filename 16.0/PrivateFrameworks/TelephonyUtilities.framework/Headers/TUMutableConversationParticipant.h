// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUMUTABLECONVERSATIONPARTICIPANT_H
#define TUMUTABLECONVERSATIONPARTICIPANT_H

@class NSString;


#import "TUConversationParticipant.h"
#import "TUConversationParticipantAssociation.h"
#import "TUConversationParticipantCapabilities.h"
#import "TUHandle.h"

@interface TUMutableConversationParticipant : TUConversationParticipant

@property (copy, nonatomic) NSString *activeIDSDestination;
@property (copy, nonatomic) TUConversationParticipantAssociation *association;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic) NSInteger audioPriority;
@property (nonatomic) NSUInteger audioVideoMode;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (copy, nonatomic) TUConversationParticipantCapabilities *capabilities;
@property (nonatomic) NSInteger captionsToken;
@property (nonatomic, getter=isGuestModeEnabled) BOOL guestModeEnabled;
@property (copy, nonatomic) TUHandle *handle;
@property (nonatomic) NSUInteger identifier;
@property (nonatomic, getter=isLightweight) BOOL lightweight;
@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isRemoteAudioEnabled) BOOL remoteAudioEnabled;
@property (nonatomic, getter=isRemoteVideoEnabled) BOOL remoteVideoEnabled;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic) NSInteger screenToken;
@property (nonatomic) NSInteger streamToken;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic) NSInteger videoPriority;




@end


#endif