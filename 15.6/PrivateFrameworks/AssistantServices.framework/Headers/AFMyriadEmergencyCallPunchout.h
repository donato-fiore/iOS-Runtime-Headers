// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMYRIADEMERGENCYCALLPUNCHOUT_H
#define AFMYRIADEMERGENCYCALLPUNCHOUT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFMyriadEmergencyCallPunchout : NSObject {
    NSObject<OS_dispatch_queue> *_myriadEmergencyCallingQueue;
}




-(id)init;
-(void)initiateEmergencyCallMyriad;


@end


#endif