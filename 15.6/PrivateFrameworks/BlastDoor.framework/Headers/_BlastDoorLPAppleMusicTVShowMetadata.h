// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BLASTDOORLPAPPLEMUSICTVSHOWMETADATA_H
#define _BLASTDOORLPAPPLEMUSICTVSHOWMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString;


#import "_BlastDoorLPImage.h"
#import "_BlastDoorLPArtworkMetadata.h"

@interface _BlastDoorLPAppleMusicTVShowMetadata : BlastDoorLPSpecializationMetadata

@property (retain, nonatomic) _BlastDoorLPImage *artwork; // ivar: _artwork
@property (copy, nonatomic) _BlastDoorLPArtworkMetadata *artworkMetadata; // ivar: _artworkMetadata
@property (copy, nonatomic) NSString *name; // ivar: _name
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