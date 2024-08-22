// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBABSOLUTEPERSONALIZEDSECTIONPRESENCECONFIG_H
#define NTPBABSOLUTEPERSONALIZEDSECTIONPRESENCECONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBAbsolutePersonalizedSectionPresenceConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat cTRToHide; // ivar: _cTRToHide
@property (nonatomic) CGFloat cTRToShow; // ivar: _cTRToShow
@property (nonatomic) BOOL hasCTRToHide;
@property (nonatomic) BOOL hasCTRToShow;
@property (nonatomic) BOOL hasMinProbabilityToShow;
@property (nonatomic) BOOL hasSectionEdition;
@property (nonatomic) CGFloat minProbabilityToShow; // ivar: _minProbabilityToShow
@property (nonatomic) NSUInteger sectionEdition; // ivar: _sectionEdition


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif