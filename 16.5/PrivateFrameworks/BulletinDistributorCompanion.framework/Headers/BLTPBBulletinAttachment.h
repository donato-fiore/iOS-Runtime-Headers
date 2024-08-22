// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPBBULLETINATTACHMENT_H
#define BLTPBBULLETINATTACHMENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BLTPBBulletinAttachment : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsUpdated;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasURL;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isUpdated; // ivar: _isUpdated
@property (nonatomic) unsigned int type; // ivar: _type
@property (retain, nonatomic) NSString *uRL; // ivar: _uRL


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attachmentURLURL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif