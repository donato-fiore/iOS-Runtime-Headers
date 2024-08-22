// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBSHAREDDIGESTENGAGEMENTTRACKINGMETRICS_H
#define ATXPBSHAREDDIGESTENGAGEMENTTRACKINGMETRICS_H

@class PBCodable, NSString;
@protocol ATXJSONSerializableProtocol, NSCopying;



@interface ATXPBSharedDigestEngagementTrackingMetrics : PBCodable <ATXJSONSerializableProtocol, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNumDigestExpansions;
@property (nonatomic) BOOL hasNumEngagementsAfterExpiration;
@property (nonatomic) BOOL hasNumEngagementsInScheduled;
@property (nonatomic) BOOL hasNumEngagementsInUpcoming;
@property (nonatomic) BOOL hasNumExpansions;
@property (readonly, nonatomic) BOOL hasSectionIdentifier;
@property (nonatomic) BOOL hasSectionPosition;
@property (nonatomic) BOOL hasSectionSize;
@property (nonatomic) NSUInteger numDigestExpansions; // ivar: _numDigestExpansions
@property (nonatomic) NSUInteger numEngagementsAfterExpiration; // ivar: _numEngagementsAfterExpiration
@property (nonatomic) NSUInteger numEngagementsInScheduled; // ivar: _numEngagementsInScheduled
@property (nonatomic) NSUInteger numEngagementsInUpcoming; // ivar: _numEngagementsInUpcoming
@property (nonatomic) NSUInteger numExpansions; // ivar: _numExpansions
@property (retain, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (nonatomic) NSUInteger sectionPosition; // ivar: _sectionPosition
@property (nonatomic) NSUInteger sectionSize; // ivar: _sectionSize


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif