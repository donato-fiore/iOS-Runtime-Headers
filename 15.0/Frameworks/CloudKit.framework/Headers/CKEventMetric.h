// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKEVENTMETRIC_H
#define CKEVENTMETRIC_H

@class NSUUID, NSString, NSMutableDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKEventMetric : NSObject <NSSecureCoding>

 {
    BOOL _hasBeenSubmitted;
    BOOL _inferredAllowsCellular;
    BOOL _inferredAllowsExpensive;
    BOOL _inferredPreferAnonymousRequests;
    BOOL _isCKInternalMetric;
    NSUUID *_metricUUID;
    NSInteger _inferredDatabaseScope;
    NSString *_inferredDeviceIdentifier;
    NSString *_inferredSourceApplicationBundleIdentifier;
    NSString *_inferredApplicationBundleIdentifierOverrideForContainerAccess;
    NSString *_inferredApplicationBundleIdentifierOverrideForNetworkAttribution;
    NSString *_inferredSourceApplicationSecondaryIdentifier;
    NSMutableDictionary *_associatedOperations;
    NSMutableDictionary *_associatedOperationGroups;
}


@property (readonly, nonatomic) NSMutableDictionary *attributes; // ivar: _attributes
@property (copy) NSDate *endTime; // ivar: _endTime
@property (readonly, copy, nonatomic) NSString *eventName; // ivar: _eventName
@property (nonatomic) BOOL isPushTriggerFired; // ivar: _isPushTriggerFired
@property (copy) NSDate *startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
-(BOOL)associateWithCompletedOperation:(id)arg0 ;
-(id)generateEventMetricInfo;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventName:(id)arg0 ;
-(id)initWithEventName:(id)arg0 atTime:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMetricValue:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif