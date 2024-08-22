// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BLASTDOORLPMAPCOLLECTIONMETADATA_H
#define _BLASTDOORLPMAPCOLLECTIONMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSArray, NSString;


#import "_BlastDoorLPImage.h"

@interface _BlastDoorLPMapCollectionMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSArray *addresses; // ivar: _addresses
@property (retain, nonatomic) _BlastDoorLPImage *darkImage; // ivar: _darkImage
@property (retain, nonatomic) _BlastDoorLPImage *icon; // ivar: _icon
@property (retain, nonatomic) _BlastDoorLPImage *image; // ivar: _image
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int numberOfItems; // ivar: _numberOfItems
@property (retain, nonatomic) _BlastDoorLPImage *publisherIcon; // ivar: _publisherIcon
@property (copy, nonatomic) NSString *publisherName; // ivar: _publisherName


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