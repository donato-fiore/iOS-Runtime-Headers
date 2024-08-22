// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKOPERATIONCONFIGURATION_H
#define CKOPERATIONCONFIGURATION_H

@class NSString, NSDictionary, NSNumber, NSMutableDictionary;
@protocol NSSecureCoding, NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "CKContainer.h"
#import "CKSchedulerActivity.h"

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _hasContainer;
    BOOL _hasAllowsCellularAccess;
    BOOL _hasLongLived;
    BOOL _hasTimeoutIntervalForRequest;
    BOOL _hasTimeoutIntervalForResource;
    BOOL _hasXPCActivity;
    BOOL _hasXPCActivityAutomaticallyDefer;
    BOOL _hasSchedulerActivity;
    BOOL _hasDiscretionarySchedulingForEntireOperation;
    BOOL _hasPreferAnonymousRequests;
    BOOL _hasAllowsBackgroundNetworking;
    BOOL _hasSourceApplicationBundleIdentifier;
    BOOL _hasSourceApplicationSecondaryIdentifier;
    BOOL _hasApplicationBundleIdentifierOverrideForContainerAccess;
    BOOL _hasApplicationBundleIdentifierOverrideForNetworkAttribution;
    BOOL _hasAdditionalRequestHTTPHeaders;
    BOOL _hasIsCloudKitSupportOperation;
    BOOL _hasCacheDeleteAvailableSpaceClass;
}


@property (copy, nonatomic) NSString *_sourceApplicationSecondaryIdentifier; // ivar: _sourceApplicationSecondaryIdentifier
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // ivar: _additionalRequestHTTPHeaders
@property (nonatomic) BOOL allowsBackgroundNetworking; // ivar: _allowsBackgroundNetworking
@property (nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (nonatomic) BOOL allowsExpensiveNetworkAccess; // ivar: _allowsExpensiveNetworkAccess
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // ivar: _applicationBundleIdentifierOverrideForContainerAccess
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (nonatomic) BOOL automaticallyRetryNetworkFailures; // ivar: _automaticallyRetryNetworkFailures
@property (copy, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass; // ivar: _cacheDeleteAvailableSpaceClass
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (nonatomic) NSUInteger discretionaryNetworkBehavior; // ivar: _discretionaryNetworkBehavior
@property (nonatomic) BOOL discretionarySchedulingForEntireOperation; // ivar: _discretionarySchedulingForEntireOperation
@property (nonatomic) BOOL hasAllowsExpensiveNetworkAccess; // ivar: _hasAllowsExpensiveNetworkAccess
@property (nonatomic) BOOL hasAutomaticallyRetryNetworkFailures; // ivar: _hasAutomaticallyRetryNetworkFailures
@property (nonatomic) BOOL hasDiscretionaryNetworkBehavior; // ivar: _hasDiscretionaryNetworkBehavior
@property (nonatomic) BOOL hasQualityOfService; // ivar: _hasQualityOfService
@property (nonatomic) BOOL isCloudKitSupportOperation; // ivar: _isCloudKitSupportOperation
@property (nonatomic, getter=isLongLived) BOOL longLived; // ivar: _longLived
@property (nonatomic) BOOL preferAnonymousRequests; // ivar: _preferAnonymousRequests
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (copy, nonatomic) CKSchedulerActivity *schedulerActivity; // ivar: _schedulerActivity
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic) CGFloat timeoutIntervalForRequest; // ivar: _timeoutIntervalForRequest
@property (nonatomic) CGFloat timeoutIntervalForResource; // ivar: _timeoutIntervalForResource
@property (retain, nonatomic) NSMutableDictionary *unitTestOverrides; // ivar: _unitTestOverrides
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // ivar: _xpcActivity
@property (nonatomic) BOOL xpcActivityAutomaticallyDefer; // ivar: _xpcActivityAutomaticallyDefer


+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)resolveAgainstGenericConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setApplicationBundleIdentifierOverride:(id)arg0 ;


@end


#endif