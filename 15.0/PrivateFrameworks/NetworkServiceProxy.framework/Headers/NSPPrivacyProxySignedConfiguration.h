// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYPROXYSIGNEDCONFIGURATION_H
#define NSPPRIVACYPROXYSIGNEDCONFIGURATION_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;


#import "NSPPrivacyProxyConfiguration.h"

@interface NSPPrivacyProxySignedConfiguration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int algorithm; // ivar: _algorithm
@property (retain, nonatomic) NSMutableArray *certificates; // ivar: _certificates
@property (retain, nonatomic) NSPPrivacyProxyConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL hasAlgorithm;
@property (retain, nonatomic) NSData *signature; // ivar: _signature


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)algorithmAsString:(int)arg0 ;
-(id)certificatesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAlgorithm:(id)arg0 ;
-(void)addCertificates:(id)arg0 ;
-(void)clearCertificates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif