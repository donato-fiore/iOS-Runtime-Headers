// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMOTIONSTATELISTENER_H
#define ATXMOTIONSTATELISTENER_H

@class ATXCoreDuetContextHelper, _CDContextualChangeRegistration, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface ATXMotionStateListener : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    _CDContextualChangeRegistration *_motionStateRegistration;
    NSUserDefaults *_userDefaults;
}




-(NSInteger)motionStateWithIntegerValue:(NSInteger)arg0 ;
-(id)clientIdentifierForMotionState;
-(id)init;
-(id)motionStateChangeCallback:(SEL)arg0 ;
-(id)registrationIdentifierForMotionState;
-(void)registerForMotionStateNotification:(id)arg0 ;


@end


#endif