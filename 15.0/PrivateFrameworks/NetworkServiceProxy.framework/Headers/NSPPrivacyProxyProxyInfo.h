// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYPROXYPROXYINFO_H
#define NSPPRIVACYPROXYPROXYINFO_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface NSPPrivacyProxyProxyInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSupportsFallback;
@property (readonly, nonatomic) BOOL hasTcpProxyFqdn;
@property (readonly, nonatomic) BOOL hasVendor;
@property (nonatomic) int proxyHop; // ivar: _proxyHop
@property (retain, nonatomic) NSMutableArray *proxyKeyInfos; // ivar: _proxyKeyInfos
@property (retain, nonatomic) NSString *proxyURL; // ivar: _proxyURL
@property (nonatomic) BOOL supportsFallback; // ivar: _supportsFallback
@property (retain, nonatomic) NSString *tcpProxyFqdn; // ivar: _tcpProxyFqdn
@property (retain, nonatomic) NSData *tokenKeyInfo; // ivar: _tokenKeyInfo
@property (retain, nonatomic) NSString *vendor; // ivar: _vendor


+(Class)proxyKeyInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)proxyHopAsString:(int)arg0 ;
-(id)proxyKeyInfoAtIndex:(NSUInteger)arg0 ;
-(int)StringAsProxyHop:(id)arg0 ;
-(void)addProxyKeyInfo:(id)arg0 ;
-(void)clearProxyKeyInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif