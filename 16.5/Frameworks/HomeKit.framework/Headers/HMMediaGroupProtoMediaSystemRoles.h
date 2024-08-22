// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMEDIAGROUPPROTOMEDIASYSTEMROLES_H
#define HMMEDIAGROUPPROTOMEDIASYSTEMROLES_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMMediaGroupProtoMediaSystemRoles : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLeftDestinationIdentifier;
@property (readonly, nonatomic) BOOL hasRightDestinationIdentifier;
@property (retain, nonatomic) NSString *leftDestinationIdentifier; // ivar: _leftDestinationIdentifier
@property (retain, nonatomic) NSString *rightDestinationIdentifier; // ivar: _rightDestinationIdentifier


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