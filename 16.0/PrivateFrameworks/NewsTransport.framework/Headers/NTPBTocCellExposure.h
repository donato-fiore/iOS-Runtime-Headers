// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBTOCCELLEXPOSURE_H
#define NTPBTOCCELLEXPOSURE_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "NTPBFeedCellExposure.h"
#import "NTPBTocCellExposureArticleElement.h"

@interface NTPBTocCellExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int displayRank; // ivar: _displayRank
@property (retain, nonatomic) NTPBFeedCellExposure *feedCellExposure; // ivar: _feedCellExposure
@property (nonatomic) BOOL hasDisplayRank;
@property (readonly, nonatomic) BOOL hasFeedCellExposure;
@property (nonatomic) BOOL hasIsBadged;
@property (nonatomic) BOOL hasRankInSection;
@property (readonly, nonatomic) BOOL hasTocCellExposureArticleElement;
@property (readonly, nonatomic) BOOL hasTocCellExposureId;
@property (nonatomic) BOOL hasTocCellSection;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL isBadged; // ivar: _isBadged
@property (nonatomic) int rankInSection; // ivar: _rankInSection
@property (retain, nonatomic) NTPBTocCellExposureArticleElement *tocCellExposureArticleElement; // ivar: _tocCellExposureArticleElement
@property (retain, nonatomic) NSData *tocCellExposureId; // ivar: _tocCellExposureId
@property (nonatomic) int tocCellSection; // ivar: _tocCellSection
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tocCellSectionAsString:(int)arg0 ;
-(int)StringAsTocCellSection:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif