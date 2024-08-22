// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNC3FEATUREPOLICY_H
#define _DKSYNC3FEATUREPOLICY_H

@class NSString, NSArray, NSDictionary;
@protocol _DKSync3PolicyCommonMethods;

#import <Foundation/Foundation.h>


@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods>

 {
    BOOL _isSyncDisabled;
    BOOL _onlyMultiDevice;
    BOOL _onlySingleDevice;
    BOOL _requiresCharging;
    BOOL _pushTriggersSync;
    BOOL _additionsCountTowardTriggeredSyncBucket;
    BOOL _deletionsCountTowardTriggeredSyncBucket;
    BOOL _additionTriggersImmediateSync;
    BOOL _deletionTriggersImmediateSync;
    NSString *_name;
    NSString *_feature;
    NSArray *_streamNames;
    NSArray *_sources;
    NSArray *_destinations;
    NSString *_transport;
    NSUInteger _periodicSyncCadenceInMinutes;
    NSUInteger _oldestEventToSyncInDays;
    NSArray *_requiresCompanions;
}


@property (retain, nonatomic) NSDictionary *properties; // ivar: _properties


-(id)description;
-(id)init;


@end


#endif