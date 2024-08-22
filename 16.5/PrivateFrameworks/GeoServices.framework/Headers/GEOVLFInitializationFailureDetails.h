// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVLFINITIALIZATIONFAILUREDETAILS_H
#define GEOVLFINITIALIZATIONFAILUREDETAILS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOVLFInitializationFailureDetails : PBCodable <NSCopying>

 {
    NSString *_arkitUnderlyingErrorDomain;
    int _arkitErrorCode;
    int _arkitUnderlyingErrorCode;
    ? _flags;
}


@property (nonatomic) int arkitErrorCode;
@property (nonatomic) int arkitUnderlyingErrorCode;
@property (retain, nonatomic) NSString *arkitUnderlyingErrorDomain;
@property (nonatomic) BOOL hasArkitErrorCode;
@property (nonatomic) BOOL hasArkitUnderlyingErrorCode;
@property (readonly, nonatomic) BOOL hasArkitUnderlyingErrorDomain;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif