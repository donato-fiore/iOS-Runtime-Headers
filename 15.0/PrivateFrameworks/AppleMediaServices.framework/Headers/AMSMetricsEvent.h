// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMETRICSEVENT_H
#define AMSMETRICSEVENT_H

@class ACAccount, NSString, NSNumber, NSDictionary, NSMutableDictionary;
@protocol NSCopying, AMSEngagementEvent, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSMetricsEvent : NSObject <NSCopying, AMSEngagementEvent>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic, getter=isAnonymous) BOOL anonymous;
@property (retain, nonatomic) NSString *app;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSNumber *baseVersion;
@property (retain, nonatomic) NSString *canaryIdentifier;
@property (nonatomic) BOOL checkDiagnosticsAndUsageSetting;
@property (retain, nonatomic) NSString *clientEventID;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain) NSDictionary *data;
@property (readonly, nonatomic) NSDictionary *databaseEventBody;
@property (retain, nonatomic) NSNumber *databasePID; // ivar: _databasePID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *diagnosticsSubmissionBugType;
@property (readonly, nonatomic) NSDictionary *dictionaryForPosting;
@property (readonly) NSDictionary *engagementData;
@property (readonly, nonatomic) BOOL engagementEvent;
@property (retain, nonatomic) NSNumber *eventTime;
@property (retain, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *eventVersion;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSString *osVersion;
@property (nonatomic) BOOL preventSampling;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressEngagement;
@property (retain, nonatomic) NSNumber *timezoneOffset;
@property (retain, nonatomic) NSString *topic;
@property (readonly, nonatomic) NSMutableDictionary *underlyingDictionary; // ivar: _underlyingDictionary


+(BOOL)_isValidJSONProperty:(id)arg0 ;
+(id)_buyParamsFromString:(id)arg0 ;
+(id)_buyParamsStringFromAuthenticationContext:(id)arg0 ;
+(id)_topicFromAuthenticationContext:(id)arg0 ;
+(id)createEventFromAuthenticationContext:(id)arg0 error:(id)arg1 ;
+(id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg0 ;
+(id)sanitizedObject:(id)arg0 ;
-(id)_propertyForBodyKey:(id)arg0 clientOnly:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForEngagement;
-(id)initWithDatabaseEventBody:(id)arg0 ;
-(id)initWithTopic:(id)arg0 ;
-(id)initWithUnderlyingDictionary:(id)arg0 ;
-(id)propertyForBodyKey:(id)arg0 ;
-(void)_setProperty:(id)arg0 forBodyKey:(id)arg1 clientOnly:(BOOL)arg2 ;
-(void)addClientIdentifier:(id)arg0 ;
-(void)addPropertiesWithDictionary:(id)arg0 ;
-(void)removePropertiesForKeys:(id)arg0 ;
-(void)setProperty:(id)arg0 forBodyKey:(id)arg1 ;


@end


#endif