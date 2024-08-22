// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIPERSON_H
#define HMIPERSON_H

@class HMFObject, NSUUID, NSString, NSSet;
@protocol NSCopying, NSSecureCoding;



@interface HMIPerson : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSSet *personLinks; // ivar: _personLinks


+(BOOL)supportsSecureCoding;
+(id)personFromHomePerson:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 name:(id)arg1 ;
-(id)initWithUUID:(id)arg0 name:(id)arg1 personLinks:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif