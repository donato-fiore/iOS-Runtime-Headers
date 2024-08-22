// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BLASTDOORLPITUNESMEDIASONGMETADATA_H
#define _BLASTDOORLPITUNESMEDIASONGMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString, NSArray, NSURL;


#import "_BlastDoorLPImage.h"
#import "_BlastDoorLPArtworkMetadata.h"
#import "_BlastDoorLPLyricExcerptMetadata.h"

@interface _BlastDoorLPiTunesMediaSongMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *album; // ivar: _album
@property (copy, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) _BlastDoorLPImage *artwork; // ivar: _artwork
@property (copy, nonatomic) _BlastDoorLPArtworkMetadata *artworkMetadata; // ivar: _artworkMetadata
@property (copy, nonatomic) _BlastDoorLPLyricExcerptMetadata *lyricExcerpt; // ivar: _lyricExcerpt
@property (copy, nonatomic) NSString *lyrics; // ivar: _lyrics
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *offers; // ivar: _offers
@property (copy, nonatomic) NSURL *previewURL; // ivar: _previewURL
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif