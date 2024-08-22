// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT24AUTHENTICATIONCREDENTIAL_H
#define _TTC8FMCLIENT24AUTHENTICATIONCREDENTIAL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8FMClient24AuthenticationCredential : NSObject <NSSecureCoding>

 {
    ? authToken;
    ? personId;
    ? hostName;
}


@property (nonatomic, readonly) NSString *authToken;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) NSString *personId;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithAuthToken:(id)arg0 personId:(id)arg1 hostName:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif