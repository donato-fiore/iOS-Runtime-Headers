// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHIDUISENSORSERVICE_H
#define BKSHIDUISENSORSERVICE_H

@class BSCompoundAssertion;

#import <Foundation/Foundation.h>

#import "BKSHIDUISensorMode.h"
#import "BKSHIDUISensorCharacteristics.h"

@interface BKSHIDUISensorService : NSObject {
    BSCompoundAssertion *_modeAssertion;
    BKSHIDUISensorMode *_prevailingMode;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) BKSHIDUISensorCharacteristics *sensorCharacteristics;


+(id)sharedInstance;
-(id)init;
-(id)requestUISensorMode:(id)arg0 ;
-(void)_lock_setupAssertion;


@end


#endif