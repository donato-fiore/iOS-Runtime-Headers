// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIMMUTABLESETTINGSPROTOLANGUAGEVALUEEVENT_H
#define HMIMMUTABLESETTINGSPROTOLANGUAGEVALUEEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMImmutableSettingsProtoLanguageValueEvent : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasInputLanguageCode;
@property (readonly, nonatomic) BOOL hasOutputVoiceGenderCode;
@property (readonly, nonatomic) BOOL hasOutputVoiceLanguageCode;
@property (readonly, nonatomic) BOOL hasVoiceName;
@property (retain, nonatomic) NSString *inputLanguageCode; // ivar: _inputLanguageCode
@property (retain, nonatomic) NSString *outputVoiceGenderCode; // ivar: _outputVoiceGenderCode
@property (retain, nonatomic) NSString *outputVoiceLanguageCode; // ivar: _outputVoiceLanguageCode
@property (retain, nonatomic) NSString *voiceName; // ivar: _voiceName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif