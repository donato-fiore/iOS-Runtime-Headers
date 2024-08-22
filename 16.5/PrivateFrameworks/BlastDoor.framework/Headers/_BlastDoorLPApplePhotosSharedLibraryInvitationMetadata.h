// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPAPPLEPHOTOSSHAREDLIBRARYINVITATIONMETADATA_H
#define _BLASTDOORLPAPPLEPHOTOSSHAREDLIBRARYINVITATIONMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString;



@interface _BlastDoorLPApplePhotosSharedLibraryInvitationMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *originatorDisplayName; // ivar: _originatorDisplayName


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif