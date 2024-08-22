// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMAGICALMOMENTSPBMMPREDICTEDSCORETRACKER_H
#define ATXMAGICALMOMENTSPBMMPREDICTEDSCORETRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMagicalMomentsPBMMPredictedScoreTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (nonatomic) int anchor; // ivar: _anchor
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (nonatomic) BOOL hasAnchor;
@property (readonly, nonatomic) BOOL hasTopBundleId;
@property (retain, nonatomic) NSString *topBundleId; // ivar: _topBundleId


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