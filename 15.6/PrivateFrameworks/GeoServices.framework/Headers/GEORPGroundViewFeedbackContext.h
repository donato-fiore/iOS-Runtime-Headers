// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPGROUNDVIEWFEEDBACKCONTEXT_H
#define GEORPGROUNDVIEWFEEDBACKCONTEXT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOPDMuninViewState.h"

@interface GEORPGroundViewFeedbackContext : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _visiblePlaceMuids;
    NSString *_imageId;
    NSUInteger _imdataId;
    NSMutableArray *_onscreenImageResources;
    GEOPDMuninViewState *_viewState;
    NSMutableArray *_visibleFeatureHandles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _metadataTileBuildId;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasImageId;
@property (nonatomic) BOOL hasImdataId;
@property (nonatomic) BOOL hasMetadataTileBuildId;
@property (readonly, nonatomic) BOOL hasViewState;
@property (retain, nonatomic) NSString *imageId;
@property (nonatomic) NSUInteger imdataId;
@property (nonatomic) unsigned int metadataTileBuildId;
@property (retain, nonatomic) NSMutableArray *onscreenImageResources;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEOPDMuninViewState *viewState;
@property (retain, nonatomic) NSMutableArray *visibleFeatureHandles;
@property (readonly, nonatomic) *NSUInteger visiblePlaceMuids;
@property (readonly, nonatomic) NSUInteger visiblePlaceMuidsCount;


+(BOOL)isValid:(id)arg0 ;
+(Class)onscreenImageResourceType;
+(Class)visibleFeatureHandleType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)visiblePlaceMuidAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)onscreenImageResourceAtIndex:(NSUInteger)arg0 ;
-(id)visibleFeatureHandleAtIndex:(NSUInteger)arg0 ;
-(void)addOnscreenImageResource:(id)arg0 ;
-(void)addVisibleFeatureHandle:(id)arg0 ;
-(void)addVisiblePlaceMuid:(NSUInteger)arg0 ;
-(void)clearOnscreenImageResources;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearVisibleFeatureHandles;
-(void)clearVisiblePlaceMuids;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif