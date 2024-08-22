// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCODABLECONTACT_H
#define ASCODABLECONTACT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "ASCodableRelationshipContainer.h"

@interface ASCodableContact : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *destinations; // ivar: _destinations
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) BOOL hasFullName;
@property (readonly, nonatomic) BOOL hasLinkedContactStoreIdentifier;
@property (readonly, nonatomic) BOOL hasRelationshipContainer;
@property (readonly, nonatomic) BOOL hasRemoteRelationshipContainer;
@property (readonly, nonatomic) BOOL hasShortName;
@property (retain, nonatomic) NSString *linkedContactStoreIdentifier; // ivar: _linkedContactStoreIdentifier
@property (retain, nonatomic) ASCodableRelationshipContainer *relationshipContainer; // ivar: _relationshipContainer
@property (retain, nonatomic) ASCodableRelationshipContainer *remoteRelationshipContainer; // ivar: _remoteRelationshipContainer
@property (retain, nonatomic) NSString *shortName; // ivar: _shortName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(void)addDestinations:(id)arg0 ;
-(void)clearDestinations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif