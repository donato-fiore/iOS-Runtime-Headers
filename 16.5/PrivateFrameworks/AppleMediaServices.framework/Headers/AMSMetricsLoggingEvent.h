// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSLOGGINGEVENT_H
#define AMSMETRICSLOGGINGEVENT_H

@class NSDictionary, NSString, NSError, NSArray, NSMutableDictionary;
@protocol NSMutableCopying;


#import "AMSMetricsEvent.h"

@interface AMSMetricsLoggingEvent : AMSMetricsEvent <NSMutableCopying>



@property (copy, nonatomic) NSDictionary *breadcrumbs; // ivar: _breadcrumbs
@property (readonly, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *clientApp;
@property (copy, nonatomic) NSString *clientBuildType;
@property (copy, nonatomic) NSString *currentProcess;
@property (copy, nonatomic) NSString *engagementEventType;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSInteger errorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *errorTitle;
@property (nonatomic) NSInteger errorUserInfoCryptoCode;
@property (nonatomic) BOOL errorUserInfoEngagementPresented;
@property (nonatomic) NSInteger errorUserInfoServerErrorCode;
@property (nonatomic) NSInteger errorUserInfoStatusCode;
@property (copy, nonatomic) NSArray *eventDestinations;
@property (nonatomic) CGFloat eventEndTime;
@property (nonatomic) BOOL eventInlineInterruption;
@property (copy, nonatomic) NSString *eventParamEventType;
@property (copy, nonatomic) NSString *eventParamItemId;
@property (copy, nonatomic) NSString *eventParamProductType;
@property (copy, nonatomic) NSString *eventParamSource;
@property (copy, nonatomic) NSString *eventParamSuccess;
@property (copy, nonatomic) NSString *eventPlacement;
@property (copy, nonatomic) NSString *eventServiceType;
@property (nonatomic) CGFloat eventStartTime;
@property (copy, nonatomic) NSArray *jsVersionMap;
@property (copy, nonatomic) NSDictionary *jsVersions; // ivar: _jsVersions
@property (readonly, nonatomic) NSString *lastBreadcrumb;
@property (readonly, nonatomic) CGFloat lastBreadcrumbDuration;
@property (nonatomic) NSInteger logLevel;
@property (copy, nonatomic) NSString *originatingURL;
@property (copy, nonatomic) NSString *originatingURLParamBagProfile;
@property (copy, nonatomic) NSString *originatingURLParamBagProfileVersion;
@property (copy, nonatomic) NSString *releaseVersion;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSMutableDictionary *underlyingDictionaryForSentry;
@property (nonatomic) NSInteger underlyingErrorCode;
@property (copy, nonatomic) NSString *underlyingErrorDomain;
@property (copy, nonatomic) NSString *underlyingErrorMessage;
@property (copy, nonatomic) NSString *underlyingErrorTitle;
@property (nonatomic) NSInteger underlyingErrorUserInfoCryptoCode;
@property (nonatomic) BOOL underlyingErrorUserInfoEngagementPresented;
@property (nonatomic) NSInteger underlyingErrorUserInfoServerErrorCode;
@property (nonatomic) NSInteger underlyingErrorUserInfoStatusCode;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlParamBagProfile;
@property (copy, nonatomic) NSString *urlParamBagProfileVersion;


+(id)_propertyValueClassesForKnownProperties;
+(id)shouldSampleErrorsWithBag:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getBuildType;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 error:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)stringForLogLevel:(NSInteger)arg0 ;
-(id)underlyingDictionaryOverride;
-(void)prepareEvent;


@end


#endif