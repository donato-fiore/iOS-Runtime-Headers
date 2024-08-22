// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECSMTPACCOUNT_H
#define ECSMTPACCOUNT_H



#import "ECAccount.h"

@interface ECSMTPAccount : ECAccount



+(id)standardPorts;
+(id)standardSSLPorts;
-(NSInteger)defaultPortNumber;
-(id)_hostnameFromParentAccount:(id)arg0 ;
-(id)portNumberObject;
-(id)usesSSLObject;


@end


#endif