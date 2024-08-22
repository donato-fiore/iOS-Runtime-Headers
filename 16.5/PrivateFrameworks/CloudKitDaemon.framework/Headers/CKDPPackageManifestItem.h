// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPPACKAGEMANIFESTITEM_H
#define CKDPPACKAGEMANIFESTITEM_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface CKDPPackageManifestItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLastItem;
@property (readonly, nonatomic) BOOL hasSignature;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL lastItem; // ivar: _lastItem
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (nonatomic) NSInteger size; // ivar: _size


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