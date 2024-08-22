// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASPASSWORDCREDENTIAL_H
#define CASPASSWORDCREDENTIAL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CASPasswordCredential : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 password:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif