// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIPMULTIVERSEIDENTIFIER_H
#define MIPMULTIVERSEIDENTIFIER_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface MIPMultiverseIdentifier : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger accountId; // ivar: _accountId
@property (retain, nonatomic) NSString *cloudUniversalLibraryId; // ivar: _cloudUniversalLibraryId
@property (nonatomic) BOOL hasAccountId;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (nonatomic) BOOL hasMediaObjectType;
@property (nonatomic) BOOL hasMediaType;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasPurchaseHistoryId;
@property (nonatomic) BOOL hasSagaId;
@property (nonatomic) BOOL hasStoreId;
@property (retain, nonatomic) NSMutableArray *libraryIdentifiers; // ivar: _libraryIdentifiers
@property (nonatomic) int mediaObjectType; // ivar: _mediaObjectType
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger purchaseHistoryId; // ivar: _purchaseHistoryId
@property (nonatomic) NSInteger sagaId; // ivar: _sagaId
@property (nonatomic) NSInteger storeId; // ivar: _storeId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)libraryIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)mediaObjectTypeAsString:(int)arg0 ;
-(id)mediaTypeAsString:(int)arg0 ;
-(int)StringAsMediaObjectType:(id)arg0 ;
-(int)StringAsMediaType:(id)arg0 ;
-(void)addLibraryIdentifiers:(id)arg0 ;
-(void)clearLibraryIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif