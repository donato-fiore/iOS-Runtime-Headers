// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDLABELLOCALIZATIONS_H
#define GEOPDLABELLOCALIZATIONS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOPDLabelLocalizations : PBCodable <NSCopying>

 {
    NSMutableArray *_localizedStrings;
}


@property (retain, nonatomic) NSMutableArray *localizedStrings;


+(BOOL)isValid:(id)arg0 ;
+(Class)localizedStringType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bestLocalizedName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)localizedStringAtIndex:(NSUInteger)arg0 ;
-(void)addLocalizedString:(id)arg0 ;
-(void)clearLocalizedStrings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif