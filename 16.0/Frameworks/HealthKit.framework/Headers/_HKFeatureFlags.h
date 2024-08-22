// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKFEATUREFLAGS_H
#define _HKFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface _HKFeatureFlags : NSObject {
    _HKLazyLoader<bool> _acacia;
    _HKLazyLoader<bool> _axilla;
    _HKLazyLoader<bool> _beryllium;
    _HKLazyLoader<bool> _bloodPressureTrends;
    _HKLazyLoader<bool> _checklistDataTypeDetail;
    _HKLazyLoader<bool> _frequentCloudSync;
    _HKLazyLoader<bool> _ginkgo;
    _HKLazyLoader<bool> _heartRatePush;
    _HKLazyLoader<bool> _kaliSharing;
    _HKLazyLoader<bool> _kali;
    _HKLazyLoader<bool> _luna;
    _HKLazyLoader<bool> _percentInRange;
    _HKLazyLoader<bool> _shardedOntology;
    _HKLazyLoader<bool> _sleepCloudKitManatee;
    _HKLazyLoader<bool> _sleepCloudKitSync;
    _HKLazyLoader<bool> _sleepOnIpad;
    _HKLazyLoader<bool> _sleepOnMac;
    _HKLazyLoader<bool> _vrx;
    _HKLazyLoader<bool> _autobahn;
}


@property (nonatomic) BOOL acacia;
@property (nonatomic) BOOL autobahn;
@property (readonly, nonatomic) BOOL axilla;
@property (nonatomic) BOOL beryllium;
@property (nonatomic) BOOL bloodPressureTrends;
@property (nonatomic) BOOL checklistDataTypeDetail;
@property (nonatomic) BOOL frequentCloudSync;
@property (nonatomic) BOOL ginkgo;
@property (nonatomic) BOOL heartRatePush;
@property (nonatomic) BOOL kali;
@property (nonatomic) BOOL kaliSharing;
@property (nonatomic) BOOL luna;
@property (nonatomic) BOOL percentInRange;
@property (nonatomic) BOOL shardedOntology;
@property (nonatomic) BOOL sleepCloudKitManatee;
@property (nonatomic) BOOL sleepCloudKitSync;
@property (nonatomic) BOOL sleepOnIpad;
@property (nonatomic) BOOL sleepOnMac;
@property (nonatomic) BOOL vrx;




@end


#endif