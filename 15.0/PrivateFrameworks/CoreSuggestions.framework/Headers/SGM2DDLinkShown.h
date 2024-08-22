// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGM2DDLINKSHOWN_H
#define SGM2DDLINKSHOWN_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2DDLinkShown : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasInterface;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) int interface; // ivar: _interface
@property (retain, nonatomic) NSString *key; // ivar: _key


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)interfaceAsString:(int)arg0 ;
-(int)StringAsInterface:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif