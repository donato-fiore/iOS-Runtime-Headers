// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDCOMPONENT_H
#define GEOPDCOMPONENT_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOPDAttribution.h"
#import "GEOPDSource.h"

@interface GEOPDComponent : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOPDAttribution *_attribution;
    GEOPDSource *_source;
    CGFloat _timestampFirstSeen;
    NSMutableArray *_values;
    NSMutableArray *_versionDomains;
    int _cacheControl;
    int _componentId;
    int _startIndex;
    int _status;
    unsigned int _ttl;
    int _type;
    int _valuesAvailable;
    unsigned int _version;
    ? _flags;
}


@property (nonatomic) BOOL hasTimestampFirstSeen;
@property (nonatomic) CGFloat timestampFirstSeen;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)statusCodeIsValid;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif