// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODIRECTIONSRESPONSEEXTENSION_H
#define GEODIRECTIONSRESPONSEEXTENSION_H

@class PBCodable;
@protocol NSCopying;


#import "GEOETAServiceResponseSummary.h"

@interface GEODirectionsResponseExtension : PBCodable <NSCopying>

 {
    GEOETAServiceResponseSummary *_etaServiceSummary;
}


@property (retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property (readonly, nonatomic) BOOL hasEtaServiceSummary;


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