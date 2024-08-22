// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKISSUERBINDINGDATA_H
#define PKISSUERBINDINGDATA_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKIssuerBindingData : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSURL *callbackURL; // ivar: _callbackURL
@property (copy, nonatomic) NSString *createdKeyHash; // ivar: _createdKeyHash
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (copy, nonatomic) NSString *signedData; // ivar: _signedData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIssuerBindingData:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif