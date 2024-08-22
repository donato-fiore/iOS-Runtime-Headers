// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPERSONSOURCEUUIDPAIR_H
#define HMIPERSONSOURCEUUIDPAIR_H

@class HMFObject, NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;



@interface HMIPersonSourceUUIDPair : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *UUIDPairString;
@property (readonly, copy) NSUUID *personUUID; // ivar: _personUUID
@property (readonly, copy) NSUUID *sourceUUID; // ivar: _sourceUUID


+(BOOL)supportsSecureCoding;
+(id)personSourceUUIDPairFromPersonLink:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonUUID:(id)arg0 sourceUUID:(id)arg1 ;
-(id)initWithUUIDPairString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif