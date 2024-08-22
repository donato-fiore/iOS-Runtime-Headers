// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPTRANSITSTORAGESYSTEM_H
#define MSPTRANSITSTORAGESYSTEM_H

@class PBCodable, PBUnknownFields, NSString;
@protocol GEOTransitSystem, NSCopying, GEOTransitArtworkDataSource;


#import "MSPTransitStorageArtwork.h"

@interface MSPTransitStorageSystem : PBCodable <GEOTransitSystem, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *artwork; // ivar: _artwork
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger muid;
@property (nonatomic) NSUInteger muid; // ivar: _muid
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithSystem:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif