// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BLASTDOORLPMAPCOLLECTIONPUBLISHERMETADATA_H
#define _BLASTDOORLPMAPCOLLECTIONPUBLISHERMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString;


#import "_BlastDoorLPImage.h"

@interface _BlastDoorLPMapCollectionPublisherMetadata : BlastDoorLPSpecializationMetadata

@property (retain, nonatomic) _BlastDoorLPImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int numberOfPublishedCollections; // ivar: _numberOfPublishedCollections


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