// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDMMCSREQUESTOPTIONS_H
#define CKDMMCSREQUESTOPTIONS_H

@class CKOperationMMCSRequestOptions, NSString, NSData, NSDictionary, NSNumber, CKContainerID, C2MetricOptions, NSArray;

#import <Foundation/Foundation.h>


@interface CKDMMCSRequestOptions : NSObject

@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions; // ivar: _MMCSRequestOptions
@property (nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (nonatomic) BOOL allowsExpensiveNetworkAccess; // ivar: _allowsExpensiveNetworkAccess
@property (nonatomic) BOOL allowsPowerNapScheduling; // ivar: _allowsPowerNapScheduling
@property (retain, nonatomic) NSString *applicationBundleIdentifierForContainerAccess; // ivar: _applicationBundleIdentifierForContainerAccess
@property (retain, nonatomic) NSString *applicationBundleIdentifierForNetworkAttribution; // ivar: _applicationBundleIdentifierForNetworkAttribution
@property (retain, nonatomic) NSString *applicationSecondaryID; // ivar: _applicationSecondaryID
@property (retain, nonatomic) NSData *authPutResponse; // ivar: _authPutResponse
@property (retain, nonatomic) NSDictionary *authPutResponseHeaders; // ivar: _authPutResponseHeaders
@property (retain, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass; // ivar: _cacheDeleteAvailableSpaceClass
@property (nonatomic) NSInteger clientQueuePriority; // ivar: _clientQueuePriority
@property (retain, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (retain, nonatomic) NSString *deviceHardwareID; // ivar: _deviceHardwareID
@property (nonatomic) NSUInteger duetPreClearedMode; // ivar: _duetPreClearedMode
@property (nonatomic) BOOL isCrossOwner; // ivar: _isCrossOwner
@property (retain, nonatomic) C2MetricOptions *metricOptions; // ivar: _metricOptions
@property (nonatomic) NSUInteger networkServiceType; // ivar: _networkServiceType
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) BOOL resolvedAutomaticallyRetryNetworkFailures; // ivar: _resolvedAutomaticallyRetryNetworkFailures
@property (nonatomic) NSUInteger resolvedDiscretionaryNetworkBehavior; // ivar: _resolvedDiscretionaryNetworkBehavior
@property (retain, nonatomic) NSString *topmostParentOperationGroupID; // ivar: _topmostParentOperationGroupID
@property (retain, nonatomic) NSString *topmostParentOperationID; // ivar: _topmostParentOperationID
@property (retain, nonatomic) NSArray *zoneNames; // ivar: _zoneNames


-(BOOL)usesBackgroundSession;
-(id)CKPropertiesDescription;
-(id)MMCSOptions;
-(id)description;
-(id)initWithOperation:(id)arg0 ;


@end


#endif