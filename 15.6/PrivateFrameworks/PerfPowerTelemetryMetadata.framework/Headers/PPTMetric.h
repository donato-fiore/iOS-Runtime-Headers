// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTMETRIC_H
#define PPTMETRIC_H

@class PPTCadence, NSString, PPTDeviceType, PPTObfuscation, PPTSource;

#import <Foundation/Foundation.h>

#import "PPTRounding.h"
#import "PPTUnit.h"

@interface PPTMetric : NSObject

@property (readonly) PPTCadence *cadence; // ivar: _cadence
@property (readonly) NSString *category; // ivar: _category
@property (readonly) int datatype; // ivar: _datatype
@property (readonly) PPTDeviceType *deviceType; // ivar: _deviceType
@property (readonly) int directionality; // ivar: _directionality
@property (readonly) int enabledPopulation; // ivar: _enabledPopulation
@property (readonly) int mode; // ivar: _mode
@property (readonly) NSString *name; // ivar: _name
@property (readonly) PPTObfuscation *obfuscation; // ivar: _obfuscation
@property (readonly) PPTRounding *rounding; // ivar: _rounding
@property (readonly) PPTSource *source; // ivar: _source
@property (readonly) int storage; // ivar: _storage
@property (readonly) NSString *subsystem; // ivar: _subsystem
@property (readonly) unsigned int timeToLive; // ivar: _timeToLive
@property (readonly) PPTUnit *unit; // ivar: _unit
@property (readonly) CGFloat version; // ivar: _version


+(BOOL)isValidCategory:(id)arg0 ;
+(BOOL)isValidDatatype:(int)arg0 ;
+(BOOL)isValidDirectionality:(int)arg0 ;
+(BOOL)isValidMetricJSON:(id)arg0 ;
+(BOOL)isValidMode:(int)arg0 ;
+(BOOL)isValidName:(id)arg0 ;
+(BOOL)isValidPopulation:(int)arg0 ;
+(BOOL)isValidStorage:(int)arg0 ;
+(BOOL)isValidSubsystem:(id)arg0 ;
+(BOOL)isValidTTL:(unsigned int)arg0 ;
+(BOOL)isValidVersion:(CGFloat)arg0 ;
+(id)jsonDataWithMetrics:(id)arg0 ;
+(id)metricWithJSONObject:(id)arg0 ;
+(id)metricWithProto:(id)arg0 ;
+(id)metricsWithJSONData:(id)arg0 ;
+(id)metricsWithPlist:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 subsystem:(id)arg1 category:(id)arg2 version:(CGFloat)arg3 datatype:(int)arg4 unit:(id)arg5 cadence:(id)arg6 directionality:(int)arg7 storage:(int)arg8 timeToLive:(unsigned int)arg9 mode:(int)arg10 source:(id)arg11 deviceType:(id)arg12 population:(int)arg13 rounding:(id)arg14 obfuscation:(id)arg15 ;
-(id)initWithName:(id)arg0 version:(CGFloat)arg1 datatype:(int)arg2 unit:(id)arg3 baseMetric:(id)arg4 ;
-(id)initWithName:(id)arg0 version:(CGFloat)arg1 datatype:(int)arg2 unit:(id)arg3 rounding:(id)arg4 obfuscation:(id)arg5 baseMetric:(id)arg6 ;
-(id)json;
-(id)proto;


@end


#endif