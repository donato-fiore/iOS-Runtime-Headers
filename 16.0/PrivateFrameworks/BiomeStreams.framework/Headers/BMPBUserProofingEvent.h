// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBUSERPROOFINGEVENT_H
#define BMPBUSERPROOFINGEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBUserProofingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *age; // ivar: _age
@property (retain, nonatomic) NSString *deviceLanguage; // ivar: _deviceLanguage
@property (retain, nonatomic) NSString *ethnicity; // ivar: _ethnicity
@property (retain, nonatomic) NSString *gender; // ivar: _gender
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasAge;
@property (readonly, nonatomic) BOOL hasDeviceLanguage;
@property (readonly, nonatomic) BOOL hasEthnicity;
@property (readonly, nonatomic) BOOL hasGender;
@property (readonly, nonatomic) BOOL hasIssuer;
@property (readonly, nonatomic) BOOL hasProofingDecision;
@property (readonly, nonatomic) BOOL hasSkinTone;
@property (retain, nonatomic) NSString *issuer; // ivar: _issuer
@property (retain, nonatomic) NSString *proofingDecision; // ivar: _proofingDecision
@property (retain, nonatomic) NSString *skinTone; // ivar: _skinTone


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