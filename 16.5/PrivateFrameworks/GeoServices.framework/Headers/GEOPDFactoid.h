// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDFACTOID_H
#define GEOPDFACTOID_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOPDMapsIdentifier.h"

@interface GEOPDFactoid : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_icon;
    CGFloat _number;
    GEOPDMapsIdentifier *_placeId;
    NSMutableArray *_placeNames;
    NSString *_text;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _entryType;
    int _unit;
    BOOL _canBeDisplayedInPlaceSummary;
    ? _flags;
}




+(BOOL)factoidPairAvailableForPlaceData:(id)arg0 ;
+(id)factoidsForPlaceData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bestLocalizedPlaceName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif