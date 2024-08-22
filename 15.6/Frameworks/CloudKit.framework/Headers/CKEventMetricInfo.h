// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKEVENTMETRICINFO_H
#define CKEVENTMETRICINFO_H

@class NSString, NSMutableDictionary, NSDictionary, NSDate, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKEventMetricInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess; // ivar: _allowsExpensiveNetworkAccess
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // ivar: _applicationBundleIdentifierOverrideForContainerAccess
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (readonly, nonatomic) NSMutableDictionary *associatedOperationGroups; // ivar: _associatedOperationGroups
@property (readonly, nonatomic) NSMutableDictionary *associatedOperations; // ivar: _associatedOperations
@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly, nonatomic) BOOL isCKInternalMetric; // ivar: _isCKInternalMetric
@property (readonly, nonatomic) BOOL isPushTriggerFired; // ivar: _isPushTriggerFired
@property (readonly, nonatomic) NSUUID *metricUUID; // ivar: _metricUUID
@property (readonly, nonatomic) BOOL preferAnonymousRequests; // ivar: _preferAnonymousRequests
@property (readonly, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // ivar: _sourceApplicationSecondaryIdentifier
@property (readonly, nonatomic) NSDate *startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventMetric:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif