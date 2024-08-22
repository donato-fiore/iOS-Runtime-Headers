// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKHIDEVENTDELIVERYCLIENT_H
#define BKHIDEVENTDELIVERYCLIENT_H

@class NSString, NSArray, NSSet, BSContinuousMachTimer;


#import "BKHIDEventClient.h"

@interface BKHIDEventDeliveryClient : BKHIDEventClient {
    NSString *_processDescription;
    NSArray *_deliveryRoots;
    NSArray *_keyCommandDeliveryRoots;
    NSArray *_deferringRules;
    NSSet *_keyCommandsRegistrations;
    NSSet *_resolutions;
    BSContinuousMachTimer *_bufferTimer;
}




-(void)invalidate;


@end


#endif