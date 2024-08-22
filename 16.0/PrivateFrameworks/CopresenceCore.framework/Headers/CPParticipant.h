// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPPARTICIPANT_H
#define CPPARTICIPANT_H

@class NSUUID, NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying, CPArchivable;

#import <Foundation/Foundation.h>


@interface CPParticipant : NSObject <NSSecureCoding, NSCopying, CPArchivable>

 {
    unsigned char _localStatus;
}


@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // ivar: _audioEnabled
@property (readonly, nonatomic) NSInteger audioToken; // ivar: _audioToken
@property (readonly, copy, nonatomic) NSDictionary *avcStreams; // ivar: _avcStreams
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned char localStatus;
@property (nonatomic, getter=isMirageAvailable) BOOL mirageAvailable; // ivar: _mirageAvailable
@property (readonly, nonatomic) NSUInteger participantID;
@property (nonatomic, setter=_setParticipantIdentifier:) NSUInteger participantIdentifier; // ivar: _participantIdentifier
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled; // ivar: _screenEnabled
@property (nonatomic) NSInteger screenToken; // ivar: _screenToken
@property (readonly, nonatomic) NSUInteger spatialAudioSourceID;
@property (nonatomic, setter=_setSpatialAudioSourceIdentifier:) NSUInteger spatialAudioSourceIdentifier; // ivar: _spatialAudioSourceIdentifier
@property (nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userContext; // ivar: _userContext
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // ivar: _videoEnabled


+(BOOL)supportsSecureCoding;
+(id)_deserializeFrom:(id)arg0 ;
-(BOOL)_isLocal;
-(BOOL)_isNearby;
-(BOOL)_isSpectator;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToParticipant:(id)arg0 ;
-(id)_serialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)_setAVCStreams:(id)arg0 ;
-(void)_setSpatialAudioSourceId:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif