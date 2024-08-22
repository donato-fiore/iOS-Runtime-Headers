// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPAPPLEPHOTOSSTATUSMETADATA_H
#define _BLASTDOORLPAPPLEPHOTOSSTATUSMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSAttributedString;



@interface _BlastDoorLPApplePhotosStatusMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSAttributedString *status; // ivar: _status


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif