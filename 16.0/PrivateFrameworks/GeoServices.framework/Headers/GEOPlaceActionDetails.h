// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACEACTIONDETAILS_H
#define GEOPLACEACTIONDETAILS_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOTransitPlaceCard.h"

@interface GEOPlaceActionDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_actionUrl;
    NSUInteger _animationID;
    NSUInteger _businessID;
    NSString *_destinationApp;
    NSString *_photoId;
    NSInteger _placeID;
    NSString *_richProviderId;
    CGFloat _searchResponseRelativeTimestamp;
    NSString *_showcaseId;
    NSUInteger _targetID;
    GEOTransitPlaceCard *_transitPlaceCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _localSearchProviderID;
    int _resultIndex;
    ? _flags;
}


@property (retain, nonatomic) NSString *actionUrl;
@property (nonatomic) NSUInteger animationID;
@property (nonatomic) NSUInteger businessID;
@property (retain, nonatomic) NSString *destinationApp;
@property (readonly, nonatomic) BOOL hasActionUrl;
@property (nonatomic) BOOL hasAnimationID;
@property (nonatomic) BOOL hasBusinessID;
@property (readonly, nonatomic) BOOL hasDestinationApp;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (readonly, nonatomic) BOOL hasPhotoId;
@property (nonatomic) BOOL hasPlaceID;
@property (nonatomic) BOOL hasResultIndex;
@property (readonly, nonatomic) BOOL hasRichProviderId;
@property (nonatomic) BOOL hasSearchResponseRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasShowcaseId;
@property (nonatomic) BOOL hasTargetID;
@property (readonly, nonatomic) BOOL hasTransitPlaceCard;
@property (nonatomic) int localSearchProviderID;
@property (retain, nonatomic) NSString *photoId;
@property (nonatomic) NSInteger placeID;
@property (nonatomic) int resultIndex;
@property (retain, nonatomic) NSString *richProviderId;
@property (nonatomic) CGFloat searchResponseRelativeTimestamp;
@property (retain, nonatomic) NSString *showcaseId;
@property (nonatomic) NSUInteger targetID;
@property (retain, nonatomic) GEOTransitPlaceCard *transitPlaceCard;


+(BOOL)isValid:(id)arg0 ;
+(id)actionDetailsWithChildPlace:(id)arg0 timestamp:(CGFloat)arg1 resultIndex:(int)arg2 ;
+(id)actionDetailsWithDetails:(id)arg0 timestamp:(CGFloat)arg1 ;
+(id)actionDetailsWithMapItem:(id)arg0 childPlace:(id)arg1 timestamp:(CGFloat)arg2 resultIndex:(int)arg3 targetID:(NSUInteger)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8 ;
+(id)actionDetailsWithMapItem:(id)arg0 timestamp:(CGFloat)arg1 resultIndex:(int)arg2 ;
+(id)actionDetailsWithMapItem:(id)arg0 timestamp:(CGFloat)arg1 resultIndex:(int)arg2 targetID:(NSUInteger)arg3 ;
+(id)actionDetailsWithMapItem:(id)arg0 timestamp:(CGFloat)arg1 resultIndex:(int)arg2 targetID:(NSUInteger)arg3 transitCardCategory:(int)arg4 transitSystem:(id)arg5 transitDepartureSequence:(id)arg6 transitIncident:(id)arg7 ;
+(id)actionDetailsWithTargetID:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 childPlace:(id)arg1 relativeTimestamp:(CGFloat)arg2 resultIndex:(int)arg3 targetID:(NSUInteger)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8 ;
-(id)initWithMapItem:(id)arg0 relativeTimestamp:(CGFloat)arg1 resultIndex:(int)arg2 ;
-(id)initWithMapItem:(id)arg0 relativeTimestamp:(CGFloat)arg1 resultIndex:(int)arg2 targetID:(NSUInteger)arg3 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif