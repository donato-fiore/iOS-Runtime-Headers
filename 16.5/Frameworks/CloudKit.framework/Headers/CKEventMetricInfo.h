// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKEVENTMETRICINFO_H
#define CKEVENTMETRICINFO_H

@class NSString, NSDictionary, NSDate, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKEventMetricInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess; // ivar: _allowsExpensiveNetworkAccess
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // ivar: _applicationBundleIdentifierOverrideForContainerAccess
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (readonly, copy, nonatomic) NSDictionary *associatedOperationGroups; // ivar: _associatedOperationGroups
@property (readonly, copy, nonatomic) NSDictionary *associatedOperations; // ivar: _associatedOperations
@property (readonly, copy, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (readonly, copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, copy, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly, copy, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly, nonatomic) BOOL isCKInternalMetric; // ivar: _isCKInternalMetric
@property (readonly, nonatomic) BOOL isPushTriggerFired; // ivar: _isPushTriggerFired
@property (readonly, copy, nonatomic) NSUUID *metricUUID; // ivar: _metricUUID
@property (readonly, nonatomic) BOOL preferAnonymousRequests; // ivar: _preferAnonymousRequests
@property (readonly, copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (readonly, copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // ivar: _sourceApplicationSecondaryIdentifier
@property (readonly, copy, nonatomic) NSDate *startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventMetric:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif