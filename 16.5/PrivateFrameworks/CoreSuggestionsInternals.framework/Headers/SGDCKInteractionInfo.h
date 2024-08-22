// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGDCKINTERACTIONINFO_H
#define SGDCKINTERACTIONINFO_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface SGDCKInteractionInfo : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasIntentResponseUserActivityString;
@property (readonly, nonatomic) BOOL hasInteractionBundleId;
@property (readonly, nonatomic) BOOL hasInteractionGroupId;
@property (readonly, nonatomic) BOOL hasInteractionId;
@property (readonly, nonatomic) BOOL hasInteractionTeamId;
@property (readonly, nonatomic) BOOL hasReservationContainerReference;
@property (readonly, nonatomic) BOOL hasReservationItemReferences;
@property (retain, nonatomic) NSString *intentResponseUserActivityString; // ivar: _intentResponseUserActivityString
@property (retain, nonatomic) NSString *interactionBundleId; // ivar: _interactionBundleId
@property (retain, nonatomic) NSString *interactionGroupId; // ivar: _interactionGroupId
@property (retain, nonatomic) NSString *interactionId; // ivar: _interactionId
@property (retain, nonatomic) NSString *interactionTeamId; // ivar: _interactionTeamId
@property (retain, nonatomic) NSData *reservationContainerReference; // ivar: _reservationContainerReference
@property (retain, nonatomic) NSData *reservationItemReferences; // ivar: _reservationItemReferences


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