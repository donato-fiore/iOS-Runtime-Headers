// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMETRICSEVENT_H
#define SSMETRICSEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SSMetricsEvent : NSObject

@property (readonly, retain, nonatomic) NSString *eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL shouldSuppressDSIDHeader; // ivar: _shouldSuppressDSIDHeader
@property (readonly, nonatomic) BOOL shouldSuppressUserInfo; // ivar: _shouldSuppressUserInfo


+(id)_globalCanaryLock;
+(id)globalEventCanary;
+(void)setGlobalEventCanary:(id)arg0 ;
-(BOOL)isBlacklistedByConfiguration:(id)arg0 ;
-(BOOL)isFieldBlacklistEnabled;
-(BOOL)requiresDiagnosticSendingPermission;
-(CGFloat)timeIntervalFromMilliseconds:(id)arg0 ;
-(id)_dictionaryRepresentationOfBody;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg0 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg0 externalValues:(id)arg1 ;
-(id)decorateReportingURL:(id)arg0 ;
-(id)millisecondsFromTimeInterval:(CGFloat)arg0 ;
-(void)appendPropertiesToBody:(id)arg0 ;


@end


#endif