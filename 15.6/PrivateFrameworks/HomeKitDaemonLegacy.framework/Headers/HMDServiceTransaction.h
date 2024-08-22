// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSERVICETRANSACTION_H
#define HMDSERVICETRANSACTION_H

@class NSString, NSArray, NSNumber;
@protocol OS_dispatch_group;


#import "HMDBackingStoreModelObject.h"

@interface HMDServiceTransaction : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *associatedServiceType;
@property (retain, nonatomic) NSArray *characteristics;
@property (retain, nonatomic) NSNumber *configurationState;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationTracker; // ivar: _configurationTracker
@property (retain, nonatomic) NSString *expectedConfiguredName;
@property (retain, nonatomic) NSNumber *hidden;
@property (retain, nonatomic) NSNumber *instanceID;
@property (retain, nonatomic) NSNumber *labelIndex;
@property (retain, nonatomic) NSNumber *labelNamespace;
@property (retain, nonatomic) NSNumber *lastKnownDiscoveryMode;
@property (retain, nonatomic) NSNumber *lastKnownOperatingState;
@property (retain, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons;
@property (retain, nonatomic) NSString *lastSeenConfiguredNameLocal; // ivar: _lastSeenConfiguredNameLocal
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSArray *mediaSourceDisplayOrder;
@property (retain, nonatomic) NSNumber *mediaSourceIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *primary;
@property (retain, nonatomic) NSString *providedName;
@property (retain, nonatomic) NSNumber *serviceProperties;
@property (retain, nonatomic) NSString *serviceSubtype;
@property (retain, nonatomic) NSString *serviceType;


+(id)properties;


@end


#endif