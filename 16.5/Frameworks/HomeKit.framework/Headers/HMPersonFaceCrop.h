// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMPERSONFACECROP_H
#define HMPERSONFACECROP_H

@class NSUUID;
@protocol NSMutableCopying;


#import "HMFaceCrop.h"

@interface HMPersonFaceCrop : HMFaceCrop <NSMutableCopying>



@property (readonly, copy) NSUUID *personUUID; // ivar: _personUUID
@property NSInteger source; // ivar: _source
@property (copy) NSUUID *unassociatedFaceCropUUID; // ivar: _unassociatedFaceCropUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 dataRepresentation:(id)arg1 dateCreated:(id)arg2 faceBoundingBox:(struct CGRect )arg3 personUUID:(id)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif