// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BLASTDOORLPICLOUDSHARINGMETADATA_H
#define _BLASTDOORLPICLOUDSHARINGMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString;


#import "_BlastDoorLPImage.h"

@interface _BlastDoorLPiCloudSharingMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *application; // ivar: _application
@property (copy, nonatomic) NSString *applicationBundleIdenfier; // ivar: _applicationBundleIdenfier
@property (retain, nonatomic) _BlastDoorLPImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *title; // ivar: _title


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