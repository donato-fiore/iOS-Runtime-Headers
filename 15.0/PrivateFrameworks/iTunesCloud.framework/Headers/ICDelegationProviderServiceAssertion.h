// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDELEGATIONPROVIDERSERVICEASSERTION_H
#define ICDELEGATIONPROVIDERSERVICEASSERTION_H

@class NSDate, NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICDelegationProviderServiceAssertion : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif