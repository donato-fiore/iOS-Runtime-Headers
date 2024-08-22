// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMAPPLEFELDSPARPROTOCOLLIVERPOOLCOHORT_H
#define COMAPPLEFELDSPARPROTOCOLLIVERPOOLCOHORT_H

@class PBCodable;
@protocol NSCopying;



@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat clicks; // ivar: _clicks
@property (nonatomic) BOOL hasClicks;
@property (nonatomic) BOOL hasImpressions;
@property (nonatomic) BOOL hasRawClicks;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) CGFloat impressions; // ivar: _impressions
@property (nonatomic) CGFloat rawClicks; // ivar: _rawClicks
@property (nonatomic) NSInteger timestamp; // ivar: _timestamp
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif