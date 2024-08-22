// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMAGICALMOMENTSPBMMENGAGEDTRACKER_H
#define ATXMAGICALMOMENTSPBMMENGAGEDTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMagicalMomentsPBMMEngagedTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (nonatomic) int anchor; // ivar: _anchor
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (nonatomic) BOOL hasAnchor;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasConsumerSubType;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)anchorAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAnchor:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif