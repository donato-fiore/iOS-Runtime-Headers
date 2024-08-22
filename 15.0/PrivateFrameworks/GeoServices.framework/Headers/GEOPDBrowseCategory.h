// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDBROWSECATEGORY_H
#define GEOPDBROWSECATEGORY_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "GEOStyleAttributes.h"

@interface GEOPDBrowseCategory : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayString;
    NSString *_popularDisplayToken;
    NSString *_shortDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_subCategorys;
    NSData *_suggestionEntryMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _displayMode;
    int _sortOrder;
    int _subCategoryType;
    BOOL _includeEvChargingParametersOnSearch;
    BOOL _isAllCategoryForVenue;
    BOOL _isSubCategorySameAsTopLevel;
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