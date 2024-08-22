// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHIDEVENTDISPATCHCONTROLLER_H
#define SBHIDEVENTDISPATCHCONTROLLER_H

@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBHIDEventDispatchController : NSObject {
    id<BSInvalidatable> *_dispatchingAssertion;
    id<BSInvalidatable> *_dispatchingAssertionForVoiceCommand;
    id<BSInvalidatable> *_keyCommandDispatchingAssertion;
}




+(id)sharedInstance;
-(id)init;


@end


#endif