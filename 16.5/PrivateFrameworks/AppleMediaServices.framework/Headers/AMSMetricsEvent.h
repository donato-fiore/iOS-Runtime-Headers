// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSEVENT_H
#define AMSMETRICSEVENT_H

@class ACAccount, NSString, NSNumber, NSDictionary;
@protocol NSCopying, NSSecureCoding, AMSEngagementEvent;

#import <Foundation/Foundation.h>


@interface AMSMetricsEvent : NSObject <NSCopying, NSSecureCoding, AMSEngagementEvent>

 {
    os_unfair_lock_s _internalStateLock;
}


@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic, getter=isAnonymous) BOOL anonymous;
@property (copy, nonatomic) NSString *app;
@property (copy, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSNumber *baseVersion;
@property (copy, nonatomic) NSString *canaryIdentifier;
@property (nonatomic) BOOL checkDiagnosticsAndUsageSetting;
@property (copy, nonatomic) NSString *clientEventID;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (retain) NSDictionary *data; // ivar: _data
@property (readonly, nonatomic) NSDictionary *databaseEventBody;
@property (readonly, nonatomic) NSNumber *databasePID; // ivar: _databasePID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *diagnosticsSubmissionBugType;
@property (readonly, nonatomic) NSDictionary *dictionaryForPosting;
@property (readonly) NSDictionary *engagementData;
@property (readonly, nonatomic) BOOL engagementEvent;
@property (readonly, nonatomic) NSDictionary *engagementMetrics;
@property (retain, nonatomic) NSNumber *eventTime;
@property (copy, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *eventVersion;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *osBuildVersion;
@property (copy, nonatomic) NSString *osName;
@property (copy, nonatomic) NSString *osVersion;
@property (nonatomic) BOOL preventSampling;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressEngagement;
@property (retain, nonatomic) NSNumber *timezoneOffset;
@property (copy, nonatomic) NSString *topic;
@property (readonly, nonatomic) NSDictionary *underlyingDictionary; // ivar: _underlyingDictionary
@property (readonly, nonatomic) NSDictionary *underlyingDictionaryOverride; // ivar: _underlyingDictionaryOverride


+(BOOL)supportsSecureCoding;
+(id)_buyParamsFromString:(id)arg0 ;
+(id)_buyParamsStringFromAuthenticationContext:(id)arg0 ;
+(id)_deepCopiedAndSanitizedTopLevelDictionaryFromDictionary:(id)arg0 ;
+(id)_deepCopiedJSONObjectOrNilForObject:(id)arg0 ;
+(id)_propertyValueClassesForKnownProperties;
+(id)_topicFromAuthenticationContext:(id)arg0 ;
+(id)createEventFromAuthenticationContext:(id)arg0 error:(id)arg1 ;
+(id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg0 ;
+(id)sanitizedObject:(id)arg0 ;
-(id)_initWithUnderlyingDictionary:(id)arg0 account:(id)arg1 databasePID:(id)arg2 ;
-(id)_propertyForBodyKey:(id)arg0 clientOnly:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForEngagement;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopic:(id)arg0 ;
-(id)initWithUnderlyingDictionary:(id)arg0 ;
-(id)propertyForBodyKey:(id)arg0 ;
-(void)_setProperty:(id)arg0 forBodyKey:(id)arg1 clientOnly:(BOOL)arg2 ;
-(void)addClientIdentifier:(id)arg0 ;
-(void)addPropertiesWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removePropertiesForKeys:(id)arg0 ;
-(void)setProperty:(id)arg0 forBodyKey:(id)arg1 ;


@end


#endif