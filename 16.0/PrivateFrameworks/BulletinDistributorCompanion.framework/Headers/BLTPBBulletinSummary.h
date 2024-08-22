// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTPBBULLETINSUMMARY_H
#define BLTPBBULLETINSUMMARY_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface BLTPBBulletinSummary : PBCodable <NSCopying>



@property (nonatomic) unsigned int destinations; // ivar: _destinations
@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (retain, nonatomic) NSMutableArray *keys; // ivar: _keys
@property (retain, nonatomic) NSString *publisherBulletinID; // ivar: _publisherBulletinID
@property (retain, nonatomic) NSString *recordID; // ivar: _recordID
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID


+(Class)keyType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keyAtIndex:(NSUInteger)arg0 ;
-(void)addKey:(id)arg0 ;
-(void)clearKeys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif