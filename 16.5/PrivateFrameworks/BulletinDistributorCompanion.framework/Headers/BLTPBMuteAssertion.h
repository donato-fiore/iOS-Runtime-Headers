// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPBMUTEASSERTION_H
#define BLTPBMUTEASSERTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface BLTPBMuteAssertion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat expirationDate; // ivar: _expirationDate
@property (nonatomic) BOOL hasExpirationDate;
@property (retain, nonatomic) NSMutableArray *sectionBulletinLists; // ivar: _sectionBulletinLists


+(Class)sectionBulletinListType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sectionBulletinListAtIndex:(NSUInteger)arg0 ;
-(void)addSectionBulletinList:(id)arg0 ;
-(void)clearSectionBulletinLists;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif