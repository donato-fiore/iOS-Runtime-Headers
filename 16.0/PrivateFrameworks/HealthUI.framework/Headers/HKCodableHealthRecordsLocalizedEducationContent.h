// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLEHEALTHRECORDSLOCALIZEDEDUCATIONCONTENT_H
#define HKCODABLEHEALTHRECORDSLOCALIZEDEDUCATIONCONTENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableHealthRecordsLocalizedEducationContent : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sectionsAtIndex:(NSUInteger)arg0 ;
-(void)addSections:(id)arg0 ;
-(void)clearSections;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif