// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIPERSONFACECROP_H
#define HMIPERSONFACECROP_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding;


#import "HMIFaceCrop.h"

@interface HMIPersonFaceCrop : HMIFaceCrop <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *personUUID; // ivar: _personUUID
@property (readonly) NSInteger source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 dataRepresentation:(id)arg1 dateCreated:(id)arg2 faceBoundingBox:(struct CGRect )arg3 personUUID:(id)arg4 ;
-(id)initWithUUID:(id)arg0 dataRepresentation:(id)arg1 dateCreated:(id)arg2 faceBoundingBox:(struct CGRect )arg3 personUUID:(id)arg4 source:(NSInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif