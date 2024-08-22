// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTODAYSECTIONIDENTIFIERTOGROUPTYPES_H
#define NTPBTODAYSECTIONIDENTIFIERTOGROUPTYPES_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBTodaySectionIdentifierToGroupTypes : PBCodable <NSCopying>

 {
    ? _groupTypes;
}


@property (readonly, nonatomic) *int groupTypes;
@property (readonly, nonatomic) NSUInteger groupTypesCount;
@property (retain, nonatomic) NSString *personalizationSectionIdentifier; // ivar: _personalizationSectionIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupTypesAsString:(int)arg0 ;
-(int)StringAsGroupTypes:(id)arg0 ;
-(int)groupTypesAtIndex:(NSUInteger)arg0 ;
-(void)addGroupTypes:(int)arg0 ;
-(void)clearGroupTypes;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif