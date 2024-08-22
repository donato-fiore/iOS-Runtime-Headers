// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPSHARINGRESTORATIONSTORAGE_H
#define MSPSHARINGRESTORATIONSTORAGE_H

@class PBCodable, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface MSPSharingRestorationStorage : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (nonatomic) CGFloat createdTimestamp; // ivar: _createdTimestamp
@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (nonatomic) BOOL hasCreatedTimestamp;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (retain, nonatomic) NSMutableArray *mapsIdentifiers; // ivar: _mapsIdentifiers
@property (retain, nonatomic) NSMutableArray *messagesIdentifiers; // ivar: _messagesIdentifiers
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(Class)mapsIdentifierType;
+(Class)messagesIdentifierType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mapsIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)messagesIdentifierAtIndex:(NSUInteger)arg0 ;
-(void)addMapsIdentifier:(id)arg0 ;
-(void)addMessagesIdentifier:(id)arg0 ;
-(void)clearMapsIdentifiers;
-(void)clearMessagesIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif