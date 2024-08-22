// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSYNC3TRANSPORTPOLICY_H
#define _DKSYNC3TRANSPORTPOLICY_H

@class NSString, NSDictionary;
@protocol _DKSync3PolicyCommonMethods;

#import <Foundation/Foundation.h>


@interface _DKSync3TransportPolicy : NSObject <_DKSync3PolicyCommonMethods>

 {
    BOOL _isSyncDisabled;
    NSString *_name;
    NSString *_transport;
    NSUInteger _maximumSyncsPerDay;
    NSUInteger _syncBatchSizeInEvents;
    NSUInteger _maximumBatchesPerSync;
    NSUInteger _minimumSyncWindowInSeconds;
    NSUInteger _minimumTimeBetweenSyncsInSeconds;
    NSUInteger _singleDevicePeriodicSyncCadenceInDays;
    NSUInteger _additionsBucketCountTriggeringSync;
    NSUInteger _deletionsBucketCountTriggeringSync;
}


@property (retain, nonatomic) NSDictionary *properties; // ivar: _properties


-(id)description;
-(id)init;


@end


#endif