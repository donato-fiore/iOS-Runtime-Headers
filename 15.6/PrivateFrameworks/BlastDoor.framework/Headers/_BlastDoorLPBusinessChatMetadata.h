// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BLASTDOORLPBUSINESSCHATMETADATA_H
#define _BLASTDOORLPBUSINESSCHATMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString;



@interface _BlastDoorLPBusinessChatMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif