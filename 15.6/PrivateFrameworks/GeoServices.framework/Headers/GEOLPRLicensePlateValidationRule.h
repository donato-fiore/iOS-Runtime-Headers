// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLPRLICENSEPLATEVALIDATIONRULE_H
#define GEOLPRLICENSEPLATEVALIDATIONRULE_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOLPRLicensePlateValidationRule : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_impliedPowerTypeKeys;
    NSMutableArray *_impliedVehicleTypeKeys;
    NSString *_regularExpression;
    NSString *_validCharacters;
    NSMutableArray *_validationRanges;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _maxLength;
    unsigned int _minLength;
    ? _flags;
}


@property (nonatomic) BOOL hasMaxLength;
@property (nonatomic) BOOL hasMinLength;
@property (readonly, nonatomic) BOOL hasRegularExpression;
@property (readonly, nonatomic) BOOL hasValidCharacters;
@property (retain, nonatomic) NSMutableArray *impliedPowerTypeKeys;
@property (retain, nonatomic) NSMutableArray *impliedVehicleTypeKeys;
@property (nonatomic) unsigned int maxLength;
@property (nonatomic) unsigned int minLength;
@property (retain, nonatomic) NSString *regularExpression;
@property (retain, nonatomic) NSString *validCharacters;
@property (retain, nonatomic) NSMutableArray *validationRanges;


+(BOOL)isValid:(id)arg0 ;
+(Class)impliedPowerTypeKeyType;
+(Class)impliedVehicleTypeKeyType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)impliedPowerTypeKeyAtIndex:(NSUInteger)arg0 ;
-(id)impliedVehicleTypeKeyAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)validationRangesAtIndex:(NSUInteger)arg0 ;
-(void)addImpliedPowerTypeKey:(id)arg0 ;
-(void)addImpliedVehicleTypeKey:(id)arg0 ;
-(void)addValidationRanges:(id)arg0 ;
-(void)clearImpliedPowerTypeKeys;
-(void)clearImpliedVehicleTypeKeys;
-(void)clearValidationRanges;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif