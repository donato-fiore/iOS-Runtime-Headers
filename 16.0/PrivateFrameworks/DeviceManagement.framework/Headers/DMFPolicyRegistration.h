// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFPOLICYREGISTRATION_H
#define DMFPOLICYREGISTRATION_H

@class NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFPolicyRegistration : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) id *callback; // ivar: _callback
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSSet *policyTypes; // ivar: _policyTypes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 policyTypes:(id)arg1 callback:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif