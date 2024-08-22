// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPFILEMETADATA_H
#define _BLASTDOORLPFILEMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSDate, NSString;


#import "_BlastDoorLPImage.h"

@interface _BlastDoorLPFileMetadata : BlastDoorLPSpecializationMetadata

@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) _BlastDoorLPImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger size; // ivar: _size
@property (retain, nonatomic) _BlastDoorLPImage *thumbnail; // ivar: _thumbnail
@property (copy, nonatomic) NSString *type; // ivar: _type


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