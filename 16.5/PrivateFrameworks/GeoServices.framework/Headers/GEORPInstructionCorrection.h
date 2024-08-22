// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPINSTRUCTIONCORRECTION_H
#define GEORPINSTRUCTIONCORRECTION_H

@class PBCodable, PBDataReader, NSString, NSData;
@protocol NSCopying;


#import "GEORPPhotoWithMetadata.h"

@interface GEORPInstructionCorrection : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_comments;
    NSString *_photoId;
    GEORPPhotoWithMetadata *_photo;
    NSData *_routeStepScreenshotImageData;
    NSString *_routeStepScreenshotImageId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _routeStepIndex;
    unsigned int _routeStepSubstepIndex;
    ? _flags;
}


@property (retain, nonatomic) NSString *comments;
@property (readonly, nonatomic) BOOL hasComments;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (readonly, nonatomic) BOOL hasPhotoId;
@property (nonatomic) BOOL hasRouteStepIndex;
@property (readonly, nonatomic) BOOL hasRouteStepScreenshotImageData;
@property (readonly, nonatomic) BOOL hasRouteStepScreenshotImageId;
@property (nonatomic) BOOL hasRouteStepSubstepIndex;
@property (retain, nonatomic) GEORPPhotoWithMetadata *photo;
@property (retain, nonatomic) NSString *photoId;
@property (nonatomic) unsigned int routeStepIndex;
@property (retain, nonatomic) NSData *routeStepScreenshotImageData;
@property (retain, nonatomic) NSString *routeStepScreenshotImageId;
@property (nonatomic) unsigned int routeStepSubstepIndex;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif