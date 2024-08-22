// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATIONBLOBAUDIOSETTINGS_H
#define VCMEDIANEGOTIATIONBLOBAUDIOSETTINGS_H

@class PBCodable;
@protocol NSCopying;



@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL allowAudioRecording;
@property (readonly, nonatomic) BOOL allowAudioSwitching;
@property (nonatomic) unsigned int audioUnitModel; // ivar: _audioUnitModel
@property (nonatomic) BOOL hasAudioUnitModel;
@property (nonatomic) unsigned int payloadFlags; // ivar: _payloadFlags
@property (nonatomic) unsigned int rtpSSRC; // ivar: _rtpSSRC
@property (nonatomic) unsigned int secondaryFlags; // ivar: _secondaryFlags
@property (nonatomic) unsigned int supportFlags; // ivar: _supportFlags
@property (nonatomic) BOOL useSBR; // ivar: _useSBR


+(BOOL)isAudioPayloadSupported:(int)arg0 ;
+(int)negotiationPayloadFromPayload:(int)arg0 ;
+(int)payloadFromNegotiationPayload:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAudioConfiguration:(id)arg0 ;
-(id)newMediaNegotiatorAudioConfiguration;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif