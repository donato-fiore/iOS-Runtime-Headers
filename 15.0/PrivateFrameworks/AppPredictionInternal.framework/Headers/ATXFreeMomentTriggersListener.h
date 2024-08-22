// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXFREEMOMENTTRIGGERSLISTENER_H
#define ATXFREEMOMENTTRIGGERSLISTENER_H

@class ATXCoreDuetContextHelper, _CDContextualChangeRegistration;
@protocol ATXFreeMomentTriggersListenerDelegate;

#import <Foundation/Foundation.h>


@interface ATXFreeMomentTriggersListener : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    _CDContextualChangeRegistration *_phoneUnlockRegistration;
    _CDContextualChangeRegistration *_appLaunchRegistration;
}


@property (weak, nonatomic) NSObject<ATXFreeMomentTriggersListenerDelegate> *freeMomentTriggersListenerDelegate; // ivar: _freeMomentTriggersListenerDelegate


-(id)clientIdentifierForAppLaunch;
-(id)clientIdentifierForPhoneUnlock;
-(id)init;
-(id)registrationIdentifierForAppLaunch;
-(id)registrationIdentifierForPhoneUnlock;
-(void)registerForAppLaunchNotification:(id)arg0 ;
-(void)registerPhoneLockStatus:(id)arg0 ;


@end


#endif