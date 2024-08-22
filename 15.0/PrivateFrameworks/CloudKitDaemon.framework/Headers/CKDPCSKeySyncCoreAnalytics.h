// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPCSKEYSYNCCOREANALYTICS_H
#define CKDPCSKEYSYNCCOREANALYTICS_H

@class NSNumber, NSString, NSError;

#import <Foundation/Foundation.h>


@interface CKDPCSKeySyncCoreAnalytics : NSObject

@property (nonatomic) NSNumber *KRSReturnedExistingIdentity; // ivar: _KRSReturnedExistingIdentity
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSNumber *isManatee; // ivar: _isManatee
@property (retain, nonatomic) NSNumber *keySyncDurationSec; // ivar: _keySyncDurationSec
@property (retain, nonatomic) NSString *keySyncResult; // ivar: _keySyncResult
@property (retain, nonatomic) NSString *overallResult; // ivar: _overallResult
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSNumber *shouldThrottle; // ivar: _shouldThrottle
@property (retain, nonatomic) NSNumber *throttledDurationSec; // ivar: _throttledDurationSec




@end


#endif