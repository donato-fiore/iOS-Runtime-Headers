// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCODABLEFINALIZEHANDSHAKE_H
#define ASCODABLEFINALIZEHANDSHAKE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ASCodableActivityDataPreview.h"
#import "ASCodableShareLocations.h"

@interface ASCodableFinalizeHandshake : PBCodable <NSCopying>



@property (retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview; // ivar: _activityDataPreview
@property (retain, nonatomic) NSString *handshakeToken; // ivar: _handshakeToken
@property (readonly, nonatomic) BOOL hasActivityDataPreview;
@property (readonly, nonatomic) BOOL hasHandshakeToken;
@property (readonly, nonatomic) BOOL hasInviterShareLocations;
@property (retain, nonatomic) ASCodableShareLocations *inviterShareLocations; // ivar: _inviterShareLocations


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