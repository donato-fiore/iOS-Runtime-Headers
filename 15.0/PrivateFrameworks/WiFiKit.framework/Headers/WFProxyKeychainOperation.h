// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPROXYKEYCHAINOPERATION_H
#define WFPROXYKEYCHAINOPERATION_H

@class NSString;


#import "WFOperation.h"

@interface WFProxyKeychainOperation : WFOperation

@property (copy, nonatomic) NSString *host; // ivar: _host
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *port; // ivar: _port
@property NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *username; // ivar: _username


+(id)getPasswordOperationForHost:(id)arg0 port:(id)arg1 username:(id)arg2 ;
+(id)removePasswordOperationForHost:(id)arg0 port:(id)arg1 username:(id)arg2 ;
+(id)savePassswordOperationForHost:(id)arg0 port:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(id)_credentialsForProtectionSpace:(id)arg0 ;
-(id)initWithHost:(id)arg0 port:(id)arg1 username:(id)arg2 password:(id)arg3 type:(NSInteger)arg4 ;
-(void)start;


@end


#endif