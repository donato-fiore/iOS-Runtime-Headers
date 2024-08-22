// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BLASTDOORLPAPPLEPHOTOSMOMENTMETADATA_H
#define _BLASTDOORLPAPPLEPHOTOSMOMENTMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSDate, NSString;


#import "_BlastDoorLPImage.h"

@interface _BlastDoorLPApplePhotosMomentMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSDate *earliestAssetDate; // ivar: _earliestAssetDate
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) _BlastDoorLPImage *keyPhoto; // ivar: _keyPhoto
@property (copy, nonatomic) NSDate *latestAssetDate; // ivar: _latestAssetDate
@property (nonatomic) NSUInteger otherItemCount; // ivar: _otherItemCount
@property (nonatomic) NSUInteger photoCount; // ivar: _photoCount
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger videoCount; // ivar: _videoCount


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