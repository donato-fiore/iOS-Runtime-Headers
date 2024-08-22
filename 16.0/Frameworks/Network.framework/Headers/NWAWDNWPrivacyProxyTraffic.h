// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWAWDNWPRIVACYPROXYTRAFFIC_H
#define NWAWDNWPRIVACYPROXYTRAFFIC_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDNWPrivacyProxyTraffic : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL anyAppTrackers; // ivar: _anyAppTrackers
@property (nonatomic) BOOL anyDNS; // ivar: _anyDNS
@property (nonatomic) BOOL anyKnownTrackers; // ivar: _anyKnownTrackers
@property (nonatomic) BOOL anyUnencrypted; // ivar: _anyUnencrypted
@property (nonatomic) BOOL hasAnyAppTrackers;
@property (nonatomic) BOOL hasAnyDNS;
@property (nonatomic) BOOL hasAnyKnownTrackers;
@property (nonatomic) BOOL hasAnyUnencrypted;
@property (nonatomic) BOOL hasMailTrackers;
@property (nonatomic) BOOL hasNewsURLResolution;
@property (nonatomic) BOOL hasSafariAll;
@property (nonatomic) BOOL hasSafariDNS;
@property (nonatomic) BOOL hasSafariHTTP;
@property (nonatomic) BOOL hasSafariTrackers;
@property (nonatomic) BOOL hasSafariUnencrypted;
@property (nonatomic) BOOL mailTrackers; // ivar: _mailTrackers
@property (nonatomic) BOOL newsURLResolution; // ivar: _newsURLResolution
@property (nonatomic) BOOL safariAll; // ivar: _safariAll
@property (nonatomic) BOOL safariDNS; // ivar: _safariDNS
@property (nonatomic) BOOL safariHTTP; // ivar: _safariHTTP
@property (nonatomic) BOOL safariTrackers; // ivar: _safariTrackers
@property (nonatomic) BOOL safariUnencrypted; // ivar: _safariUnencrypted


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