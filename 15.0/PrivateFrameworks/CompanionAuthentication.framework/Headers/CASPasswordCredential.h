// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASPASSWORDCREDENTIAL_H
#define CASPASSWORDCREDENTIAL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CASPasswordCredential : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 password:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif