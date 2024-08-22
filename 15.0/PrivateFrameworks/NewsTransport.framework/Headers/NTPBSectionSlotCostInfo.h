// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBSECTIONSLOTCOSTINFO_H
#define NTPBSECTIONSLOTCOSTINFO_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBSectionSlotCostInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHeadlineSlotCost;
@property (nonatomic) BOOL hasSectionFooterSlotCost;
@property (nonatomic) BOOL hasSectionTitleSlotCost;
@property (nonatomic) CGFloat headlineSlotCost; // ivar: _headlineSlotCost
@property (nonatomic) CGFloat sectionFooterSlotCost; // ivar: _sectionFooterSlotCost
@property (nonatomic) CGFloat sectionTitleSlotCost; // ivar: _sectionTitleSlotCost


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