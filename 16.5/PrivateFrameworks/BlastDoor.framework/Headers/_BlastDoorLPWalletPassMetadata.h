// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPWALLETPASSMETADATA_H
#define _BLASTDOORLPWALLETPASSMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSDate, NSString;



@interface _BlastDoorLPWalletPassMetadata : BlastDoorLPSpecializationMetadata

@property (retain, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif