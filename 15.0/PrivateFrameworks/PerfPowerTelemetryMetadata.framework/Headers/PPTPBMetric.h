// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTPBMETRIC_H
#define PPTPBMETRIC_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "PPTPBCadence.h"
#import "PPTPBDeviceType.h"
#import "PPTPBObfuscation.h"
#import "PPTPBRounding.h"
#import "PPTPBSource.h"
#import "PPTPBUnit.h"

@interface PPTPBMetric : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *build; // ivar: _build
@property (retain, nonatomic) PPTPBCadence *cadence; // ivar: _cadence
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (nonatomic) int datatype; // ivar: _datatype
@property (retain, nonatomic) PPTPBDeviceType *deviceType; // ivar: _deviceType
@property (nonatomic) int directionality; // ivar: _directionality
@property (nonatomic) int enabledPopulation; // ivar: _enabledPopulation
@property (retain, nonatomic) NSString *exampleValue; // ivar: _exampleValue
@property (readonly, nonatomic) BOOL hasBuild;
@property (readonly, nonatomic) BOOL hasCadence;
@property (readonly, nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasDatatype;
@property (readonly, nonatomic) BOOL hasDeviceType;
@property (nonatomic) BOOL hasDirectionality;
@property (nonatomic) BOOL hasEnabledPopulation;
@property (readonly, nonatomic) BOOL hasExampleValue;
@property (readonly, nonatomic) BOOL hasMetricDescription;
@property (nonatomic) BOOL hasMode;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasObfuscation;
@property (readonly, nonatomic) BOOL hasRounding;
@property (readonly, nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasStorage;
@property (readonly, nonatomic) BOOL hasSubsystem;
@property (nonatomic) BOOL hasTimeToLive;
@property (readonly, nonatomic) BOOL hasUnit;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *metricDescription; // ivar: _metricDescription
@property (nonatomic) int mode; // ivar: _mode
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) PPTPBObfuscation *obfuscation; // ivar: _obfuscation
@property (retain, nonatomic) PPTPBRounding *rounding; // ivar: _rounding
@property (retain, nonatomic) PPTPBSource *source; // ivar: _source
@property (nonatomic) int storage; // ivar: _storage
@property (retain, nonatomic) NSString *subsystem; // ivar: _subsystem
@property (nonatomic) unsigned int timeToLive; // ivar: _timeToLive
@property (retain, nonatomic) PPTPBUnit *unit; // ivar: _unit
@property (nonatomic) CGFloat version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif