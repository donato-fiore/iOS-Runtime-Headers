// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFPOWERCONTEXTCLIENT_H
#define AFPOWERCONTEXTCLIENT_H


#import <Foundation/Foundation.h>


@interface AFPowerContextClient : NSObject {
    int _notificationToken;
    unsigned int _registrationStatus;
}




-(BOOL)_isNotificationTokenRegistered;
-(BOOL)updateCurrentPowerPolicy:(id)arg0 withError:(*id)arg1 ;
-(NSUInteger)currentEncodedPowerPolicyWithError:(*id)arg0 ;
-(id)currentPowerPolicyWithError:(*id)arg0 ;
-(id)init;
-(void)_registerForDarwinNotificationIfNeeded;


@end


#endif