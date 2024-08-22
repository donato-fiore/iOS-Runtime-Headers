// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERUNLOCKWITHTIMEOUTPARAMS_H
#define CHIPDOORLOCKCLUSTERUNLOCKWITHTIMEOUTPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterUnlockWithTimeoutParams : NSObject

@property (retain, nonatomic) NSData *pinCode; // ivar: _pinCode
@property (retain, nonatomic) NSNumber *timeout; // ivar: _timeout


-(id)init;


@end


#endif