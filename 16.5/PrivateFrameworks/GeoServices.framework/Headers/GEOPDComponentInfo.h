// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDCOMPONENTINFO_H
#define GEOPDCOMPONENTINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDComponentFilter.h"

@interface GEOPDComponentInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOPDComponentFilter *_filter;
    unsigned int _count;
    unsigned int _startIndex;
    int _type;
    int _urgency;
    BOOL _includeSource;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithType:(int)arg0 count:(unsigned int)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif