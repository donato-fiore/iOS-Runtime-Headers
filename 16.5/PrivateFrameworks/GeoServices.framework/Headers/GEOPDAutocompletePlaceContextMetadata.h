// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDAUTOCOMPLETEPLACECONTEXTMETADATA_H
#define GEOPDAUTOCOMPLETEPLACECONTEXTMETADATA_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOPDAutocompletePlaceContextMetadata : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _clientizationFeatures;
    NSMutableArray *_alternateSearchableNames;
    NSString *_inferredCategory;
    NSString *_matchedDisplayNameLanguageCode;
    NSString *_matchedDisplayName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _distanceDisplayThreshold;
    int _requestedShortAddressType;
    BOOL _enableChildPoisWithoutAcRank;
    BOOL _enableLookInsideActionForVenuePois;
    BOOL _isDefaultName;
    BOOL _isLookAroundActionAllowed;
    BOOL _isProminentResult;
    BOOL _shouldEnableCallAction;
    BOOL _shouldEnableWebsiteAction;
    BOOL _shouldSuppressDirectionsAction;
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
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif