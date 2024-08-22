// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBENVELOPEBATCH_H
#define NTPBENVELOPEBATCH_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBEnvelopeBatch : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int envelopeDroppedCountDueToSizeLimit; // ivar: _envelopeDroppedCountDueToSizeLimit
@property (retain, nonatomic) NSMutableArray *envelopes; // ivar: _envelopes
@property (nonatomic) BOOL hasEnvelopeDroppedCountDueToSizeLimit;
@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) BOOL hasPatchVersion;
@property (nonatomic) int majorVersion; // ivar: _majorVersion
@property (nonatomic) int minorVersion; // ivar: _minorVersion
@property (nonatomic) int patchVersion; // ivar: _patchVersion


+(Class)envelopeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)envelopeAtIndex:(NSUInteger)arg0 ;
-(void)addEnvelope:(id)arg0 ;
-(void)clearEnvelopes;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif