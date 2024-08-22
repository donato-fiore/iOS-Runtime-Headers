// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGPBTYPINGSPEED_H
#define PSGPBTYPINGSPEED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PSGPBTypingSpeed : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (nonatomic) BOOL hasMessageDurationMilliseconds;
@property (nonatomic) BOOL hasMessageLength;
@property (nonatomic) BOOL hasMessageWords;
@property (readonly, nonatomic) BOOL hasWbExperimentId;
@property (readonly, nonatomic) BOOL hasWbTreatmentId;
@property (readonly, nonatomic) BOOL hasWbTreatmentName;
@property (readonly, nonatomic) BOOL hasZkwExperimentId;
@property (readonly, nonatomic) BOOL hasZkwTreatmentId;
@property (readonly, nonatomic) BOOL hasZkwTreatmentName;
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (nonatomic) int messageDurationMilliseconds; // ivar: _messageDurationMilliseconds
@property (nonatomic) int messageLength; // ivar: _messageLength
@property (nonatomic) int messageWords; // ivar: _messageWords
@property (retain, nonatomic) NSString *wbExperimentId; // ivar: _wbExperimentId
@property (retain, nonatomic) NSString *wbTreatmentId; // ivar: _wbTreatmentId
@property (retain, nonatomic) NSString *wbTreatmentName; // ivar: _wbTreatmentName
@property (retain, nonatomic) NSString *zkwExperimentId; // ivar: _zkwExperimentId
@property (retain, nonatomic) NSString *zkwTreatmentId; // ivar: _zkwTreatmentId
@property (retain, nonatomic) NSString *zkwTreatmentName; // ivar: _zkwTreatmentName


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