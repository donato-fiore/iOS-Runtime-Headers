// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBMAILCONTENTEVENTFILTERINGSUBSET_H
#define BMPBMAILCONTENTEVENTFILTERINGSUBSET_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBMailContentEventFilteringSubset : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *domainId; // ivar: _domainId
@property (readonly, nonatomic) BOOL hasDomainId;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


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