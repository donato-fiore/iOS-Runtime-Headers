// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLEHEALTHRECORDSPROVIDER_H
#define HKCODABLEHEALTHRECORDSPROVIDER_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface HKCodableHealthRecordsProvider : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasProviderLogo;
@property (readonly, nonatomic) BOOL hasProviderName;
@property (readonly, nonatomic) BOOL hasProviderURI;
@property (retain, nonatomic) NSData *providerLogo; // ivar: _providerLogo
@property (retain, nonatomic) NSString *providerName; // ivar: _providerName
@property (retain, nonatomic) NSString *providerURI; // ivar: _providerURI


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif