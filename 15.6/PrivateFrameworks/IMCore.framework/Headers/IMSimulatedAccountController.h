// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSIMULATEDACCOUNTCONTROLLER_H
#define IMSIMULATEDACCOUNTCONTROLLER_H

@class NSMutableDictionary;


#import "IMAccountController.h"

@interface IMSimulatedAccountController : IMAccountController {
    NSMutableDictionary *_simulatedAccountsPerService;
}




-(id)activeAccounts;
-(id)activeIMessageAccount;
-(id)activeSMSAccount;
-(id)init;
-(void)setSimulatedAccounts:(id)arg0 forServiceNamed:(id)arg1 ;


@end


#endif