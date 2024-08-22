// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSMETRICSMUTABLEEVENT_H
#define SSMETRICSMUTABLEEVENT_H

@class NSNumber, NSString, NSDictionary;
@protocol NSMutableCopying;


#import "SSMetricsEvent.h"

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying>



@property (retain, nonatomic) NSNumber *accountIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSNumber *baseVersion;
@property (readonly, copy, nonatomic) NSDictionary *bodyDictionary; // ivar: _mutableBody
@property (retain, nonatomic) NSString *canaryIdentifier;
@property (retain, nonatomic) NSNumber *clientVersion;
@property (retain, nonatomic) NSString *connection;
@property (retain, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *eventVersion;
@property (retain, nonatomic) NSString *hostApplicationIdentifier;
@property CGFloat originalTime;
@property (retain, nonatomic) NSNumber *previousClientVersion;
@property (nonatomic) BOOL shouldSuppressDSIDHeader; // ivar: _shouldSuppressDSIDHeader
@property (nonatomic) BOOL shouldSuppressUserInfo; // ivar: _shouldSuppressUserInfo
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSString *userAgent;


-(id)debugDescription;
-(id)decorateReportingURL:(id)arg0 ;
-(id)init;
-(id)initWithBodyDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)propertyForBodyKey:(id)arg0 ;
-(void)addPropertiesWithDictionary:(id)arg0 ;
-(void)appendPropertiesToBody:(id)arg0 ;
-(void)setProperty:(id)arg0 forBodyKey:(id)arg1 ;


@end


#endif