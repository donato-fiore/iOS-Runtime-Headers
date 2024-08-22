// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKOPERATIONINFO_H
#define CKOPERATIONINFO_H

@class NSString, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKOperationMMCSRequestOptions.h"
#import "CKOperationGroup.h"
#import "CKOperationConfiguration.h"

@interface CKOperationInfo : NSObject <NSSecureCoding, NSCopying>

 {
    unsigned int _clientSDKVersion;
    NSString *_name;
}


@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions; // ivar: _MMCSRequestOptions
@property (readonly, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, nonatomic) NSString *authPromptReason;
@property (readonly, nonatomic) BOOL automaticallyRetryNetworkFailures;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;
@property (retain, nonatomic) NSString *ckOperationClassName; // ivar: _ckOperationClassName
@property (nonatomic) BOOL clientHasValidatedEntitlements; // ivar: _clientHasValidatedEntitlements
@property (nonatomic) NSInteger clientQueuePriority; // ivar: _clientQueuePriority
@property (readonly, nonatomic) NSUInteger discretionaryNetworkBehavior;
@property (nonatomic) NSUInteger discretionaryWhenBackgroundedState; // ivar: _discretionaryWhenBackgroundedState
@property (nonatomic) NSUInteger duetPreClearedMode; // ivar: _duetPreClearedMode
@property (retain, nonatomic) CKOperationGroup *group; // ivar: _group
@property (readonly, nonatomic) BOOL isCloudKitSupportOperation;
@property (readonly, nonatomic) BOOL isLongLived;
@property (nonatomic) BOOL isOutstandingOperation; // ivar: _isOutstandingOperation
@property (retain, nonatomic) NSString *operationDaemonCallbackProtocolName; // ivar: _operationDaemonCallbackProtocolName
@property (retain, nonatomic) NSString *operationID; // ivar: _operationID
@property (weak, nonatomic) id *parentOperation; // ivar: _parentOperation
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (readonly, nonatomic) NSInteger qualityOfService;
@property (nonatomic) NSUInteger requestOriginator; // ivar: _requestOriginator
@property (retain, nonatomic) CKOperationConfiguration *resolvedConfiguration; // ivar: _resolvedConfiguration
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic) NSUInteger systemScheduler; // ivar: _systemScheduler
@property (readonly, nonatomic) CGFloat timeoutIntervalForRequest;
@property (readonly, nonatomic) CGFloat timeoutIntervalForResource;
@property (nonatomic) BOOL usesAssetDownloadStagingManager; // ivar: _usesAssetDownloadStagingManager
@property (nonatomic) BOOL wantsRequestStatistics; // ivar: _wantsRequestStatistics


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)takeValuesFrom:(id)arg0 ;


@end


#endif