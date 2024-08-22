// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMETRICSLOGGINGEVENT_H
#define AMSMETRICSLOGGINGEVENT_H

@class NSString, NSError;


#import "AMSMetricsEvent.h"

@interface AMSMetricsLoggingEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *clientApp;
@property (retain, nonatomic) NSString *clientBuildType;
@property (retain, nonatomic) NSString *currentProcess;
@property (retain, nonatomic) NSString *engagementEventType;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSUInteger errorCode;
@property (retain, nonatomic) NSString *errorDescription;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) NSInteger errorUserInfoCryptoCode;
@property (nonatomic) BOOL errorUserInfoEngagementPresented;
@property (nonatomic) NSInteger errorUserInfoServerErrorCode;
@property (nonatomic) NSInteger errorUserInfoStatusCode;
@property (nonatomic) CGFloat eventEndTime;
@property (nonatomic) BOOL eventInlineInterruption;
@property (retain, nonatomic) NSString *eventParamEventType;
@property (retain, nonatomic) NSString *eventParamItemId;
@property (retain, nonatomic) NSString *eventParamProductType;
@property (retain, nonatomic) NSString *eventParamSource;
@property (retain, nonatomic) NSString *eventParamSuccess;
@property (retain, nonatomic) NSString *eventPlacement;
@property (retain, nonatomic) NSString *eventServiceType;
@property (nonatomic) CGFloat eventStartTime;
@property (nonatomic) NSInteger logLevel;
@property (retain, nonatomic) NSString *originatingURL; // ivar: _originatingURL
@property (retain, nonatomic) NSString *originatingURLParamBagProfile;
@property (retain, nonatomic) NSString *originatingURLParamBagProfileVersion;
@property (retain, nonatomic) NSString *releaseVersion;
@property (retain, nonatomic) NSString *subsystem;
@property (nonatomic) NSUInteger underlyingErrorCode;
@property (retain, nonatomic) NSString *underlyingErrorDescription;
@property (nonatomic) NSInteger underlyingErrorUserInfoCryptoCode;
@property (nonatomic) BOOL underlyingErrorUserInfoEngagementPresented;
@property (nonatomic) NSInteger underlyingErrorUserInfoServerErrorCode;
@property (nonatomic) NSInteger underlyingErrorUserInfoStatusCode;
@property (retain, nonatomic) NSString *url; // ivar: _url
@property (retain, nonatomic) NSString *urlParamBagProfile;
@property (retain, nonatomic) NSString *urlParamBagProfileVersion;


+(id)shouldSampleErrorsWithBag:(id)arg0 ;
-(id)getBuildType;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 error:(id)arg2 ;
-(void)prepareEvent;


@end


#endif