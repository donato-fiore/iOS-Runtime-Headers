// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDSYMPTOMSADVISORYAPPCANUSEALTERNATENETWORK_H
#define AWDSYMPTOMSADVISORYAPPCANUSEALTERNATENETWORK_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDSymptomsAdvisoryAppCanUseAlternateNetwork : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger allFlows; // ivar: _allFlows
@property (nonatomic) NSUInteger altUsage; // ivar: _altUsage
@property (nonatomic) int bailOutOf; // ivar: _bailOutOf
@property (retain, nonatomic) NSString *bundleName; // ivar: _bundleName
@property (nonatomic) int deliberation; // ivar: _deliberation
@property (nonatomic) BOOL hasAllFlows;
@property (nonatomic) BOOL hasAltUsage;
@property (nonatomic) BOOL hasBailOutOf;
@property (readonly, nonatomic) BOOL hasBundleName;
@property (nonatomic) BOOL hasDeliberation;
@property (nonatomic) BOOL hasJumboFlows;
@property (nonatomic) BOOL hasRationale;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWifiUsage;
@property (nonatomic) BOOL hasWwanUsage;
@property (nonatomic) NSUInteger jumboFlows; // ivar: _jumboFlows
@property (nonatomic) int rationale; // ivar: _rationale
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger wifiUsage; // ivar: _wifiUsage
@property (nonatomic) NSUInteger wwanUsage; // ivar: _wwanUsage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bailOutOfAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deliberationAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rationaleAsString:(int)arg0 ;
-(int)StringAsBailOutOf:(id)arg0 ;
-(int)StringAsDeliberation:(id)arg0 ;
-(int)StringAsRationale:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif