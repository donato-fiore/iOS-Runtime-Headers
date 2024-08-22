// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEPROXYSERVER_H
#define NEPROXYSERVER_H

@class NSString;
@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property (readonly) NSString *address; // ivar: _address
@property BOOL authenticationRequired; // ivar: _authenticationRequired
@property (copy) NSString *password; // ivar: _password
@property (readonly) NSInteger port; // ivar: _port
@property NSInteger type; // ivar: _type
@property (copy) NSString *username; // ivar: _username


-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyPassword;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithAddress:(id)arg0 port:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 address:(id)arg1 port:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif