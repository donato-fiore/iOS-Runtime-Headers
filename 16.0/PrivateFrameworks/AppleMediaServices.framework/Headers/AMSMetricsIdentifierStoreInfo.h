// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMETRICSIDENTIFIERSTOREINFO_H
#define AMSMETRICSIDENTIFIERSTOREINFO_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface AMSMetricsIdentifierStoreInfo : NSObject

@property (retain, nonatomic) NSString *account; // ivar: _account
@property (nonatomic) BOOL crossDeviceSync; // ivar: _crossDeviceSync
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (retain, nonatomic) NSDate *lastSync; // ivar: _lastSync
@property (retain, nonatomic) NSDate *modified; // ivar: _modified
@property (nonatomic) CGFloat resetInterval; // ivar: _resetInterval
@property (retain, nonatomic) NSDate *started; // ivar: _started
@property (retain, nonatomic) NSString *storeKey; // ivar: _storeKey
@property (retain, nonatomic) NSString *storeUUID; // ivar: _storeUUID




@end


#endif