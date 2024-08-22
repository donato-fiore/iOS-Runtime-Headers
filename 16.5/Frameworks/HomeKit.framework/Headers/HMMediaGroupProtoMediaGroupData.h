// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMEDIAGROUPPROTOMEDIAGROUPDATA_H
#define HMMEDIAGROUPPROTOMEDIAGROUPDATA_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "HMMediaGroupProtoMediaGroupRole.h"

@interface HMMediaGroupProtoMediaGroupData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *associatedGroupIdentifier; // ivar: _associatedGroupIdentifier
@property (retain, nonatomic) NSMutableArray *destinationIdentifiers; // ivar: _destinationIdentifiers
@property (retain, nonatomic) HMMediaGroupProtoMediaGroupRole *groupRole; // ivar: _groupRole
@property (readonly, nonatomic) BOOL hasAssociatedGroupIdentifier;
@property (readonly, nonatomic) BOOL hasGroupRole;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsDefaultName;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isDefaultName; // ivar: _isDefaultName
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *parentIdentifier; // ivar: _parentIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(void)addDestinationIdentifiers:(id)arg0 ;
-(void)clearDestinationIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif