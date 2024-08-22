// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPM2OBJECTSDELETED_H
#define PPM2OBJECTSDELETED_H

@class PBCodable;
@protocol NSCopying;



@interface PPM2ObjectsDeleted : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int domain; // ivar: _domain
@property (nonatomic) int donationSource; // ivar: _donationSource
@property (nonatomic) BOOL error; // ivar: _error
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasDonationSource;
@property (nonatomic) BOOL hasError;


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)domainAsString:(int)arg0 ;
-(id)donationSourceAsString:(int)arg0 ;
-(int)StringAsDomain:(id)arg0 ;
-(int)StringAsDonationSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif