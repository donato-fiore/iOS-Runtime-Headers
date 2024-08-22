// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGM2CONTACTDETAILUSED_H
#define SGM2CONTACTDETAILUSED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2ContactDetailUsed : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int app; // ivar: _app
@property (nonatomic) BOOL hasApp;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsApp:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif