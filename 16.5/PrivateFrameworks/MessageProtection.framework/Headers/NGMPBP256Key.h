// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NGMPBP256KEY_H
#define NGMPBP256KEY_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface NGMPBP256Key : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasKeyData;
@property (readonly, nonatomic) BOOL hasKeychainTag;
@property (retain, nonatomic) NSData *keyData; // ivar: _keyData
@property (retain, nonatomic) NSString *keychainTag; // ivar: _keychainTag
@property (nonatomic) int keystore; // ivar: _keystore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keystoreAsString:(int)arg0 ;
-(int)StringAsKeystore:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif