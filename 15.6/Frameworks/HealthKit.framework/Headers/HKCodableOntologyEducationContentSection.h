// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLEONTOLOGYEDUCATIONCONTENTSECTION_H
#define HKCODABLEONTOLOGYEDUCATIONCONTENTSECTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface HKCodableOntologyEducationContentSection : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *attributions; // ivar: _attributions
@property (retain, nonatomic) NSMutableArray *citations; // ivar: _citations
@property (readonly, nonatomic) BOOL hasLocalizedText;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *localeIdentifiers; // ivar: _localeIdentifiers
@property (retain, nonatomic) NSString *localizedText; // ivar: _localizedText
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSMutableArray *validRegionCodes; // ivar: _validRegionCodes
@property (nonatomic) NSInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributionsAtIndex:(NSUInteger)arg0 ;
-(id)citationsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)localeIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)validRegionCodesAtIndex:(NSUInteger)arg0 ;
-(void)addAttributions:(id)arg0 ;
-(void)addCitations:(id)arg0 ;
-(void)addLocaleIdentifiers:(id)arg0 ;
-(void)addValidRegionCodes:(id)arg0 ;
-(void)clearAttributions;
-(void)clearCitations;
-(void)clearLocaleIdentifiers;
-(void)clearValidRegionCodes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif