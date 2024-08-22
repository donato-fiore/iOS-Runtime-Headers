// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTPBSECTIONBULLETINLIST_H
#define BLTPBSECTIONBULLETINLIST_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface BLTPBSectionBulletinList : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *bulletinIdentifiers; // ivar: _bulletinIdentifiers
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID


+(Class)bulletinIdentifierType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bulletinIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addBulletinIdentifier:(id)arg0 ;
-(void)clearBulletinIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif