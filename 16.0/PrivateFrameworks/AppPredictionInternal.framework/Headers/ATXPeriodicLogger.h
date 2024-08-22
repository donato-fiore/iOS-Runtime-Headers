// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPERIODICLOGGER_H
#define ATXPERIODICLOGGER_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface ATXPeriodicLogger : NSObject {
    NSArray *_sources;
    NSDate *_lastSent;
    CGFloat _uploadInterval;
    BOOL _enrolled;
    NSDate *_lastEnrolled;
    CGFloat _enrollmentRate;
    CGFloat _enrollmentPeriod;
}




+(BOOL)readEnrollmentFromDefaults;
+(CGFloat)getEnrollmentRate;
+(id)readDateFromDefaultsForKey:(id)arg0 ;
+(id)readLastEnrolledFromDefaults;
+(id)readLastSentFromDefaults;
-(BOOL)determineEnrollment;
-(BOOL)getEnrollment;
-(BOOL)hasEnrollmentExpired:(id)arg0 ;
-(BOOL)isItTimeYet:(id)arg0 ;
-(id)compileAndSendMetrics:(id)arg0 ;
-(id)compileLog;
-(id)convertDictionaryToDataUnits:(id)arg0 ;
-(id)generateUserId;
-(id)getLastEnrolled;
-(id)getLastSent;
-(id)getUserId;
-(id)init;
-(id)initWithSources:(id)arg0 uploadInterval:(CGFloat)arg1 enrollmentPeriod:(CGFloat)arg2 enrollmentRate:(CGFloat)arg3 ;
-(id)sendMetricsAtThisTime:(id)arg0 ;
-(id)sendMetricsIfNeededAtThisTime:(id)arg0 ;
-(void)clearUserId;
-(void)overrideEnrollmentRate:(CGFloat)arg0 ;
-(void)sendMetricsIfNeeded;
-(void)setDate:(id)arg0 forKey:(id)arg1 ;
-(void)setEnabledOnSourcesTo:(BOOL)arg0 ;
-(void)setEnrollment:(BOOL)arg0 ;
-(void)setLastEnrolledToTime:(id)arg0 ;
-(void)setLastSentToTime:(id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif