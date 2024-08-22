// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BLASTDOORLPAPPLENEWSMETADATA_H
#define _BLASTDOORLPAPPLENEWSMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString;



@interface _BlastDoorLPAppleNewsMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *source; // ivar: _source
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif