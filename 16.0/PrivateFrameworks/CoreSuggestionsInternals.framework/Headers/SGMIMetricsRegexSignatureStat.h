// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMIMETRICSREGEXSIGNATURESTAT_H
#define SGMIMETRICSREGEXSIGNATURESTAT_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface SGMIMetricsRegexSignatureStat : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int blockedWarningCount; // ivar: _blockedWarningCount
@property (retain, nonatomic) NSString *emailLanguage; // ivar: _emailLanguage
@property (nonatomic) BOOL hasBlockedWarningCount;
@property (readonly, nonatomic) BOOL hasEmailLanguage;
@property (nonatomic) BOOL hasIncomingMessage;
@property (nonatomic) BOOL hasNegativeEngagement;
@property (nonatomic) BOOL hasNoEngagement;
@property (nonatomic) BOOL hasPositiveEngagement;
@property (readonly, nonatomic) BOOL hasRegexLanguage;
@property (readonly, nonatomic) BOOL hasSignature;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL incomingMessage; // ivar: _incomingMessage
@property (nonatomic) unsigned int negativeEngagement; // ivar: _negativeEngagement
@property (nonatomic) unsigned int noEngagement; // ivar: _noEngagement
@property (nonatomic) unsigned int positiveEngagement; // ivar: _positiveEngagement
@property (retain, nonatomic) NSString *regexLanguage; // ivar: _regexLanguage
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif