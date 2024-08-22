// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLEHEALTHRECORDSLOCALIZEDEDUCATIONCONTENTSECTION_H
#define HKCODABLEHEALTHRECORDSLOCALIZEDEDUCATIONCONTENTSECTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface HKCodableHealthRecordsLocalizedEducationContentSection : PBCodable <NSCopying>

 {
    APPLE_167 _has;
}


@property (readonly, nonatomic) BOOL hasSectionLocaleIdentifier;
@property (readonly, nonatomic) BOOL hasSectionLocalizedContent;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSMutableArray *sectionAttributions; // ivar: _sectionAttributions
@property (retain, nonatomic) NSMutableArray *sectionCitations; // ivar: _sectionCitations
@property (retain, nonatomic) NSString *sectionLocaleIdentifier; // ivar: _sectionLocaleIdentifier
@property (retain, nonatomic) NSString *sectionLocalizedContent; // ivar: _sectionLocalizedContent
@property (retain, nonatomic) NSMutableArray *sectionValidRegionCodes; // ivar: _sectionValidRegionCodes
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sectionAttributionsAtIndex:(NSUInteger)arg0 ;
-(id)sectionCitationsAtIndex:(NSUInteger)arg0 ;
-(id)sectionValidRegionCodesAtIndex:(NSUInteger)arg0 ;
-(void)addSectionAttributions:(id)arg0 ;
-(void)addSectionCitations:(id)arg0 ;
-(void)addSectionValidRegionCodes:(id)arg0 ;
-(void)clearSectionAttributions;
-(void)clearSectionCitations;
-(void)clearSectionValidRegionCodes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif