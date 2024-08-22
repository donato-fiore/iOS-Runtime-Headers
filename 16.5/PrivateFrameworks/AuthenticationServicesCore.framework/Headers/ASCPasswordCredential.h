// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCPASSWORDCREDENTIAL_H
#define ASCPASSWORDCREDENTIAL_H

@class NSDate, NSString;
@protocol ASCCredentialProtocol;

#import <Foundation/Foundation.h>


@interface ASCPasswordCredential : NSObject <ASCCredentialProtocol>



@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSString *site; // ivar: _site
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 password:(id)arg1 site:(id)arg2 creationDate:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif