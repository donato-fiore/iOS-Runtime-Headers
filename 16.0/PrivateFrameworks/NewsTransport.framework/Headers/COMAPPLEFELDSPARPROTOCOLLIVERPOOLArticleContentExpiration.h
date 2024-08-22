// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMAPPLEFELDSPARPROTOCOLLIVERPOOLARTICLECONTENTEXPIRATION_H
#define COMAPPLEFELDSPARPROTOCOLLIVERPOOLARTICLECONTENTEXPIRATION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger globalExpireUtcTime; // ivar: _globalExpireUtcTime
@property (nonatomic) BOOL hasGlobalExpireUtcTime;
@property (retain, nonatomic) NSMutableArray *tagsExpirationLists; // ivar: _tagsExpirationLists


+(Class)tagsExpirationListType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tagsExpirationListAtIndex:(NSUInteger)arg0 ;
-(void)addTagsExpirationList:(id)arg0 ;
-(void)clearTagsExpirationLists;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif