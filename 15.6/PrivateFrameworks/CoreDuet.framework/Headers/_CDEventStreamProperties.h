// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDEVENTSTREAMPROPERTIES_H
#define _CDEVENTSTREAMPROPERTIES_H

@class NSURL, NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "_DKObjectType.h"

@interface _CDEventStreamProperties : NSObject

@property (readonly, nonatomic) NSURL *contentProviderBundleURL; // ivar: contentProviderBundleURL
@property (readonly, nonatomic) BOOL dataCollectionEnabled; // ivar: dataCollectionEnabled
@property (readonly, nonatomic) NSNumber *dataCollectionEnabledNum; // ivar: _dataCollectionEnabledNum
@property (readonly, nonatomic) NSObject *dataCollectionObject; // ivar: _dataCollectionObject
@property (readonly, nonatomic) NSString *descriptionString; // ivar: descriptionString
@property (readonly, nonatomic) NSUInteger domainAvailability; // ivar: domainAvailability
@property (readonly, nonatomic) NSNumber *domainAvailabilityNum; // ivar: _domainAvailabilityNum
@property (readonly, nonatomic) NSInteger eventCountLimit; // ivar: eventCountLimit
@property (readonly, nonatomic) NSInteger eventsPerPeriod; // ivar: eventsPerPeriod
@property (readonly, nonatomic) NSString *formattedName; // ivar: formattedName
@property (readonly, nonatomic) BOOL isAvailable; // ivar: isAvailable
@property (readonly, nonatomic) NSNumber *isAvailableNum; // ivar: _isAvailableNum
@property (readonly, nonatomic) BOOL isHistorical; // ivar: isHistorical
@property (readonly, nonatomic) BOOL isInstant; // ivar: isInstant
@property (readonly, nonatomic) NSString *knowledgeBaseMetadataClass; // ivar: knowledgeBaseMetadataClass
@property (readonly, nonatomic) NSString *knowledgeBaseName; // ivar: knowledgeBaseName
@property (readonly, nonatomic) NSString *monitorClass; // ivar: monitorClass
@property (readonly, nonatomic) NSString *name; // ivar: name
@property (readonly, nonatomic) CGFloat period; // ivar: period
@property (readonly, nonatomic) NSObject *platformObject; // ivar: _platformObject
@property (readonly, nonatomic) NSInteger pollingPeriod; // ivar: pollingPeriod
@property (readonly, nonatomic) BOOL setupOnDemand; // ivar: setupOnDemand
@property (readonly, nonatomic) BOOL shouldSaveCurrentEventOnShutdown; // ivar: shouldSaveCurrentEventOnShutdown
@property (readonly, nonatomic) CGFloat temporalPrecision; // ivar: temporalPrecision
@property (readonly, nonatomic) CGFloat timeToLive; // ivar: timeToLive
@property (readonly, nonatomic) _DKObjectType *valueType; // ivar: valueType


+(id)eventStreamPropertiesFromDictionary:(id)arg0 ;
+(id)eventStreamPropertiesFromDictionary:(id)arg0 defaultProperties:(id)arg1 ;
-(id)description;
-(id)initFromDictionary:(id)arg0 defaultProperties:(id)arg1 ;


@end


#endif