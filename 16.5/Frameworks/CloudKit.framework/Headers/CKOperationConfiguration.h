// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKOPERATIONCONFIGURATION_H
#define CKOPERATIONCONFIGURATION_H

@class NSString, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKAssetDownloadStagingManager.h"
#import "CKXPCActivity.h"
#import "CKContainer.h"
#import "CKSchedulerActivity.h"

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _hasContainer;
    BOOL _hasAllowsCellularAccess;
    BOOL _hasLongLived;
    BOOL _hasTimeoutIntervalForRequest;
    BOOL _hasTimeoutIntervalForResource;
    BOOL _hasCKXPCActivity;
    BOOL _hasXPCActivityAutomaticallyDefer;
    BOOL _hasSchedulerActivity;
    BOOL _hasDiscretionarySchedulingForEntireOperation;
    BOOL _hasPreferAnonymousRequests;
    BOOL _hasSourceApplicationBundleIdentifier;
    BOOL _hasSourceApplicationSecondaryIdentifier;
    BOOL _hasApplicationBundleIdentifierOverrideForContainerAccess;
    BOOL _hasApplicationBundleIdentifierOverrideForNetworkAttribution;
    BOOL _hasAdditionalRequestHTTPHeaders;
    BOOL _hasIsCloudKitSupportOperation;
    BOOL _hasCacheDeleteAvailableSpaceClass;
    BOOL _hasAssetDownloadStagingManager;
}


@property (copy) NSString *_sourceApplicationSecondaryIdentifier; // ivar: _sourceApplicationSecondaryIdentifier
@property (copy) NSDictionary *additionalRequestHTTPHeaders; // ivar: _additionalRequestHTTPHeaders
@property BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property BOOL allowsExpensiveNetworkAccess; // ivar: _allowsExpensiveNetworkAccess
@property (copy) NSString *applicationBundleIdentifierOverrideForContainerAccess; // ivar: _applicationBundleIdentifierOverrideForContainerAccess
@property (copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (copy) CKAssetDownloadStagingManager *assetDownloadStagingManager; // ivar: _assetDownloadStagingManager
@property BOOL automaticallyRetryNetworkFailures; // ivar: _automaticallyRetryNetworkFailures
@property (copy) NSNumber *cacheDeleteAvailableSpaceClass; // ivar: _cacheDeleteAvailableSpaceClass
@property (copy, setter=setCKXPCActivity:) CKXPCActivity *ckXPCActivity; // ivar: _ckXPCActivity
@property (retain) CKContainer *container; // ivar: _container
@property NSUInteger discretionaryNetworkBehavior; // ivar: _discretionaryNetworkBehavior
@property BOOL discretionarySchedulingForEntireOperation; // ivar: _discretionarySchedulingForEntireOperation
@property BOOL hasAllowsExpensiveNetworkAccess; // ivar: _hasAllowsExpensiveNetworkAccess
@property BOOL hasAutomaticallyRetryNetworkFailures; // ivar: _hasAutomaticallyRetryNetworkFailures
@property BOOL hasDiscretionaryNetworkBehavior; // ivar: _hasDiscretionaryNetworkBehavior
@property BOOL hasQualityOfService; // ivar: _hasQualityOfService
@property BOOL isCloudKitSupportOperation; // ivar: _isCloudKitSupportOperation
@property (getter=isLongLived) BOOL longLived; // ivar: _longLived
@property BOOL preferAnonymousRequests; // ivar: _preferAnonymousRequests
@property NSInteger qualityOfService; // ivar: _qualityOfService
@property (copy) CKSchedulerActivity *schedulerActivity; // ivar: _schedulerActivity
@property (copy) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (copy) NSString *sourceApplicationSecondaryIdentifier;
@property CGFloat timeoutIntervalForRequest; // ivar: _timeoutIntervalForRequest
@property CGFloat timeoutIntervalForResource; // ivar: _timeoutIntervalForResource
@property (readonly, copy) NSDictionary *unitTestOverrides; // ivar: _unitTestOverrides
@property BOOL xpcActivityAutomaticallyDefer; // ivar: _xpcActivityAutomaticallyDefer


+(BOOL)supportsSecureCoding;
+(id)defaultConvenienceOperationConfiguration;
-(BOOL)hasXPCActivity;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)resolveAgainstGenericConfiguration:(id)arg0 ;
-(void)addUnitTestOverrides:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeUnitTestOverride:(id)arg0 ;
-(void)setApplicationBundleIdentifierOverride:(id)arg0 ;
-(void)setXPCActivity:(id)arg0 ;
-(void)setXpcActivity:(id)arg0 ;


@end


#endif