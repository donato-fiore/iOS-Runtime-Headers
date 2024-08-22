// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPM2UNMAPPEDMATCHEDFEEDBACK_H
#define PPM2UNMAPPEDMATCHEDFEEDBACK_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPM2UnmappedMatchedFeedback : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *activeTreatments; // ivar: _activeTreatments
@property (retain, nonatomic) NSString *clientId; // ivar: _clientId
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (readonly, nonatomic) BOOL hasClientId;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (retain, nonatomic) NSString *mappingId; // ivar: _mappingId


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