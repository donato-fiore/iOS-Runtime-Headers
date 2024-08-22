// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYALLOWEDHOST_H
#define HMACCESSORYALLOWEDHOST_H

@class HMFObject, NSString, NSSet;
@protocol NSSecureCoding;



@interface HMAccessoryAllowedHost : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSSet *addresses; // ivar: _addresses
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger purpose; // ivar: _purpose
@property (readonly, nonatomic, getter=isUnrestricted) BOOL unrestricted; // ivar: _unrestricted


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif