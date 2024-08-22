// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPFEEDBACKCOMMONCONTEXT_H
#define GEORPFEEDBACKCOMMONCONTEXT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEORPUserPath.h"
#import "GEOABAssignmentResponse.h"
#import "GEORPCurrentEnvironmentManifestURLs.h"
#import "GEORPMapLocation.h"
#import "GEORPNavigationSettings.h"
#import "GEORPSearchCommonContext.h"
#import "GEORPSourceInfo.h"

@interface GEORPFeedbackCommonContext : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _userPaths;
    NSMutableArray *_auxiliaryControls;
    CGFloat _clientCreatedAt;
    GEORPUserPath *_combinedUserPath;
    GEOABAssignmentResponse *_currentAbAssignmentResponse;
    GEORPCurrentEnvironmentManifestURLs *_currentEnvironmentManifestUrls;
    GEORPMapLocation *_mapLocation;
    GEORPNavigationSettings *_navigationSettings;
    NSUInteger _originatingAuxiliaryControlIndex;
    GEORPSearchCommonContext *_searchCommon;
    GEORPSourceInfo *_sourceInfo;
    NSMutableArray *_visibleTileSets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _deviceGmtOffset;
    int _pinType;
    BOOL _isSprMap;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *auxiliaryControls;
@property (nonatomic) CGFloat clientCreatedAt;
@property (retain, nonatomic) GEORPUserPath *combinedUserPath;
@property (retain, nonatomic) GEOABAssignmentResponse *currentAbAssignmentResponse;
@property (retain, nonatomic) GEORPCurrentEnvironmentManifestURLs *currentEnvironmentManifestUrls;
@property (nonatomic) int deviceGmtOffset;
@property (nonatomic) BOOL hasClientCreatedAt;
@property (readonly, nonatomic) BOOL hasCombinedUserPath;
@property (readonly, nonatomic) BOOL hasCurrentAbAssignmentResponse;
@property (readonly, nonatomic) BOOL hasCurrentEnvironmentManifestUrls;
@property (nonatomic) BOOL hasDeviceGmtOffset;
@property (nonatomic) BOOL hasIsSprMap;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (readonly, nonatomic) BOOL hasNavigationSettings;
@property (nonatomic) BOOL hasOriginatingAuxiliaryControlIndex;
@property (nonatomic) BOOL hasPinType;
@property (readonly, nonatomic) BOOL hasSearchCommon;
@property (readonly, nonatomic) BOOL hasSourceInfo;
@property (nonatomic) BOOL isSprMap;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (retain, nonatomic) GEORPNavigationSettings *navigationSettings;
@property (nonatomic) NSUInteger originatingAuxiliaryControlIndex;
@property (nonatomic) int pinType;
@property (retain, nonatomic) GEORPSearchCommonContext *searchCommon;
@property (retain, nonatomic) GEORPSourceInfo *sourceInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (readonly, nonatomic) *int userPaths;
@property (readonly, nonatomic) NSUInteger userPathsCount;
@property (retain, nonatomic) NSMutableArray *visibleTileSets;


+(BOOL)isValid:(id)arg0 ;
+(Class)auxiliaryControlType;
+(Class)visibleTileSetType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)auxiliaryControlAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)pinTypeAsString:(int)arg0 ;
-(id)userPathsAsString:(int)arg0 ;
-(id)visibleTileSetAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPinType:(id)arg0 ;
-(int)StringAsUserPaths:(id)arg0 ;
-(int)userPathAtIndex:(NSUInteger)arg0 ;
-(void)_recordCurrentEnvironment:(id)arg0 ;
-(void)_recordManifestURLs:(id)arg0 ;
-(void)addAuxiliaryControl:(id)arg0 ;
-(void)addUserPath:(int)arg0 ;
-(void)addVisibleTileSet:(id)arg0 ;
-(void)clearAuxiliaryControls;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearUserPaths;
-(void)clearVisibleTileSets;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)recordEnvironmentAndManifestURLs;
-(void)writeTo:(id)arg0 ;


@end


#endif