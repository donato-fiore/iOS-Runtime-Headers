// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSECONDARYDEVICEPAIRINGREQUEST_H
#define HDSECONDARYDEVICEPAIRINGREQUEST_H

@class HKDaemonTransaction, HKSecondaryPairedDeviceConfiguration, NSString;

#import <Foundation/Foundation.h>

#import "HDTinkerProfile.h"

@interface HDSecondaryDevicePairingRequest : NSObject {
    os_unfair_lock_s _lock;
    CGFloat _startTime;
    HKDaemonTransaction *_transaction;
    HKSecondaryPairedDeviceConfiguration *_configuration;
    id *_completion;
    NSInteger _stage;
    HDTinkerProfile *_profile;
    NSString *_guardianAccountIdentifier;
}




-(void)dealloc;


@end


#endif