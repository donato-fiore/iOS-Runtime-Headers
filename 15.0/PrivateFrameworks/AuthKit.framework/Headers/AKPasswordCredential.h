// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKPASSWORDCREDENTIAL_H
#define AKPASSWORDCREDENTIAL_H

@class NSString;
@protocol AKCredential;

#import <Foundation/Foundation.h>


@interface AKPasswordCredential : NSObject <AKCredential>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 password:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif