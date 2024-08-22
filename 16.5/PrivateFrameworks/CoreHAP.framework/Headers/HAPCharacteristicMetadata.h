// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPCHARACTERISTICMETADATA_H
#define HAPCHARACTERISTICMETADATA_H

@class HMFObject, NSString;
@protocol NSCopying, NSSecureCoding;


#import "HAPMetadataConstraints.h"

@interface HAPCharacteristicMetadata : HMFObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) HAPMetadataConstraints *constraints; // ivar: _constraints
@property (retain, nonatomic) NSString *format; // ivar: _format
@property (copy, nonatomic) NSString *manufacturerDescription; // ivar: _manufacturerDescription
@property (retain, nonatomic) NSString *units; // ivar: _units


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToCharacteristicMetadata:(id)arg0 ;
-(id)_generateValidConstraints:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConstraints:(id)arg0 description:(id)arg1 format:(id)arg2 units:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif