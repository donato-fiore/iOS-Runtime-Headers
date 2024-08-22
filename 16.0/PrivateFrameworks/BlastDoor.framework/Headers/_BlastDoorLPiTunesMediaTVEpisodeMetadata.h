// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BLASTDOORLPITUNESMEDIATVEPISODEMETADATA_H
#define _BLASTDOORLPITUNESMEDIATVEPISODEMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString;


#import "_BlastDoorLPImage.h"
#import "_BlastDoorLPArtworkMetadata.h"

@interface _BlastDoorLPiTunesMediaTVEpisodeMetadata : BlastDoorLPSpecializationMetadata

@property (retain, nonatomic) _BlastDoorLPImage *artwork; // ivar: _artwork
@property (copy, nonatomic) _BlastDoorLPArtworkMetadata *artworkMetadata; // ivar: _artworkMetadata
@property (copy, nonatomic) NSString *episodeName; // ivar: _episodeName
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (copy, nonatomic) NSString *seasonName; // ivar: _seasonName
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