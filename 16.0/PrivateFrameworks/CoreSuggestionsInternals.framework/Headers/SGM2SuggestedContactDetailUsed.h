// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGM2SUGGESTEDCONTACTDETAILUSED_H
#define SGM2SUGGESTEDCONTACTDETAILUSED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2SuggestedContactDetailUsed : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int app; // ivar: _app
@property (nonatomic) BOOL hasApp;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key; // ivar: _key


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsApp:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif