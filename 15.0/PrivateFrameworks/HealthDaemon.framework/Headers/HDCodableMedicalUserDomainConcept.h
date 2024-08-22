// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEMEDICALUSERDOMAINCONCEPT_H
#define HDCODABLEMEDICALUSERDOMAINCONCEPT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCodableMedicalUserDomainConcept : PBCodable <NSCopying>

 {
    ? _categoryTypes;
}


@property (readonly, nonatomic) *NSInteger categoryTypes;
@property (readonly, nonatomic) NSUInteger categoryTypesCount;
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) BOOL hasCountryCode;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)categoryTypesAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCategoryTypes:(NSInteger)arg0 ;
-(void)clearCategoryTypes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif