// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBBPROTOOFFLINETERMS_H
#define PBBPROTOOFFLINETERMS_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface PBBProtoOfflineTerms : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *appleLanguages; // ivar: _appleLanguages
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) BOOL hasLicense;
@property (readonly, nonatomic) BOOL hasMultiterms;
@property (readonly, nonatomic) BOOL hasWarranty;
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSData *license; // ivar: _license
@property (retain, nonatomic) NSData *multiterms; // ivar: _multiterms
@property (retain, nonatomic) NSData *warranty; // ivar: _warranty


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appleLanguagesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAppleLanguages:(id)arg0 ;
-(void)clearAppleLanguages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif