// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPBACKGROUNDSTATETRACKER_H
#define PKAPPBACKGROUNDSTATETRACKER_H


#import <Foundation/Foundation.h>


@interface PKAppBackgroundStateTracker : NSObject {
    uint8_t _inBackground;
    Class _applicationClass;
}




-(id)init;
-(void)_updateState;


@end


#endif