// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMVIP_H
#define EMVIP_H

@class NSString, EAEmailAddressSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMVIP : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) EAEmailAddressSet *emailAddresses; // ivar: _emailAddresses
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToVIP:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 emailAddresses:(id)arg2 ;
-(void)_commonInitWithIdentifier:(id)arg0 name:(id)arg1 emailAddresses:(id)arg2 displayName:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif