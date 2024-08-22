// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDEXTERNALTRANSITLOOKUPRESULT_H
#define GEOPDEXTERNALTRANSITLOOKUPRESULT_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOPDExternalTransitLookupResult : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_providerId;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif