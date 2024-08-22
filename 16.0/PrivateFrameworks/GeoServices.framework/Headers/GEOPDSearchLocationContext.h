// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDSEARCHLOCATIONCONTEXT_H
#define GEOPDSEARCHLOCATIONCONTEXT_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEOPDSearchViewportInfo.h"

@interface GEOPDSearchLocationContext : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLatLng *_deviceLocation;
    GEOPDSearchViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif