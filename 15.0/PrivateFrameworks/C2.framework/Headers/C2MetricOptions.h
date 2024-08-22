// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef C2METRICOPTIONS_H
#define C2METRICOPTIONS_H

@class NSString, NSURL, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface C2MetricOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL anonymous; // ivar: _anonymous
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // ivar: _applicationBundleIdentifierOverrideForContainerAccess
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (copy, nonatomic) NSURL *c2MetricsEndpoint; // ivar: _c2MetricsEndpoint
@property (copy, nonatomic) NSArray *clientOperations; // ivar: _clientOperations
@property (copy, nonatomic) NSString *clientProcessBundleId; // ivar: _clientProcessBundleId
@property (copy, nonatomic) NSString *clientProcessVersion; // ivar: _clientProcessVersion
@property (copy, nonatomic) NSString *container; // ivar: _container
@property (copy, nonatomic) NSString *containerScopedDeviceIdentifier; // ivar: _containerScopedDeviceIdentifier
@property (copy, nonatomic) NSString *containerScopedUserIdentifier; // ivar: _containerScopedUserIdentifier
@property (copy, nonatomic) NSString *databaseScope; // ivar: _databaseScope
@property (copy, nonatomic) id *didCompleteWithError; // ivar: _didCompleteWithError
@property (copy, nonatomic) NSString *environment; // ivar: _environment
@property (readonly, nonatomic) NSString *headerValueForTriggers;
@property (copy, nonatomic) NSArray *operationGroups; // ivar: _operationGroups
@property (nonatomic) BOOL pushTrigger; // ivar: _pushTrigger
@property (nonatomic) NSUInteger reportClientOperationFrequency; // ivar: _reportClientOperationFrequency
@property (nonatomic) NSUInteger reportClientOperationFrequencyBase; // ivar: _reportClientOperationFrequencyBase
@property (nonatomic) NSUInteger reportFrequency; // ivar: _reportFrequency
@property (nonatomic) NSUInteger reportFrequencyBase; // ivar: _reportFrequencyBase
@property (nonatomic) unsigned int reportFrequencyRandomValue; // ivar: _reportFrequencyRandomValue
@property (nonatomic) NSUInteger reportOperationGroupFrequency; // ivar: _reportOperationGroupFrequency
@property (nonatomic) NSUInteger reportOperationGroupFrequencyBase; // ivar: _reportOperationGroupFrequencyBase
@property (copy, nonatomic) id *testBehavior_reportMetric; // ivar: _testBehavior_reportMetric


+(BOOL)supportsSecureCoding;
-(BOOL)clientOperationTriggered:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)operationGroupTriggered:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generateCloudKitInfo;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(int)generateTriggerWithResponseHeader:(unsigned char)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)rollReportFrequencyRandomValue;


@end


#endif