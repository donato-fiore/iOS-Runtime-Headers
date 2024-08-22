// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BLASTDOORLPICLOUDFAMILYINVITATIONMETADATA_H
#define _BLASTDOORLPICLOUDFAMILYINVITATIONMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString;


#import "_BlastDoorLPImage.h"

@interface _BlastDoorLPiCloudFamilyInvitationMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *action; // ivar: _action
@property (retain, nonatomic) _BlastDoorLPImage *icon; // ivar: _icon
@property (retain, nonatomic) _BlastDoorLPImage *image; // ivar: _image
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
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