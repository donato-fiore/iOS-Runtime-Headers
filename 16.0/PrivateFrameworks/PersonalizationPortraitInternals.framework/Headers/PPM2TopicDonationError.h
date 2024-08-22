// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPM2TOPICDONATIONERROR_H
#define PPM2TOPICDONATIONERROR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPM2TopicDonationError : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activeTreatments; // ivar: _activeTreatments
@property (nonatomic) NSInteger code; // ivar: _code
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int reason; // ivar: _reason
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reasonAsString:(int)arg0 ;
-(id)sourceAsString:(int)arg0 ;
-(int)StringAsReason:(id)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif