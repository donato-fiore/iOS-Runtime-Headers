// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPERSONFACECROP_H
#define HMIPERSONFACECROP_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding;


#import "HMIFaceCrop.h"

@interface HMIPersonFaceCrop : HMIFaceCrop <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *personUUID; // ivar: _personUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 dataRepresentation:(id)arg1 dateCreated:(id)arg2 faceBoundingBox:(struct CGRect )arg3 personUUID:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif