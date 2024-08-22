// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTBENEFICIARY_H
#define PKACCOUNTBENEFICIARY_H

@class NSDecimalNumber, CNContact;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountBeneficiary : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDecimalNumber *allocation; // ivar: _allocation
@property (copy, nonatomic) CNContact *contact; // ivar: _contact


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif