// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPPACKAGEMANIFESTHEADER_H
#define CKDPPACKAGEMANIFESTHEADER_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface CKDPPackageManifestHeader : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasSignature;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (nonatomic) int version; // ivar: _version


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