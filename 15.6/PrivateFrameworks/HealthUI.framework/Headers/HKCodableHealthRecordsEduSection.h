// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLEHEALTHRECORDSEDUSECTION_H
#define HKCODABLEHEALTHRECORDSEDUSECTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface HKCodableHealthRecordsEduSection : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasSectionLocalizedContent;
@property (nonatomic) BOOL hasSectionType;
@property (retain, nonatomic) NSMutableArray *sectionAttributions; // ivar: _sectionAttributions
@property (retain, nonatomic) NSMutableArray *sectionCitations; // ivar: _sectionCitations
@property (retain, nonatomic) NSMutableArray *sectionLocaleIdentifiers; // ivar: _sectionLocaleIdentifiers
@property (retain, nonatomic) NSString *sectionLocalizedContent; // ivar: _sectionLocalizedContent
@property (nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (retain, nonatomic) NSMutableArray *sectionValidRegionCodes; // ivar: _sectionValidRegionCodes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sectionAttributionsAtIndex:(NSUInteger)arg0 ;
-(id)sectionCitationsAtIndex:(NSUInteger)arg0 ;
-(id)sectionLocaleIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)sectionValidRegionCodesAtIndex:(NSUInteger)arg0 ;
-(void)addSectionAttributions:(id)arg0 ;
-(void)addSectionCitations:(id)arg0 ;
-(void)addSectionLocaleIdentifiers:(id)arg0 ;
-(void)addSectionValidRegionCodes:(id)arg0 ;
-(void)clearSectionAttributions;
-(void)clearSectionCitations;
-(void)clearSectionLocaleIdentifiers;
-(void)clearSectionValidRegionCodes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif