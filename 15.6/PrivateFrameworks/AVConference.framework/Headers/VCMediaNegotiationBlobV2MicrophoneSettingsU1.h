// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIANEGOTIATIONBLOBV2MICROPHONESETTINGSU1_H
#define VCMEDIANEGOTIATIONBLOBV2MICROPHONESETTINGSU1_H

@class PBCodable, NSSet;
@protocol NSCopying;



@interface VCMediaNegotiationBlobV2MicrophoneSettingsU1 : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) NSSet *audioPayloads;
@property (nonatomic) BOOL hasPayloads;
@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) unsigned int payloads; // ivar: _payloads
@property (nonatomic) unsigned int rtpSSRC; // ivar: _rtpSSRC


+(int)flagFromPayload:(int)arg0 ;
+(int)payloadFromFlag:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithSSRC:(unsigned int)arg0 audioPayloads:(id)arg1 ;
-(unsigned int)payloadBitmapWithAudioPayloads:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 prefix:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif