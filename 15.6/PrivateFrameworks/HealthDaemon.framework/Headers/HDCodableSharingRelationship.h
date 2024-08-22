// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLESHARINGRELATIONSHIP_H
#define HDCODABLESHARINGRELATIONSHIP_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface HDCodableSharingRelationship : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *authorizationIdentifiers; // ivar: _authorizationIdentifiers
@property (nonatomic) CGFloat dateModified; // ivar: _dateModified
@property (nonatomic) BOOL hasDateModified;
@property (readonly, nonatomic) BOOL hasRecipientIdentifier;
@property (nonatomic) BOOL hasRecipientType;
@property (retain, nonatomic) NSString *recipientIdentifier; // ivar: _recipientIdentifier
@property (nonatomic) int recipientType; // ivar: _recipientType
@property (retain, nonatomic) NSMutableArray *sharingAuthorizations; // ivar: _sharingAuthorizations


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)authorizationIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recipientTypeAsString:(int)arg0 ;
-(id)sharingAuthorizationsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRecipientType:(id)arg0 ;
-(void)addAuthorizationIdentifiers:(id)arg0 ;
-(void)addSharingAuthorizations:(id)arg0 ;
-(void)clearAuthorizationIdentifiers;
-(void)clearSharingAuthorizations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif