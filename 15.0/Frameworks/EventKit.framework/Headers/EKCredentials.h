// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCREDENTIALS_H
#define EKCREDENTIALS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EKCredentials : NSObject

@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSString *username; // ivar: _username


+(id)credentialsWithUsername:(id)arg0 password:(id)arg1 ;
-(id)description;


@end


#endif